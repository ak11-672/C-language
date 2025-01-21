
#include<stdio.h>
#include<string.h>
void store_wordsstartingwitha();
void anagram();
void gmail_ids();
char repeating_character();
void store_wordswiths();
int main()
{  
    anagram();
    return 0;

}
void store_wordswiths()
{
    char store[50][50] = {0}; // Initialize all elements with null characters
    int storeIndex = 0;

    while (1) {
        char input[50];
        printf("Enter a string (or 'q' to quit): ");
        fgets(input,50, stdin);

        // Remove the newline character at the end of the input
        input[strlen(input)-1]='\0';

        // Check if the user wants to quit
        if (strcmp(input,"q") == 0)
         {
            break;
        }

        // Check if the entered string ends with 's'
        if (input[strlen(input) - 1] == 's') {
            strcpy(store[storeIndex], input); 
            // Store the string input ka data store(store index) mei daldo
            storeIndex++; // Move to the next slot in 'store'
        }
    }

    if (storeIndex == 0) {
        printf("No strings ending with 's' were entered.\n");
    } else {
        printf("Strings ending with 's':\n");
        for (int i = 0; i < storeIndex; i++) {
            printf("%s\n", store[i]);
        }
    }

}

char repeating_character()
{
    int i,j;
    char k[6][50];
    char s[128]={0};
    char highest=0;
    for(i=0;i<6;i++)
        fgets(k[i],50,stdin);
    for(i=0;i<6;i++)
        for(j=0;k[i][j];j++)
            s[k[i][j]]++;

    for(i=1;i<128;i++)
        if(s[i]>s[highest])
            highest=i;

    return highest;    

}

void anagram()
{ int i,j;
    char inputstring[2][50];
    char letter1[128]={0};
   char letter2[128]={0};
    for(i=0;i<2;i++)
        {
        fgets(inputstring[i],50,stdin);               //input lelia aur sb ko lowercase meibhi krdia
        inputstring[i][strlen(inputstring[i])-1]='\0';
        for(j=0;inputstring[i][j];j++)
           { if(inputstring[i][j]>='A'&&inputstring[i][j]<='Z')
                inputstring[i][j]=inputstring[i][j]+32;}
        printf("\n");
        }
    for(i=0;i<2;i++)
        for(j=0;inputstring[i][j];j++)
            if(i==0)                               //character ke ascii code ke hisab se uska count increment kia
                letter1[inputstring[i][j]]++;
            else                                    //dono strings keliye alag alag
                letter2[inputstring[i][j]]++;

    for(i=0;i<128;i++)

        if(letter1[i]!=letter2[i])
            if(i!=32)                           //kisi bhi ascii code pr count barabar nahi arha aur wo space ni
                break;                           //tu break krdo
    if(i==128)                                  //agar loop pura chla tu anagram ha agr break hoa tu nahi.
        printf("anagram");
    else   
        printf("not an anagram");


}
void gmail_ids()
{
    char ids[10][50];
    int i,j,count=0;
       for(i=0;i<10;i++)
        {
        fgets(ids[i],50,stdin);
        ids[i][strlen(ids[i])-1]='\0';
        }
        for(i=0;i<10;i++)
        {     for(j=0;ids[i][j];j++)
                if(ids[i][j]=='@')
                    break;
         if(ids[i][j+=1]=='g')
            count++;}           
        printf("no of gmail ids are %d",count);
}
void store_wordsstartingwitha()
{   char store[50][50] = {0}; // Initialize all elements with null characters
    int storeIndex = 0;
    while (1) 
        {char input[50];
        printf("Enter a string (or 'q' to quit): ");
        fgets(input,50, stdin);

        // Remove the newline character at the end of the input
        input[strlen(input)-1]='\0';


        // Check if the user wants to quit
        if (strcmp(input,"q") == 0)
         {
            break;
        }

        if (input[0] == 'a')
            strcpy(store[storeIndex], input); }
            // Store the string input ka data store(store index) mei daldo
            storeIndex++; // Move to the next slot in 'store'
}
