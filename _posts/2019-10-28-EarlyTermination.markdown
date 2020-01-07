---
layout: post
title:  "Early Termination of Conjugate Gradients for Corotated Finite Elements"
date:   2019-10-28 12:00:00 -0500
categories: research
tags: [Research, Publication, Conjugate Gradients, Corotated, FEM, Finite Element]
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
        <a href="/pdfs/2019-ETF.pdf">
        <img src="/imgs/2019-ETF-cover.gif">
        </a>
        <div class="row links">
            <a href="/pdfs/2019-ETF.pdf">Download PDF</a><br>
            <a href="/misc/2019-ETF-bibtex.txt">BibTex</a><br>
            <a href="https://cal.cs.umbc.edu/gitlab/LastingLuck/FEMProjection">Code</a><br>
            <a href="/misc/polar_decomp.cpp">Polar Decomp</a>
        </div>
    </div>
    <!-- Container for abstract, citation -->
    <div class="column info">
        <div class="row abstract">
            Since the introduction of the conjugate gradient method to computer graphics, researchers have largely treated it as a black box. In particular, an arbitrary small value is chosen for the tolerance and the method is run to convergence. In the context of soft body animation, this approach results in significant wasted computation and has led researchers to consider alternative, more complex, and less versatile approaches. In this paper we argue that in the context of corotational finite elements, less than 10 iterations can give a <i>good enough</i> solution and substantial savings of computational cost. We examine the use of different preconditioners for conjugate gradient including the mass and Jacobi matrices, as well as the use of different initial guesses. We show that for our examples an initial guess of the previous velocity and the Jacobi preconditioner works best.
        </div>
        <div class="row citation">
            A. Dahl and A. W. Bargteil<br>
            <b>"Early Termination of Conjugate Gradients for Corotated Finite Elements."</b><br>
            ACM SIGGRAPH Conference on <i>Motion, Interaction and Games 2019</i><br>
        </div>
    </div>
</div>
<!-- Container for movie image/link -->
<div class="row" align="center">
    <a href="https://youtu.be/CZb5fXZGujU">
    <img src="/imgs/2019-ETF-movie.jpg">
    </a><br>
    <a href="https://youtu.be/CZb5fXZGujU">Full Paper Movie (1920x1080, Youtube)</a>
</div>
