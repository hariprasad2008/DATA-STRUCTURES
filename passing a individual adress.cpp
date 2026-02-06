#include<stdio.h>
struct student 
{
	int roll;
	float marks;
}s1;
void display(struct student s2);
int main()
{
	printf("\n enter roll number=");
	scanf("%d",&s1.roll);
	printf("\n enter student marks=");
	scanf("%f",&s1.marks);
	display(s1);
	return 0;
}
void  display (struct student s2)
{
    printf("\n%d\n%f",s1.roll,s1.marks);
}