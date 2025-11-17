<div align="center">
  <img src="./assets/images/logo.png" alt="FAST Logo" width="160" />
  <h1>FAST: A Fast and Easy-to-Use LaTeX Template (for School Coursework)</h1>
</div>

<div align="center">

<!-- PDFLaTeX, Biber, BibLaTeX, listings -->
![Build with PDFLaTeX](https://img.shields.io/badge/build-PDFLaTeX-blue)
![Biber Supported](https://img.shields.io/badge/biblatex-biber-yellow)
![Listings Supported](https://img.shields.io/badge/code-listings-green)

</div>

<div align="center">

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
![MultiPlatform](https://img.shields.io/badge/multi%20platform%20support-Windows%20%7C%20Linux-lightgrey)
[![VSCode Ready](https://img.shields.io/badge/Editor-VSCode-blue)](https://code.visualstudio.com/)

</div>

<div align="center">

[**English**](./README_EN.md) | [**简体中文**](./README.md)

</div>

# Introduction

This is a dedicated branch of the FAST LaTeX template, adapted to the Final Year Project (FYP) Proposal MS Word template used by XJTLU Taicang Campus (XEC) for the 2025 AIAC program. It reproduces the Word template's layout and requirements so students can write their FYP Proposal in LaTeX more easily.

> ⚠️ Most features from the original project are preserved, but some features have been removed or simplified in this branch to better match the FYP Proposal requirements (for example, course-code fields in headers/footers have been removed).

- The primary metadata is located in `meta.tex` (for example: supervisor name).

- FYP-specific settings can be found in `config/fyp_settings.tex`; that file includes detailed comments—please edit it as needed.

## 🚨 BREAKING CHANGE 🚨
This project's core compilation engine has switched from `pdfLaTeX` to `XeLaTeX`, and the bibliography processing chain has changed from `biblatex + biber` to classic `BibTeX`.

For details, please refer to [CHANGELOG.md](./CHANGELOG.md).

If you are using `Overleaf`, remember to switch the compiler to `XeLaTeX` in the left-side menu after importing the project.

![Switch to XeLaTeX - 1](./assets/images/overleaf_switch2xelatex_1.png)
![Switch to XeLaTeX - 1](./assets/images/overleaf_switch2xelatex_2.png)


# 💡 How to Clone
If you want to clone this branch directly, besides cloning the main repository and switching branches, you can also use the following command:

```bash
git clone -b xjtlu-tc-aiac-fyp-proposal-2025 https://github.com/SiriusAhu/FAST-LATEX-TEMPLATE
```

# Showcase

The compiled PDF using this template is also included in the repository. For detailed effects, please refer to [main.pdf](./main.pdf).

## PNG

![main.png](./assets/readme/main.png)