//C language Revision Practic
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void findvowelsstring();
void sortarray(int);
void pattern();
int hcf(int,int);
void lcmfinder(int,int);
void greatestamong3();
void highestmarks(int **q,int *size);
int main()
{
int a[3]={1,2,3};
int b[5]={5,6,7,3};
int c[7]={1,2,4,5,6,8,9};
int d[4]={2,5,5,9};
int e[2]={8,10};
int size[5]={3,5,7,4,2};
int *p[5];
p[0]=a;
p[1]=b;
p[2]=c;
p[3]=d;
p[4]=e;


highestmarks(p,size);

printf("\n");
return 0;
}

void greatestamong3()
{
int a,b,c,greatest;
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c){
 	if(a==b || a==c)
	  { greatest=a;
	   printf("%d",greatest);}
}
else if(b>=a && b>=c){	
       if(b==a || b==c)
	 { greatest=b;
	  printf("%d",greatest);}
}
else{
      greatest=c;}
}
void lcmfinder(int x,int y)
{
int a,lcm;
a=2;
lcm=1;
while(x>1 || y>1)
{
   if(x%a==0 || y%a==0)
    {
       if(x%a==0 && y%a==0)
	 {
	   x/=a;
	   y/=a;
           lcm*=a;
	 }
       else if(x%a==0)
	{
	  x/=a;
	  lcm*=a;
        }
       else 
        {
	  y/=a;
	 lcm*=a;
	}
   }
   else
	a++;
}
printf("lcm is %d",lcm);
}

int hcf(int x,int y)
{
   int lower;
   for(lower=x<y?x:y;lower>=1;lower--)
	if(x%lower==0 && y%lower==0)
           return lower;
}

void pattern()
{
int i,j,n;
n=0;
char c;
for(i=0;i<=3;i++)
{
   c='A';
   for(j=1;j<=7;j++){
       if(j>=j+i && j<=j-i)
        { printf("%c",c);
	 c++;}
       else{
            printf(" ");}}
   n++;
   printf("\n");
}
}
int recursion(int x)
{

if(x==1)
   return 1;
else
   return(x*x+recursion(x-1));
}



//Arrays: WAF to sort array of any size.(TSRN)

void sortarray(int n)
{ 
int x,i,j,c;
int arr1[n];
printf("Enter %d numbers",n);
for(x=0;x<=n-1;x++)
{
scanf("%d",&arr1[x]);}

for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
   {
     if(arr1[j]<arr1[i]){
        c=arr1[i];
        arr1[i]=arr1[j];
        arr1[j]=c;}
   }
}
printf("%d",arr1[3]);
for(i=0;i<n;i++){

 printf("on position %d we have %d",i,arr1[i]);}
}





//Strings:WAF to find no of vowels in each of 5 strings stored in 2d array,taken from user.   

void findvowelsstring()
{

int count,i,j;
char str[5][50];
for(i=0;i<5;i++)
{
fgets(str[i],50,stdin);
printf("\n");
}


for(i=0;i<5;i++)
{
count=0;
 for(j=0;str[i][j];j++)
  { 
     if(str[i][j]=='A'|| 'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
       {count=count+1;}
  }

printf("vowels in string %d are %d",i+1,count);
}

}






/*Pointers: There are 5 classes with diff no of students,5 arrays have marks of student in each            class.
          WAF to receive an address of an array of pointers to access marks of students.
          The job of function is to find highest marks among all classes.
*/
void highestmarks(int **q,int *size)
{

int i,j,highest=0,classhighest;
for(i=0;i<5;i++)
{
  for(j=0,classhighest=0;j<*(size+i);j++)
    {
      if(*(*(q + i) + j)>classhighest)
         { classhighest=*(*(q + i) + j);}      
     }
 if(classhighest>highest)
  {highest=classhighest;}

}
printf("%d",highest);
}


















