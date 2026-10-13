#include <stdio.h>
#include <stdlib.h>
//unique elements in an array (assuming range of numbers from 0 to 10

int main()
{ int count =0 ;

  int n ;
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
    freq [ arr1[j]]++;

}
for (int k=0 ; k<10 ; k++)
{ if ( freq[k]==1)
 {
  printf( "%d\n",k );
  }


}




    return 0;
}
