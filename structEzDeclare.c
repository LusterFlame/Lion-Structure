// structExDeclare.c
#include <stdio.h>
typedef struct{
	int numA;
	char chrB;
	double dubC;
	char* strD;
}S;

int main(){
	S s = {.numA = 3, .chrB = 'a', .dubC = 3.14159};//, .strD = "hello World!\n"};
	printf("%d\n%c\n%lf\n%s\n", s.numA, s.chrB, s.dubC, s.strD);
	return 0;
}