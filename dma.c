#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void varlenstring();
int * mergearray();
struct Student* studentinitialize(char name [],int rollno,char collegename []);
struct Student
{
char name[20];
int rollno;
char collegename[30];
};
struct Team
{
struct Student s1,s2;
};
int main()
{
int i;
printf("if you want to enter student data press 1");
scanf("%d",&i);
if(i==1)
{
struct Student * studvaraddr;
char name[20];
int rollno;
char collegename[30];
printf("Enter student name:\n");
getchar();
fgets(name,20,stdin);
name[strlen(name)-1]='\0';
printf("Enter student rollno:\n");
scanf("%d",&rollno);
getchar();
printf("Enter collegename:\n");
fgets(collegename,30,stdin);
collegename[strlen(collegename)-1]='\0';
studvaraddr=studentinitialize(name,rollno,collegename);
printf("Data has been saved %s %d %s",studvaraddr->name,studvaraddr->rollno,studvaraddr->collegename);
free(studvaraddr);
}
printf("\n");
return 0;
}
void varlenstring()
{
char *c;
int n;
printf("please specify length of string");
scanf("%d",&n);
c=(char*)malloc(n);
getchar();
fgets(c,n,stdin);
printf("%s",c);
free(c);
}
int* mergearray()
{
int i;
int *p;
int a[5]={1,2,3,4,5};
int b[8]={1,2,3,4,5,6,7,8};
p=(int*)calloc(13,4);
for(i=0;i<5;i++)
{
p[i]=a[i];
}
for(i=0;i<8;i++)
{
p[i+5]=b[i];
}
free(p);
return p;
}

struct Student * studentinitialize(char name[],int rollno,char collegename[])
{
struct Student *s;
s=(struct Student*)malloc(54);
strcpy(s->name,name);
s->rollno=rollno;
strcpy(s->collegename,collegename);
return s;
}
