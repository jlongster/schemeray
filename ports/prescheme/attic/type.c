
#include <stdlib.h>
#include <stdio.h>

int type_banana = 1;
int type_orange = 2;
int type_apple = 3;

struct object {
	int type;
	char* size;
};
typedef struct object object;

struct banana {
	int type;
	char* size;
	float softness;
	int length;
};
typedef struct banana banana;

struct orange {
	int type;
	char* size;
	unsigned char peeled;
};
typedef struct orange orange;

struct apple {
	int type;
	char* size;
	short weight;
	char* color;
};
typedef struct apple apple;

banana* make_banana(char* size, float softness, int length) {
	banana* b = (banana*)malloc(sizeof(banana));
	b->type = type_banana;
	b->size = size;
	b->softness = softness;
	b->length = length;
	return b;
}

orange* make_orange(char* size, unsigned char peeled) {
	orange* o = (orange*)malloc(sizeof(orange));
	o->type = type_orange;
	o->size = size;
	o->peeled = peeled;
	return o;
}

apple* make_apple(char* size, float weight, char* color) {
	apple* a = (apple*)malloc(sizeof(apple));
	a->type = type_apple;
	a->size = size;
	a->weight = weight;
	a->color = color;
	return a;
}

int main(int argc, char** argv) {
	apple* a = make_apple("small", 2.5, "red");
	banana* b = make_banana("big", 1.5, 5);

	object* generic1 = (object*)a;
	object* generic2 = (object*)b;

	printf("generic1 size: %s\n", a->size);
	printf("generic2 size: %s\n", b->size);

	printf("\nLocations:\n");
	printf("apple:         0x%x\n", a);
	printf("apple->type:   0x%x\n", &a->type);
	printf("apple->size:   0x%x\n", &a->size);
	printf("apple->weight: 0x%x\n", &a->weight);
	printf("apple->color:  0x%x\n", &a->color);

	printf("\nSizes:\n");
	printf("apple:         %d\n", sizeof(apple));
	printf("apple->type:   %d\n", (long)&a->size - (long)&a->type);
	printf("apple->size:   %d\n", (long)&a->weight - (long)&a->size);
	printf("apple->weight: %d\n", (long)&a->color - (long)&a->weight);
	printf("apple->color:  %d\n", ((long)a + sizeof(apple)) - (long)&a->color);

	printf("\nType sizes:\n");
	printf("`long' size: %d\n", sizeof(long));
	printf("`long long' size: %d\n", sizeof(long long));
}
