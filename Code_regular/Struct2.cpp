#include<stdio.h>
#include<stdlib.h>

struct student1{
	int clg_id;
	char clg_name[30];
};
struct student2{
	int stu_no;
	char stu_name[30];
	int stu_id;
	struct student1 st;
};
void display(struct student2 *);
int main()
{
	int n;
	printf("Enter number of entries :- \n");
	scanf("%d",&n);
	struct student2 *stt;
	stt=(struct student2 *)malloc(n*sizeof(struct student2));
	for(int i=1;i<=n;i++)
	{
	printf("Enter Student Number :- \n");
	scanf("%d",&stt->stu_no);
	printf("Enter Student Name :- \n");
	scanf("%s",&stt->stu_name);
	printf("ENter Student ID :- \n");
	scanf("%d",&stt->stu_id);
	printf("Enter college Name :- \n");
	scanf("%s",&stt->st.clg_name);
	printf("ENter College ID :- \n");
	scanf("%d",&stt->st.clg_id);
	display(stt);
   }
	return 0;
}
 void display(struct student2 *s)
 {
 	printf("Your Details are :- \n");
 	printf("Your Name is :- %s \n",s->stu_name);
 	printf("Your ID is :- %d \n",s->stu_id);
 	printf("Your College Name is :-  %s \n",s->st.clg_name);
 	printf("Your College ID is :- %d \n",s->st.clg_id);
 }
