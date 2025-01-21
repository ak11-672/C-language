#include<stdio.h>
int main()
{
    int a;
    printf("Enter year");
    scanf("%d",&a);
    printf(a%4==0?a%100!=0?"Leap year": a%400==0?"leap year":"not a leap year":"not a leap year"); 
          
    
        
        

return 0;

    
}