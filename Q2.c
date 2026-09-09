#include<stdio.h>
#include<string.h>
int main()
{
	char name[23];
	printf("Enter Your Name: \n");
	scanf("%s", name);
	int age;
	printf("Enter your age: \n");
	scanf("%d", &age);
	char depart[100];
	printf("Enter Your Department: \n");
	scanf("%s", depart);
	char std_id[100];
	printf("Enter Your Student ID: \n");
	scanf("%s", std_id);
	char uni[100];
	printf("Enter Your University: \n");
	scanf("%s", uni);
	printf("Name: %s \nAge: %d \nDepartment: %s \nStudent ID: %s \nUniversity: %s \n ", name,age,depart,std_id,uni);
	
	
//	int length;
//	char a[] = "Muhammad Hassaan Shahid";
//	length = strlen(a);
//	printf("%d", length);
	
}
