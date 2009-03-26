
#define ISNULL(o) (o == NULL)

void write_byte(unsigned char n, FILE* f) {
	fwrite(&n, 1, 1, f);
}

void write_real(double n) {
	printf("%f", n);
}
