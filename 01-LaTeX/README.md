# 01 — LaTeX

## What is LaTeX?

LaTeX is a document preparation system used to create well-formatted technical and academic documents. It is especially useful for reports containing mathematical equations, tables, figures, citations, and references.

## Basic document structure

A LaTeX document generally has two main parts:

- **Preamble:** document class, packages, title information, and formatting settings.
- **Document body:** the actual content between `\\begin{document}` and `\\end{document}`.

```latex
\\documentclass[12pt,a4paper]{article}
\\usepackage{amsmath}
\\usepackage{graphicx}

\\title{My First LaTeX Document}
\\author{Your Name}
\\date{\\today}

\\begin{document}
\\maketitle

\\section{Introduction}
This is my first document written using LaTeX.

\\section{An Equation}
\\[
E = mc^2
\\]

\\end{document}
```

## Important commands

| Command | Purpose |
|---|---|
| `\\documentclass{article}` | Selects the document type |
| `\\usepackage{...}` | Loads an additional package |
| `\\title{...}` | Sets the title |
| `\\author{...}` | Sets the author |
| `\\maketitle` | Displays title information |
| `\\section{...}` | Creates a numbered section |
| `\\subsection{...}` | Creates a subsection |
| `\\textbf{...}` | Makes text bold |
| `\\textit{...}` | Makes text italic |
| `\\begin{itemize}` | Starts a bulleted list |
| `\\begin{enumerate}` | Starts a numbered list |

## Mathematics

Use `$ ... $` for an inline equation and `\\[ ... \\]` for a displayed equation.

```latex
Inline: $a^2 + b^2 = c^2$

Displayed:
\\[
\\frac{-b \\pm \\sqrt{b^2-4ac}}{2a}
\\]
```

Useful symbols include `\\alpha`, `\\beta`, `\\sum`, `\\int`, `\\sqrt{...}`, and `\\frac{a}{b}`.

## Tables and figures

```latex
\\begin{tabular}{|c|c|}
\\hline
Subject & Marks \\\\
\\hline
Maths & 90 \\\\
Physics & 85 \\\\
\\hline
\\end{tabular}
```

For images, load `graphicx` and use `\\includegraphics[width=0.6\\textwidth]{image.png}` inside a figure environment.

## References and bibliography

LaTeX can manage citations and bibliographies. A simple manual bibliography can be created with the `thebibliography` environment. Larger projects commonly use BibTeX or BibLaTeX.

## What I learned

- LaTeX uses commands beginning with a backslash.
- Curly braces contain command arguments.
- Environments begin with `\\begin{...}` and end with `\\end{...}`.
- Packages add features such as mathematics, images, colours, and page formatting.

## Practical task

Compile `Examples/first-document.tex` using Overleaf or a LaTeX editor.
