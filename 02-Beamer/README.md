# 02 — Beamer

## What is Beamer?

Beamer is a LaTeX document class used to create presentation slides. Instead of designing slides with a mouse, the presenter writes LaTeX code and compiles it into a PDF presentation.

## Basic structure

A Beamer presentation uses the `beamer` document class. Each slide is created using a `frame` environment.

```latex
\\documentclass{beamer}
\\title{My Presentation}
\\author{Your Name}

\\begin{document}
\\begin{frame}
  \\titlepage
\\end{frame}

\\begin{frame}{Introduction}
  This is my first slide.
\\end{frame}
\\end{document}
```

## Important commands

| Command | Purpose |
|---|---|
| `\\documentclass{beamer}` | Creates a slide presentation |
| `\\begin{frame}{Title}` | Starts a slide |
| `\\end{frame}` | Ends a slide |
| `\\title{...}` | Sets presentation title |
| `\\author{...}` | Sets presenter |
| `\\titlepage` | Displays the title slide |
| `\\usetheme{Madrid}` | Applies a presentation theme |
| `\\item` | Adds a bullet point |

## Themes

Beamer includes themes that change the appearance of slides. For example:

```latex
\\usetheme{Madrid}
```

Other themes include `Berlin`, `CambridgeUS`, and `Warsaw`.

## Lists and columns

Bulleted lists can be created with `itemize`. The `columns` environment can place content side by side.

## What I learned

- Beamer is based on LaTeX.
- Each frame represents a slide.
- Themes provide consistent slide styling.
- Mathematical equations can be written using normal LaTeX math syntax.

## Practical task

Compile `Examples/sample-presentation.tex` and inspect the generated PDF.
