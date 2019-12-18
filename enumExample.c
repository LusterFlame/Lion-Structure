#include <stdio.h>

enum Type{
    Grass = 3,
    Water = 1,
    Flame,
    Electric,
    Ground
};

int main(){
	printf("%d\n", Grass);
	printf("%d\n", Water);
	printf("%d\n", Flame);
	printf("%d\n", Electric);
	printf("%d\n", Ground);
    	return 0;
}