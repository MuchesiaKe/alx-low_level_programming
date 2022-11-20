#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[50];
	char id[10];
	int age;
	int grades[5];
}Student;

void print_student(Student learner);

int main(void)
{
	int  grades, i;
	Student kevin;

	grades = 0;
	kevin.age = 40;
	strcpy(kevin.name, "Kevin Maina");
	strcpy(kevin.id, "A003456");
	for (i = 0; i < 5; i++)
	{
		grades = grades + 10;
		kevin.grades[i] = grades;
	}
	print_student(kevin);
	return (0);
}


void print_student(Student learner)
{
	int i;

	printf("Kevin details as follows: \n");
	printf("\t Name \t: \t %s\n ", learner.name);
	printf("\t ID \t: \t %s\n", learner.id);
	printf("\t Age\t:\t %d\n", learner.age);
	printf("\t Grades : \t");
	for (i = 0; i < 5; i++)
		printf("%d ", learner.grades[i]);
	printf("\n");
}
