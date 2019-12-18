#include <stdio.h>

typedef struct {
	unsigned char q15 :2;
	unsigned char q14 :2;
	unsigned char q13 :2;
	unsigned char q12 :2;
	unsigned char q11 :2;
	unsigned char q10 :2;
	unsigned char q9 :2;
	unsigned char q8 :2;
	unsigned char q7 :2;
	unsigned char q6 :2;
	unsigned char q5 :2;
	unsigned char q4 :2;
	unsigned char q3 :2;
	unsigned char q2 :2;
	unsigned char q1 :2;
	unsigned char q0 :2;
}Quantary;

typedef union{
	int value;
	Quantary q;
}Q;

int main(){
	Q q;
	q.value = 44444;
	printf("Value in quantary = %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",
			q.q.q0, q.q.q1, q.q.q2, q.q.q3, q.q.q4, q.q.q5, q.q.q6, q.q.q7,
			q.q.q8, q.q.q9, q.q.q10, q.q.q11, q.q.q12, q.q.q13, q.q.q14, q.q.q15);
	return 0;
}

