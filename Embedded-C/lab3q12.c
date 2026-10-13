#include <stdio.h>
#include <stdlib.h>
//comparing two strings
void compare (char str1 [], char str2 [] )
{ int j=0 ;

int c1=0;
int c2=0;


while (str1[c1]!= '\0')
{ c1++ ; }
while (str2[c2]!= '\0')
{ c2++ ; }




    for (int i=0 ;i<c1;i++)
    {
        if (c1!=c2)
        { break;}
        else
        { if ( str1[i]==str2[i])
        {
          j++;
          continue; }
          else
            break ;}
}




    if (j==c1)
       { printf ( "two strings are identical"); }
       else

         {printf ("two strings are not identical"); } }



int main()
{  char string1[20];

    char string2[20];
    fgets ( string1, sizeof(string1), stdin);
    fgets ( string2 ,sizeof(string2), stdin);
    compare ( string1 , string2 );



   return 0;
}
