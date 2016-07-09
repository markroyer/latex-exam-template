NAME=exam

default: pdf

dvi: $(NAME).dvi

$(NAME).dvi: $(NAME).tex lstcustom.sty
	latex $(NAME).tex
	# Run latex twice for references
	latex $(NAME).tex

pdf: $(NAME).pdf

$(NAME).pdf: $(NAME).tex lstcustom.sty
	pdflatex $(NAME).tex
	# Run latex twice for references
	pdflatex $(NAME).tex

prog: main.cpp
	g++ -g main.cpp -o prog

clean:
	rm -f prog *~ $(addprefix $(NAME).,aux dvi log pdf)
