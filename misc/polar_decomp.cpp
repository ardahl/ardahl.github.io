//2D Direct Polar Decomposition Solve
void polar2D(const Eigen::Matrix2d &B, Eigen::Matrix2d &Q, Eigen::Matrix2d &A) {
    if(B(0,1) == B(1,0)) {
        if (B(0,0)+B(1,1) >= 0) {
            Q << 1, 0, 0, 1;
            A=B;
        } else {
            Q << -1, 0, 0, -1;
            A=-1.0*B;
        }
        return;
    }
    double c = B(0,0)+B(1,1);
    double s = B(1,0)-B(0,1);
    double h = sqrt(c*c+s*s);
    c /= h;
    s /= h;
    Q(0,0) = c; Q(0,1) = -s;
    Q(1,0) = s; Q(1,1) = c;
    A = Q.transpose()*B;
}

//3D Polar Decomposition by iterative 2D solves along the different axes
void polar(const Eigen::Matrix3d &B, Eigen::Matrix3d &Q, Eigen::Matrix3d &A) {
    Eigen::Matrix2d q, a, pol;
    double polareps = 0.001;
    A = Q.transpose()*B;
    int iter = 0;
    double relError = 2*polareps;
    do {
        // j=1, i=0
        pol << A(0,0), A(0,1), A(1,0), A(1,1);
        polar2D(pol, q, a);
        Q << Q(0,0)*q(0,0)+Q(0,1)*q(1,0), Q(0,0)*q(0,1)+Q(0,1)*q(1,1), Q(0,2),
             Q(1,0)*q(0,0)+Q(1,1)*q(1,0), Q(1,0)*q(0,1)+Q(1,1)*q(1,1), Q(1,2),
             Q(2,0)*q(0,0)+Q(2,1)*q(1,0), Q(2,0)*q(0,1)+Q(2,1)*q(1,1), Q(2,2);
        A << q(0,0)*A(0,0)+q(1,0)*A(1,0), q(0,0)*A(0,1)+q(1,0)*A(1,1), q(0,0)*A(0,2)+q(1,0)*A(1,2),
             q(0,1)*A(0,0)+q(1,1)*A(1,0), q(0,1)*A(0,1)+q(1,1)*A(1,1), q(0,1)*A(0,2)+q(1,1)*A(1,2),
             A(2,0), A(2,1), A(2,2);

        // j=2, i=0
        pol << A(0,0), A(0,2), A(2,0), A(2,2);
        polar2D(pol, q, a);
        Q << Q(0,0)*q(0,0)+Q(0,2)*q(1,0), Q(0,1), Q(0,0)*q(0,1)+Q(0,2)*q(1,1),
             Q(1,0)*q(0,0)+Q(1,2)*q(1,0), Q(1,1), Q(1,0)*q(0,1)+Q(1,2)*q(1,1),
             Q(2,0)*q(0,0)+Q(2,2)*q(1,0), Q(2,1), Q(2,0)*q(0,1)+Q(2,2)*q(1,1);
        A << q(0,0)*A(0,0)+q(1,0)*A(2,0), q(0,0)*A(0,1)+q(1,0)*A(2,1), q(0,0)*A(0,2)+q(1,0)*A(2,2),
             A(1,0), A(1,1), A(1,2),
             q(0,1)*A(0,0)+q(1,1)*A(2,0), q(0,1)*A(0,1)+q(1,1)*A(2,1), q(0,1)*A(0,2)+q(1,1)*A(2,2);

        // j=2, i=1
        pol << A(1,1), A(1,2), A(2,1), A(2,2);
        polar2D(pol, q, a);
        Q << Q(0,0), Q(0,1)*q(0,0)+Q(0,2)*q(1,0), Q(0,1)*q(0,1)+Q(0,2)*q(1,1),
             Q(1,0), Q(1,1)*q(0,0)+Q(1,2)*q(1,0), Q(1,1)*q(0,1)+Q(1,2)*q(1,1),
             Q(2,0), Q(2,1)*q(0,0)+Q(2,2)*q(1,0), Q(2,1)*q(0,1)+Q(2,2)*q(1,1);
        A << A(0,0), A(0,1), A(0,2),
             q(0,0)*A(1,0)+q(1,0)*A(2,0), q(0,0)*A(1,1)+q(1,0)*A(2,1), q(0,0)*A(1,2)+q(1,0)*A(2,2),
             q(0,1)*A(1,0)+q(1,1)*A(2,0), q(0,1)*A(1,1)+q(1,1)*A(2,1), q(0,1)*A(1,2)+q(1,1)*A(2,2);

        relError = ((A(0,1)-A(1,0))+(A(0,2)-A(2,0))+(A(1,2)-A(2,1))) /
                    (A(0,1)+A(1,0)+A(0,2)+A(2,0)+A(1,2)+A(2,1));
        iter++;
    } while(relError > polareps && iter < 100);
}
