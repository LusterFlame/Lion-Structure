#include <stdio.h>
#include <string.h>

struct Book_s{
    char name[32];
    int cost[8];
};

union Book_u{
    char name[32];
    int cost[8];
};

int main(){
    struct Book_s s;
    union Book_u u;

    strcpy(s.name, "Follow the moon");
    printf("Book name in sturcture = %s\n", s.name);
    printf("Book cost in sturcture = %d\n", s.cost[0]);
    s.cost[0] = 10000;
    printf("Book name in sturcture = %s\n", s.name);
    printf("Book cost in sturcture = %d\n", s.cost[0]);
    printf("Size of Book Structure = %ld\n", sizeof(s));

    strcpy(u.name, "Why do u lie");
    printf("Book name in Union = %s\n", u.name);
    printf("Book cost in Union = %d\n", u.cost[7]);
    for(int i = 7;i >= 0;--i){
    	printf("u.cost[%d] = %d\n", i, u.cost[i]);
    }
    u.cost[7] = 1500;
    printf("Book name in Union = %s\n", u.name);
    printf("Book cost in Union = %d\n", u.cost[7]);
    printf("Size of Book Union = %ld\n", sizeof(u));    
    return 0;
}