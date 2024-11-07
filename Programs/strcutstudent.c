#include<stdio.h>
struct students
{
	int student_id,s1,s2,s3;
	char student_name;
};
void main()
{
 struct students std;
	printf("Enter student id:");
	scanf("%d",&std.student_id);
	printf("Enter student name:");
	scanf("%s",&std.student_name);
	printf("Enter subject1 marks");
	scanf("%d",&std.s1);
	printf("Enter subject2 marks");
	scanf("%d",&std.s2);
	printf("Enter subject3 marks");
	scanf("%d",&std.s3);
	total=std.s1+std.s2+std.s3;
	printf("Details");
	printf("%d",std.student_id);
	printf("%d".std.student_name);
}
