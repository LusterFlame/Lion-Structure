#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// For strcpy().

enum Gender{
	Male,
	Female,
	Other
};

typedef struct Student{
	char* ID;
	enum Gender gender;
	char* name;
	char* birthday;
	int age;
} Student;

// Functions
void printInfo(Student s);
Student* mallocStudent();
void init(Student* s, const char* ID, int gender, const char* name, const char* birthday, int age);	// Pass by refrence

int main(){
	Student* s = mallocStudent();
	init(s, "C87631919", Male, "Yee Dragon", "0230", 420);
	printInfo(*s);
	return 0;
}

void printInfo(Student s){
	printf("Student Name: %s\n", s.name);
	printf("Student ID: %s\n", s.ID);
	// For politically correct.
	switch(s.gender){
		case Male: {
			printf("Student Gender: Male\n");
			break;
		}
		case Female: {
			printf("Student Gender: Female\n");
			break;
		}
		case Other: {
			printf("Student Gender: Others\n");
		}
		default:
		printf("Student Gender: IDK, probabaly an alien.\n");
		break;
	}
	printf("Student birthday: %s\n", s.birthday);
	printf("Student age: %d\n", s.age);
	return;
}

Student* mallocStudent(){	
	Student* ptr = malloc(sizeof (Student));
	// Allocate memory for the structure.
	if(ptr == NULL){
		printf("malloc failed.\n");
		exit(-1);
	}

	// Allocate memory for member charcter pointers.
	if((ptr->name 	  = malloc(128)) == NULL || 
	   (ptr->ID       = malloc(128)) == NULL ||
	   (ptr->birthday = malloc(128)) == NULL ){
		printf("malloc failed.\n");
		exit(-1);
	}
	return ptr;
}

void init(Student* s, const char* ID, int gender, const char* name, const char* birthday, int age){
	// Assign strings.
	strcpy(s->ID, ID);
	strcpy(s->name, name);
	strcpy(s->birthday, birthday);

	// Assign other informations.
	s->gender = gender;
	s->age = age;
	return;
}