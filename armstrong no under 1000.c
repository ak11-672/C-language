#include<stdio.h>
#include<math.h>

  int main()
    {
        int n,l,rem,sum=0,c=0;
        for(n=1;n<1000;n++)
        {
        
            l=n;
            while(l)
             {
                l=l/10;
                c++;
             }
            l=n;
            
            while(l)
            {
                rem=l/10;
                sum=sum+pow(rem,c);
                l=l/10;
            }
        if(sum==n)
            printf("%d",n);

        }

return 0;
}