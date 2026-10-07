#include <stdio.h>
#include <stdlib.h>


//vowel or not code


int main()
{
    char c ;
    printf ( " enter the character \n ");
    scanf ( "%c",&c );
    if ( c =='a'|| c =='e'|| c == 'u'|| c =='i' || c == 'o' )
    {
        printf ( " the character is vowel");
    }
    else
    {
        printf (" the character is consonant");
    }
    return 0;
}
