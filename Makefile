all: schemeray image.png

schemeray: schemeray.scm obj-file-parser.scm
	gsc -link -e '(load "~~/syntax-case")' schemeray.scm
	gcc -I/Library/Gambit-C/current/include -o schemeray schemeray*.c -lgambc

image.png: schemeray
	./schemeray
	pnmtopng image.ppm > image.png
