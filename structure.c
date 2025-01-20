#include<stdio.h>
#include<string.h>
struct Employee input();
void display(struct Employee);
void highestsalary10();
void sortsalary();
struct Employee
{
int id,salary;
char name[20];
};
int main()
{
sortsalary();
printf("\n");
return 0;
}
struct Employee input()
{
struct Employee e1;
printf("Enter id and salary");
scanf("%d\n%d",&e1.id,&e1.salary);
getchar();
printf("enter name:");
fgets(e1.name,20,stdin);
e1.name[strlen(e1.name)-1]='\0';
return e1;
}
void display(struct Employee e2)
{ 
printf("\n %d %d %s",e2.id,e2.salary,e2.name);
}

void highestsalary10()
{
int i,highestsalary=0;
struct Employee emp[10];
for(i=0;i<10;i++)
{
printf("Enter id and salary");
scanf("%d\n%d",&emp[i].id,&emp[i].salary);
getchar();
printf("enter name:");
fgets(emp[i].name,20,stdin);
emp[i].name[strlen(emp[i].name)-1]='\0';
}
for(i=0;i<10;i++)
{
  if(emp[i].salary>highestsalary){
     highestsalary=emp[i].salary;}
}
printf("highest salary is %d",highestsalary);
}

void sortsalary()
{
int i,j;
struct Employee temp;
struct Employee emp[10];
for(i=0;i<10;i++)
{
printf("Enter id and salary");
scanf("%d\n%d",&emp[i].id,&emp[i].salary);
getchar();
printf("enter name:");
fgets(emp[i].name,20,stdin);
emp[i].name[strlen(emp[i].name)-1]='\0';
}
for(i=0;i<9;i++)
{
 for(j=0;j<10;j++)
 { if(emp[j].salary<emp[i].salary)
    {
     temp=emp[i];        //this is valid just like normvar swap
     emp[i]=emp[j];
     emp[j]=emp[i];
    }
      printf("swap success");    
}
}

}

