---
layout: post-Henry
title: Complexity of Jekyll vs WYSIMYG websites
katex: True
authors: Henry
---
## A showcase of the complexity of Jekyll
On the top of this page, you can see my social media links with 4 cute avatars. Guess what I need to code? (I copied the outline and edited the details. All credits to the [original author](https://ranvir.xyz/blog/why-and-how-to-add-social-sharing-buttons-on-your-jekyll-blog-using-github-pages/#free-advertising-for-your-jekyll-blog-using-social-share-buttons))
```bash
<link href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" rel="stylesheet">
<div id="share-bar-H.html">

    <h4><b>This page is written by Henry Yip. Please Follow Me:</b></h4>

    <div class="share-buttons">
        <a  href="https://www.facebook.com/yip.henry.940/"
            onclick="window.open(this.href, 'pop-up', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
            title="Facebook" >
            <i class="fa fa-facebook-official share-button"> Facebook</i>
        </a>

        <a  href="https://www.linkedin.com/in/henry-yip-100b05222/"
            onclick="window.open(this.href, 'pop-up', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
            title="LinkedIn" >
            <i class="fa fa-linkedin share-button"> Linkedin</i>
        </a>

        <a  href="https://www.instagram.com/henryyiphoyin/"
            title="Instagram" >
            <i class="fa fa-instagram share-button"> Instagram</i>
        </a>

        <a  href="https://github.com/Henry-Yip"
        title="Github" >
        <i class="fa fa-github share-button"> Github</i>
    </a>
    </div>

</div>
<style type="text/css">
/* Share Bar */
#share-bar {
    font-size: 20px;
}
/* Title */
#share-bar h4 {
    margin-bottom: 10px;
    font-weight: 500;
}
/* All buttons */
.share-buttons {
}
/* Each button */
.share-button {
    margin: 0px;
    margin-bottom: 10px;
    margin-right: 3px;
    border: 1px solid #D3D6D2;
    padding: 5px 10px 5px 10px;
}
.share-button:hover {
    opacity: 1;
    color: #f1e101;
}
/* Facebook button */
.fa-facebook-official {
    color: #3b5998;
}
.fa-facebook-official:hover {
    background-color: #3b5998;
}
/* LinkedIn button */
.fa-linkedin {
    color: #007bb5;
}
.fa-linkedin:hover {
    background-color: #3b5998;
}
/* Instagram button */
.fa-instagram {
    color: #DD2A78;
}
.fa-instagram:hover {
    background-color: #3b5998;
}
/* Instagram button */
.fa-github {
    color: #171515;
}
.fa-github:hover {
    background-color: #3b5998;
}
    
</style>
```
And so you can see it's really complicated!
