DOCNAME=Infodeck

all: html

html:
	review-compile --target html --stylesheet=style.css -a

epub: html
	rm -f *.epub
	review-epubmaker ${DOCNAME}.yaml

mobi: epub
	rm -f *.mobi
	kindlegen ${DOCNAME}.epub

clean:
	rm -f *.epub
	rm -f *.mobi
	rm -f *.html
