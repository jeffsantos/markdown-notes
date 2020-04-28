MD_FILES=notes.md notes2.md
ONE_FILE=`cat index.txt`
BIBLIOGRAPHY=ref.bib
TEX_FILES:=$(MD_FILES:.md=.tex)
PDF_FILES:=$(MD_FILES:.md=.pdf)
TEMPLATE=templates/notes.latex
CSL=abnt.csl
PANDOC=pandoc

all: $(TEX_FILES)

%.tex: %.md
	$(PANDOC) -f markdown+smart \
            --filter pandoc-fignos \
            --filter pandoc-citeproc \
            --csl $(CSL) \
            --template $(TEMPLATE) $< -o $@ \
            --bibliography ${BIBLIOGRAPHY}


.PHONY : pdf clean

pdf:
	latexmk -pdf

clean:
	# -rm $(PDF_FILES) $(TEX_FILES) *.aux *.out *.log *.fdb_latexmk *.fls *.synctex.gz
	latexmk -CA
	-rm $(TEX_FILES)

watch: $(MD_FILES) $(BIBLIOGRAPHY)
	fswatch -o $^ | xargs -n1 -I{} make

merge:
	$(PANDOC) -f markdown+smart \
            --filter pandoc-fignos \
            --filter pandoc-citeproc \
            --csl $(CSL) \
            --template $(TEMPLATE) \
            -o result.pdf \
            --bibliography ${BIBLIOGRAPHY} \
            $(ONE_FILE)

