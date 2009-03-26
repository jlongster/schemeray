all: schemeray

schemeray: schemeray.scm
	./front/compile
	./front/gcc-compile -o schemeray schemeray.c /usr/local/scheme48/current/c/unix/io.o /usr/local/scheme48/current/c/unix/misc.o

front/schemeray.image: *.scm
	{ cat front/load.batch; echo "\n ,dump front/schemeray.image"; } | scheme48 -i front/ps-compiler.image -a batch

image: schemeray
	./schemeray
	pnmtopng image.ppm > image.png
	rm image.ppm

png: image.ppm
	pnmtopng image.ppm > image.png
