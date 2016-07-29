# latex-exam-template

A latex exam template with codes samples and tikz tree.

The template file automatically tallies the question count and the
number of pages.  The document displays relevant exam information
at the top and bottom of each page (eg, course number, date, page
number, and number of questions).

A
[custom listing file](https://github.com/markroyer/latex-listings-eclipse)
was used for syntax markup.

The exam also makes use of the `lstlisting` labelling ability to refer
to individual lines of code.

## Setup

Make sure that you have the Debian `texlive` package installed.

## Usage

You can build the PDF document by typing

```
make
```

in the root of the repository. The file `exam.pdf` is the
generated output.

Typing

```
make clean
```

will remove all generated files.

## Thanks

This exam template was influenced by exam formats given by Sudarshan
Chawathe.  You can view some of his work at his web site:
[cs.umaine.edu/~chaw](http://cs.umaine.edu/~chaw).

## License

The project is licensed under the terms of the
[GPL3](https://www.gnu.org/licenses/gpl-3.0.en.html) license.

<!--  LocalWords:  texlive pdf tikz lstlisting eg markup labelling
 -->
LocalWords:  Sudarshan Chawathe GPL
