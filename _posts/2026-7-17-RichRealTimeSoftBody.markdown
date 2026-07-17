---
layout: post
title:  "Early Termination of Conjugate Gradients for Corotated Finite Elements"
date:   2026-7-17 12:00:00 -0500
categories: research
tags: [Research, Dissertation, Publication, Conjugate Gradients, Corotated, FEM, Finite Element, PBD, Position Based Dynamics, Rotation]
---

<style>
* {
  box-sizing: border-box;
}

.row:after {
    content: "";
    display: table;
    clear: both;
}

.column {
    float: left;
    padding: 10px;
}

.cover {
    width: 30%;
}

.info {
    width: 70%;
}

.abstract {
    font-size: small;
    padding-bottom: 20px;
}

.citation {
    font-size: medium;
    padding-bottom: 30px;
}

.links {
    padding-top: 10px;
}
</style>

<!-- Container for image, abstract, citation, and links -->
<div class="row">
    <!-- Container for cover image and links -->
    <div class="column cover">
        <a href="/pdfs/Rich_Real_Time_Soft_Body_Animation.pdf">
        <img src="/imgs/thesis_thumbnail.png">
        </a>
        <div class="row links">
            <a href="/pdfs/Rich_Real_Time_Soft_Body_Animation.pdf">Download PDF</a><br>
        </div>
    </div>
    <!-- Container for abstract, citation -->
    <div class="column info">
        <div class="row abstract">
            This thesis explores adding richness to soft body simulation in the context of real time animation. We explore inside the black box of conjugate gradient, including the preconditioner and initial guess, to better inform at what point the result can be considered a ”good enough” solution. The damping of rigid body motion in Position based Dynamics is removed by separating out the rigid modes and explicitly tracking rigid linear and angular velocity to calculated correction terms. We improve the richness of rigid body simulations by creating a deformation layering system to add local and global deformations without changing the underlying rigid body simulation. We also present a new spring force formulation that forms easier systems to solve.
        </div>
        <div class="row citation">
            A. Dahl<br>
            PhD Dissertation, University of Maryland Baltimore County, Catonsville, Maryland, May 2026<br>
        </div>
    </div>
</div>
