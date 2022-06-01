---
layout: post-Henry
title: Changing Skins in Minima
katex: False
authors: Henry
---
## Introduction
Jekyll's default theme, **Minima**, provides 4 possible skins. This page (as of 22/5/2022) is created using the solarized skin.
## Installation
Go to the [GitHub Page for Minima](https://github.com/jekyll/minima), copy the codes in **assets** and **_sass** to your VSCode (Use VSCode Please!). 

Note that for **_sass**, you only need to download **_base.scss**, **_layout.scss** and **initialize.scss**

Change the code in **initialize.scss** from:
```bash
@import
  "minima/custom-variables", // Hook to override predefined variables.
  "minima/base",             // Defines element resets.
  "minima/layout",           // Defines structure and style based on CSS selectors.
  "minima/custom-styles"     // Hook to override existing styles.
;
```
to
```bash
@import
  "minima/custom-variables", // Hook to override predefined variables.
  "minima/_base",             // Defines element resets.
  "minima/_layout",           // Defines structure and style based on CSS selectors.
  "minima/custom-styles"     // Hook to override existing styles.
;
```
Then download **classic.scss**, **dark.scss** and **solarized.scss** under _sass/minima/skins. 

There is **NO NEED** to download **solarized-dark.scss**. Whenever you want solarized-dark mode, just do the following:
```bash
$sol-is-dark: true;
```
## Before changing the theme:
Assuming you are chaning to solarized theme.
 Change the settings in **style.scss** to 

```bash
@import
"minima/skins/{{ site.minima.skin | default: 'solarized' }}",
"minima/initialize";

```
 Then change the settings in **_config.yaml** to

```bash
minima:
  skin: solarized
```

I personally think all these themes look terrible, but that's how you do it. You can change some settings by adding **custom-styles.scss** and **custom-variables.scss**, it's a more _elegant_ way of changing things, but you can just change the codes in **_base.scss** and **_layout.scss**.



