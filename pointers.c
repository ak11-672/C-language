
#include<stdio.h>                                                                            
void swappointers(int *p,int *q);
void searchandcountch(char *str,char ch,int *arr);
void uppercase(char *p);
void lowercase(char *p);
void extract(char *str,int i,int j);
void swapstrings(char *p,char*q);
void sortarray(int *ptr,int size);
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3);
int f9(int a[],int n);
void findhighestmarks(int **q,int n,int size[]);
int main()
{   char str[]="aseef khan is a good student";
    char ch='i';
    int storefrequency[128]={0};
    searchandcountch(str,ch,storefrequency);
    printf("\n%d",storefrequency[105]);
    return 0;
}
void swappointers(int *p,int*q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
//waf to search all occurences of a given character in a given string.
//result of search is a list of indices to be stored in the given array,
//void search_all_occurences(char*str,char ch,int *arr)
void searchandcountch(char *str,char ch,int *arr)
{
    int i,count=0;
    for(i=0;*(str+i);i++)
        if(ch==*(str+i))
            count++;
    *(arr+ch)=count;
}
//waf to convert a given string into uppercase
void uppercase(char *p)
{      int i;
    for (i=0;*(p+i);i++)
        {
            if(*(p+i)>='a' && *(p+i)<='z')
                    *(p+i)=*(p+i)-32;
        }
}
//waf to convert a string to lowercase
void lowercase(char *p)
{
    int i;
    for (i=0;*(p+i);i++)
        {
            if(*(p+i)>='A' && *(p+i)<='Z')
                    *(p+i)=*(p+i)+32;
        }
}
/*write a function to extract a substring from a given string with
specified start index(inclusive)and end index(exclusive),and store
the extracted string in another char array.
[void extract(char *str,int start_index,int end_index,char *result);*/
void extract(char *str,int i,int j)
{
    int k;
    char result[100];
    for (k=0;i<j;i++,k++)
        {
            result[k]=*(str+i);
        }
    result[k]='\0';
    printf("%s",result);
}
//Q6waf to swap strings of two char arrays
void swapstrings(char *p,char*q)
{
    int i;
    char c;
    for(i=0;*(p+i)||*(q+i);i++)
    {
        c=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=c;
    }

}
//Q7Sort array 
void sortarray(int *ptr,int size)
{   int i,j,c;
    for(i=0;i<size-1;i++)
       { for(j=i+1;j<size;j++)
           { if(*(ptr+j)<*(ptr+i))
                {c=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=c;}}
       }
}

/*waf to merge two arrays in a given array
[void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)]*/
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,k;
    for(i=0,k=0;i<size1;i++,k++)
            *(arr3+k)=*(arr1+i);
    for(i=0;i<size2;i++,k++)
        *(arr3+k)=*(arr2+i);
}
/*waf to move first value of the array to the position where all the smaller
values will be in the left and greater values will be in the right.*/

int f9(int a[],int n)
{
    int left=0,t;
    int right;
    int loc=0; //loc is index of first element of array(23)
    right=n-1;
    while(left<right)
    {
        while(left<right&&a[loc]<=a[right])
            right--;
        if(left==right)
            break;
        t=a[loc];
        a[loc]=a[right];
        a[right]=t;
        loc=right;
        while(left<right&& a[left]<a[loc])
            left++;
        if(left==right)
            break;
        t=a[left];
        a[left]=a[loc];
        a[loc]=t;
        loc=left;
    }
    return loc;
}



//classmarksarrayofpointers
void findhighestmarks(int **q,int n,int size[])
{
    int i,j,highest=0,classhighest;
    for(i=0;i<n;i++)
    {
        for(j=0,classhighest=0;j<size[i];j++)
            {if(*(*(q+i)+j)>classhighest)
                classhighest=*(*(q+i)+j);}
        if(classhighest>highest)
            highest=classhighest;
    }
printf("highest marks acquired out of all 5 classes are %d",highest);
}


























