#include <stdio.h>
// define a struct S that its member "a" uses 2 bit.
typedef struct {
	char a;
	char b;
	int c;
	int d;
	char e;
	unsigned char :0;
	char f;

}S;

int main(){
	S s;

	printf("address of s.a = %p\n", &s.a);
	printf("address of s.b = %p\n", &s.b);
	printf("address of s.c = %p\n", &s.c);
	printf("address of s.d = %p\n", &s.d);
	printf("address of s.e = %p\n", &s.e);
	printf("address of s.f = %p\n", &s.f);
}