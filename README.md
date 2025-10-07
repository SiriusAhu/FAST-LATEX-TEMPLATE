# FAST: 一款快速上手的 LaTeX 模板（适用于学校CW）

<div align="center">

<!-- PDFLaTeX, Biber, BibLaTeX, listings, TikZ, PGFPlots -->
![Build with PDFLaTeX](https://img.shields.io/badge/build-PDFLaTeX-blue)
![Biber Supported](https://img.shields.io/badge/biblatex-biber-yellow)
![Listings Supported](https://img.shields.io/badge/code-listings-green)
![TikZ Supported](https://img.shields.io/badge/graphics-TikZ-orange)
![PGFPlots Supported](https://img.shields.io/badge/plots-PGFPlots-red)

</div>

<div align="center">

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
![MultiPlatform](https://img.shields.io/badge/multi%20platform%20support-Windows%20%7C%20Linux-lightgrey)
[![VSCode Ready](https://img.shields.io/badge/Editor-VSCode-blue)](https://code.visualstudio.com/)

</div>

<div align="center">

[**English**](./README_EN.md) | [**简体中文**](./README.md)

</div>

## 写在前面：关于这个项目

> 我在大二的时候接触了 LaTeX，并惊讶于其的优雅与强大。
> 由于学校的课程作业（Coursework，简称CW）大多要求提交PDF格式的报告，而Word等传统工具在排版数学公式、插入代码等方面显得力不从心，于是我决定写一个 LaTeX 模板来帮助自己和同学们更方便地使用 LaTeX 来制作一份美观的报告。
> 
> 说干就干，我确实制作了一个仓库！它就是[XJTLU-TC_Latex_Coursework_Template](https://github.com/SiriusAhu/XJTLU-TC_Latex_Coursework_Template)。
> 
> 然而，随着时间的推移，和自身经验的积累，我发现这个模板并没有我想的那么好用、易用，同时也越来越不能让我自己满意了。
> 
> 于是，本着**FAST**，**Accessible**，**Stylish**，**Toolkit**的理念，我重新设计了 **[FAST](https://github.com/SiriusAhu/FAST-CW-LATEX-TEMPLATE)**，这一全新模板！
> 
> 希望它能帮到你，也希望你能喜欢它！:wink:

## 简介

**[FAST](https://github.com/SiriusAhu/FAST-CW-LATEX-TEMPLATE)** 是一个致力于方便学生使用`LaTeX`进行作业报告写作的模板，支持本地与在线平台（如`Overleaf`），支持中英文，易于上手，开箱即用。

[点击这里跳转到使用方法](#使用方法)。

### 主要特性

- [x] 支持数学公式、表格绘制、代码高亮、参考文献等常见核心需求
- [x] 模块化设计，便于定制和扩展
- [x] 配置需求简单，开箱即用
- [x] 同时支持本地与在线平台（如`Overleaf`）

<!-- TODO:贴上效果图 -->

### **FAST**的哲学

本项目本着：

- **Fast**：核心——快捷的编译！
    > 不用再浪费时间找模板了！用它，立刻开始写 Coursework！
- **Accessible**：开箱即用，方便上手！
    > 兼容大多环境，提供自定义命令，以及直接可用的 `VSCode` 配置！
- **Stylish**：美观，无需多言！
    > 是的，用眼睛感受，无需多言😎
- **Toolkit**：适合CW，实用，够用！
    > 数学公式？三线表？代码高亮？参考文献？你需要的，它都有！


### 核心工具

- `PDFLaTeX`：`LaTeX`的主流引擎之一，速度快，兼容性好。
- `biblatex` + `biber`：强大的参考文献处理工具，支持多种引用格式。
- `listings`：一个经典、可靠、快速的代码高亮工具。
- `TikZ` + `PGFPlots`：强大的绘图工具，适合绘制高质量的流程图、数据图表等。
- `cleveref`：智能交叉引用工具，自动识别图、表、公式等。
- `booktabs`, `amsmath`, `graphicx`等：一系列`PDFLaTeX`默认生态下的经典优秀宏包。

### 项目目录结构

```
fast-cw-latex-template/
├── .cache/                 # 编译中间文件（会被 .gitignore 忽略）
├── .vscode/
│   └── settings.json       # VSCode LaTeX Workshop 配置
│
├── assets/                 # 静态资源
│   ├── code/
│   │   ├── example.py
│   │   └── example.cpp
│   ├── images/
│   │   └── example.png
│   └── coverpage.pdf       # 作业封面（一些课程作业会提供）
│
├── bib/
│   └── references.bib      # 参考文献
│
├── config/
│   ├── commands.tex        # 自定义命令与环境
│   ├── preamble.tex        # 宏包引入与全局配置
│   └── style.tex           # 视觉风格（颜色、标题、页眉页脚）
│
├── content/
│   ├── 01-introduction.tex
│   ├── 02-bilingual.tex
│   ├── 03-math.tex
│   ├── 04-figures.tex
│   ├── 05-tables.tex
│   ├── 06-graphs.tex
│   ├── 07-code.tex
│   ├── 08-references.tex
│   └── appendix.tex
│
├── docs/                   # 文档（待完善）
├── examples/               # 示例文件（待完善）
├── .gitignore              # Git忽略文件
├── LICENSE                 # 许可证（GPLv3）
│
├── main.pdf                # 输出的PDF
├── main.tex                # 总入口文件
├── meta.tex                # 元信息（题目/作者/日期/摘要等）
├── options.tex             # 用户选项（主题色、代码风格等）
│
├── README_EN.md            # 说明文档（英文）
└── README.md               # 说明文档（中文）
```

## 使用方法

### 0-1. 环境检查
<!-- TODO:使用虚拟机测试Windows和Linux下的完整安装流程 -->

先验证一下`Tex Live`和核心工具是否已经安装在设备上。

```bash
tex --version  # 验证Tex Live成功安装

pdflatex --version  # 验证PDFLaTeX成功安装

biber --version  # 验证Biber成功安装
```

如果没有安装的话，请安装 [**Tex Live 2024**](https://www.tug.org/texlive/) 或更新版本（旧版本未测试）。

<!-- TODO: 测试、适配 Overleaf -->
<!-- > 不过别担心，该项目也支持在 `Overleaf` （一个热门的在线 `LaTeX` 编辑器）上使用。 -->

### 0-2. VSCode相关配置

该项目自带了一个`.vscode/settings.json`配置文件。如果你使用`VSCode`作为编辑器，它会直接覆盖默认的用户配置生效。（这样你就不用浪费时间在各种额外配置上了！😎）

> Q: 如果我不想用你的配置怎么办？
> 
> A: 如果你有自己的一套配置，不想用仓库中的配置，那么你可以选择删除`.vscode`文件夹，或者将其重命名为其他名字（如`.vscode_backup`）。这样它就不会覆盖默认的用户配置了。

### 1. 克隆或下载该项目

```bash
git clone https://github.com/SiriusAhu/FAST-LATEX-TEMPLATE.git
cd FAST-LATEX-TEMPLATE
```

或者直接下载ZIP包并解压。

### 2. 编辑`meta.tex`和`options.tex`

按照需求修改即可。
- `meta.tex`：填写作业的元信息，包括但不限于：
    - 课程代码
    - 课程名称
    - 作者名称
    - 作者学号
    - Coverpage的路径
    - 封面页图片路径及其大小
    - 摘要
- `options.tex`：根据个人喜好调整以下设置：
    - 主题色、代码风格等选项。

### 3. 尝试编译

试试看编译是否能成功：渲染是否报错？输出的PDF文件上的元信息是否与`meta.tex`中填写的一致？

#### 3-1. 使用命令行编译

编译链条：`PDFLaTeX -> Biber -> PDFLaTeX -> PDFLaTeX`。

```bash
pdflatex main.tex
biber main
pdflatex main.tex
pdflatex main.tex
```

#### 3-2. 使用VSCode编译

安装`LaTeX Workshop`扩展，然后使用`VSCode`打开项目文件夹，点击左侧扩展栏中的`TeX`图标，选择`Build LaTeX project`下的`Full Build`进行编译。

![VSCode Build](./assets/readme/latex_workshop.jpg)

### 4. 一切就绪，开始写作吧！

**[FAST](https://github.com/SiriusAhu/FAST-CW-LATEX-TEMPLATE)** 使用了模块化设计，正文章节内容都放在了`content/`文件夹中，而它们统一被`main.tex`文件调用。

比如说，一个`content/01-introduction.tex`文件可以在`main.tex`中被如下代码调用：

```latex
\input{content/01-introduction.tex}
```

`content`下的文件并非固定的，你可以根据需要添加、删除、重命名这些文件并在`main.tex`中进行相应的调用即可。

### 5. 自定义命令

TODO: 制作专门的自定义命令的文档，以及跳转链接

## Q&A
- 为什么使用`PDFLaTeX`而不是`XeLaTeX`，亦或是标榜为“未来发展方向”的`LuaLaTeX`？
    1. 对**速度**的追求：学生在写作业的时候需要频繁地编译，几种主流引擎中，`PDFLaTeX`的速度是最快的。
    1. 对**兼容性**的追求：`PDFLaTeX`是一个已经很成熟的引擎，无论是本地还是在线工具（如`Overleaf`）都对其有着很完善的支持。
    1. 对**易用性**的追求：我制作这个模板的目的是为了让更多的同学能便利地用上LaTeX。考虑到安装难度和使用难度，`PDFLaTeX`无疑是最合适的选择。
- 为什么仍然选择 `biblatex + biber`，而不是更快的 `bibtex`？
    1. **功能先进**：`biblatex` 与 `biber` 的组合支持更复杂的引用样式（如 APA7、IEEE、GB/T 7714），并能轻松处理中文、特殊字符、DOI、URL 等现代文献需求。
    2. **学术写作的主流趋势**：虽然编译稍慢，但 `biblatex + biber` 已是现代学术写作的主流趋势，并获得主要期刊和模板的支持。
    3. **不影响使用体验**：虽然编译相对较慢，但是也只需要几秒钟，仍然可以接受。另外，写了这么久，为何不利用这难得的几秒钟来让自己喘口气呢？😉
- 为什么使用`listings` 而不是 `minted`？
    1. **安装和使用更简单**：`minted` 依赖 Python 和 Pygments，安装和配置需要额外的操作，不符合该项目“易用”的初衷。而 `listings` 可以做到开箱即用。
    2. **编译速度更快**：`minted` 需要在编译时调用外部程序，导致编译速度变慢。而 `listings` 是纯 LaTeX 宏包，编译速度更快。

## 已知issue
1. “配置文件中明明使用的是`.vscode/settings.json`下的recipe，同时设置了在保存时自动编译。但我发现每次保存时系统却会使用其他的recipe进行编译。这是怎么回事？”
    - 诊断：有可能你已经在默认的配置文件下进行过有关`"latex-workshop.latex.recipe.default"`的设置。
    - 解决方案：将配置文件中的`"latex-workshop.latex.recipe.default"`改为`"lastUsed"`（不影响在其他项目中的使用），或者直接注释掉（可能影响在其他项目中的使用）。
2. “为什么我编译后的PDF文件中没有引用？（是用的是`VSCode`）”
    - 诊断：有可能是你使用的是项目给出的默认recipe，“Quick Build”，其不包含`biber`的调用。
    - 解决方案：手动点击选择扩展栏中的`Full Build`这一recipe进行编译就好啦。

## TODO
- [x] 将`LaTeX`模板模块化
- [ ] 完成英文`README.md`
- [ ] 创建`docs`文件夹，放置文档和示例
- [ ] 给出一些伪作业的examples，以便展示潜力（欢迎使用该模板并提交PR到examples中！）