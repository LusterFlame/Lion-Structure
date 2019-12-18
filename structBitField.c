#include <stdio.h>
// define a struct S that its member "a" uses 2 bit.
typedef struct {
	unsigned char a :2;
}S;

int main(){
	printf("Size of struct S = %d\n", sizeof(S));
	S s;
	for(int temp = 0;temp < 16;++temp){
		s.a = temp;
		printf("temp = %d, s.a = %u\n", temp, s.a);
	}
}