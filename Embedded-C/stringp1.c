#include <stdio.h>




int strlen (char str [])
{
    int i =0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}


char* strchr(char str[], char c)
{ char*ptr=NULL;
  for ( int i=0;i<strlen(str);i++)
    {
        if (str[i]==c)
           { ptr=&str[i];
             break;

           }
    }
return ptr ;
}



char* strrchr(char str[],char c)
{
    char*ptr=NULL;
  for ( int i=(strlen(str))-1;i>=0;i--)
    {
        if (str[i]==c)
           {
            ptr=&str[i];
            break; }
    }
return ptr ;
}

void  strcpy(char des[], char src[] )
{   int i =0;
    while (src[i]!='\0')
    {
        des[i]=src[i];
        i++;
    }
    des[i]='\0';


}
void strncpy(char des[],char src[], int n)
{
    int i=0;
    while (i!=n && src[i]!='\0')
    {
       des[i]=src[i];
       i++;
    }
    des[i]='\0';
}
char*strstr(char string[], char word[])
{
    for (int i=0 ; i< strlen(string);i++)
    {
        int j=0;
        int k=i;;


        for ( j;j<strlen (word);j++)
        {
            if (string[i+j]==word[j])

                continue;
            else break;
        }
        if (j==strlen(word))
            return &string[k] ;

    }
    return NULL;
}






int main()
{
    printf("Hello world!\n");
    char string1[] = "hello world";
    char string2[]="world";

    char s[15];
    char character = 'a';


    char*ptr=strstr(string1,string2);
    printf("%c",*ptr);



    return 0;
}
