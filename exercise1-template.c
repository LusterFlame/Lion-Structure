#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// For strcpy().

typedef struct Student{
	
	/* 
		Define the struct "Student" here.
		Remember to use typedef to name your structure.
		Or change the way to declair in main() function.
	*/

} Student;

// Functions
void printInfo(Student s);
Student* mallocStudent();
void init(Student* s, /* Infomations */);	// Pass by refrence

int main(){
	Student* s = mallocStudent();
	init(s, /* Fill in the informations. */ );
	printInfo(*s);
	return 0;
}

void printInfo(Student s){
	
	/*
		Printout info in Student
	*/

	return;
}

Student* mallocStudent(){
	
	/*
		Allocate the memory for a Student structure pointer.
		Remember to allocate space for char* in the structure too.
	*/

	return ptr;
}

void init(Student* s, /* Infomations  */ ){
	
	/*
		Assign value for s.
		Remember to use strcpy() for assigning strings.
	*/

	return;
}