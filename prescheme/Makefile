all: schemeray

schemeray: schemeray.scm
	./front/compile
	./front/gcc-compile -o schemeray schemeray.c /usr/local/scheme48/current/c/unix/io.o /usr/local/scheme48/current/c/unix/misc.o

image: schemeray
	./schemeray
	pnmtopng image.ppm > image.png
	rm image.ppm

png: image.ppm
	pnmtopng image.ppm > image.png
