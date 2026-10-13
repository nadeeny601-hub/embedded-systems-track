#include <stdio.h>
#include <stdlib.h>
// assuming that the range of the number of array from 0 to 10 frequents elemets



int main()
{   int n ;
    printf("enter the size of the array\n ");
    scanf("%d",&n);
    int arr1[n];

    for (int i =0 ;i<n ; i++)
    { scanf("%d",&arr1[i]);}


    int freq[10];

    for ( int m=0;m<10;m++)
    {
        freq[m]=0 ;

    }
for (int j=0 ; j<n ; j++)
{
    freq [ arr1[j]]++
    ;
}
for (int k=0 ; k<10 ; k++)
{ printf( "%d\n",freq[k]);

}



    return 0;
}
