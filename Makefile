MD_FILES=notes.md c-prof-puc-relatorio-petrobras-3.md ## add more files here if needed
BIBLIOGRAPHY=references.bib
TEX_FILES:=$(MD_FILES:.md=.tex)
PDF_FILES:=$(MD_FILES:.md=.pdf)
TEMPLATE=templates/notes.latex
CSL=../styles/associacao-brasileira-de-normas-tecnicas.csl
PANDOC=pandoc

all: $(PDF_FILES)


%.pdf: %.tex
	pdflatex $<

%.tex: %.md
	$(PANDOC) -f markdown+smart --filter pandoc-fignos --filter pandoc-citeproc --csl $(CSL) --template $(TEMPLATE) $< -o $@ --bibliography ${BIBLIOGRAPHY}

.PHONY : clean
clean :

	-rm $(PDF_FILES) $(TEX_FILES) *.aux *.out *.log *.fdb_latexmk *.fls *.synctex.gz

watch: $(MD_FILES) $(BIBLIOGRAPHY)
	fswatch -o $^ | xargs -n1 -I{} make

