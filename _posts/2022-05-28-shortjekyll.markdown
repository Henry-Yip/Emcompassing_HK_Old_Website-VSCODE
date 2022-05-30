---
layout: post-Henry
title: Jekyll Problems Q&A
katex: False
---

#1 **Canonical url being localhost**

**Solution:**
In command prompt, chdir to the place you saved the files, type 
```bash
bundle exec jekyll build
```
You should be able to see:
```bash
Destination: C:/Users/.../_site
```
Then after you push origin the problem should be solved