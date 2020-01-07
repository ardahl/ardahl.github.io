---
layout: post
title:  "Global Momentum Preservation for Position-based Dynamics"
date:   2019-10-28 12:00:00 -0500
categories: research
tags: [Research, Publication, PBD, Position Based Dynamics, Rotation]
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
    <!-- Container for cover image, links -->
    <div class="column cover">
        <a href="/pdfs/2019-GMP.pdf">
        <img src="/imgs/2019-GMP-cover.png">
        </a>
        <div class="row links">
            <a href="/pdfs/2019-GMP.pdf">Download PDF</a><br>
            <a href="/misc/2019-GMP-bibtex.txt">BibTex</a><br>
            <a href="/misc/2019-GMP-patch.zip" download>Bullet3D Patch</a>
        </div>
    </div>
    <!-- Container for abstract, citation -->
    <div class="column info">
        <div class="row abstract">
            Position-based dynamics has emerged as an exceedingly popular approach for animating soft body dynamics. Unfortunately, the basic approach suffers from artificial loss of angular momentum. We propose a simple approach to preserve global linear and angular momenta of bodies by directly tracking these quantities and adjusting velocities to ensure they are preserved. This approach entails negligible computational cost, requires less than 25 lines of code, and exactly preserves global linear and angular momenta.
        </div>
        <div class="row citation">
            A. Dahl and A. W. Bargteil<br>
            <b>"Global Momentum Preservation for Position-based Dynamics."</b><br>
            ACM SIGGRAPH Conference on <i>Motion, Interaction and Games 2019</i><br>
        </div>
    </div>
</div>
<!-- Container for movie image/link -->
<div class="row" align="center">
    <a href="https://youtu.be/r1B_61UNAIg">
    <img src="/imgs/2019-GMP-movie.gif">
    </a><br>
    <a href="https://youtu.be/r1B_61UNAIg">Full Paper Movie (1920x1080, Youtube)</a>
</div>
