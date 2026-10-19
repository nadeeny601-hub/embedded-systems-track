#include <iostream>

using namespace std;
class arrayy
{ private:
     int*ptr;
     int sizee ;
     int capacity;

 public :
      arrayy(int c )
     { capacity = c;
       ptr= new int [capacity];
       sizee =0;
       for(int i=0;i< capacity ;i++)
       {
           ptr[i]=0;
       }
     }


     void display ()
     {  for (int i=0;i<sizee;i++)
         {
             cout<< ptr[i] << endl;
         }

     }
     void realloc ()
     {  capacity = capacity *2 ;
        int*ptrr=new int [capacity];
        for (int i=0 ;i<sizee;i++)
        { ptrr[i]=ptr[i];}

        delete ptr;

        ptr = ptrr;
     }






     void add (int number)
     {  if(sizee==capacity)
        {   realloc();
            ptr[sizee]=number;
        }
        else
        {
            ptr[sizee]=number;
        }
        sizee++;

     }


     void insertt(int n , int index)
     {
         if ( sizee == capacity )
             realloc();

        for ( int i =sizee ; i> index ; i--)
        {
            ptr[i]=ptr[i-1];
        }
             ptr[index]=n;
             sizee++;

        }



      void deletee (int index)
      {
          for (int i = index ; i<= sizee-2 ; i++)
          {
              ptr[i]=ptr[i+1];
          }
          sizee--;
      }



      int searchh ( int number)
      { int index=-1  ;
        for ( int i=0 ; i< sizee ; i++)
        {
            if (ptr[i]==number)
            { index=i;
               break;

            }



           }
           return index;
      }


      int maxx ()
      {
          int maximum = ptr[0];
          for ( int i =1 ; i<sizee ;i++)
          {
              if( ptr[i]>maximum)
              {
                  maximum = ptr[i];
              }

          }
          return maximum ;

      }

      int minn ()
      {
          int minimum = ptr[0];
          for ( int i =1 ; i<sizee ;i++)
          {
              if( ptr[i]<minimum)
              {
                  minimum = ptr[i];
              }

          }
          return minimum ;
      }

      int get (int index)
      {    if (index < sizee)
          return ptr [index];
          else
            return -1 ;
      }

       void sett ( int index , int number )
       { if( index < sizee )
         {
            ptr[index]=number;
         }

       }



       void reversee ()
       {
           for ( int i=0 ;i<sizee/2;i++)
           {
             int temp = ptr[i];
             ptr[i]=ptr[sizee-1-i];
             ptr [sizee-1-i]=temp;
           }
       }


       int sum ()
       {
           int summ=0 ;
           for (int i=0;i<sizee ;i++)
           {
               summ=summ+ptr[i];
           }
           return summ;
       }

       float average ()
       {
           return  (float)sum()/sizee;

       }
       void replacee (int index1 , int index2)
       {   if ( index1>sizee-1 || index2 >sizee-1)
           cout <<"index not found ";
           else
           {


           int temp = ptr[index1];
           ptr[index1]=ptr[index2];
           ptr[index2]=temp; }



       }

       void shiftleft ( int n )
       {
           for (int i=0 ; i<sizee-n;i++)
           {
               ptr[i]=ptr[i+n];
           }
            for (int j=sizee-n;j<sizee;j++)
              {

                ptr[j]=0;
              }
       }

       void shiftright (int n)
       {

           for (int j=sizee-1;j>=n;j--)
           {
               ptr[j]=ptr[j-n];
               }

           for ( int k=0 ; k<n;k++)
           { ptr[k]=0;

           }

       }















       void rotateleft (int n)
       {   int arr [n];
       for (int i=0;i<n;i++)
       {
           arr[i]=ptr[i];

       }



          for (int i=0 ; i<sizee-n;i++)
           {
               ptr[i]=ptr[i+n];
           }
           int k=0;
            for (int j=sizee-n;j<sizee;j++)
              {

                ptr[j]=arr[k];
                k++;
              }


       }



       void rotateright(int n)
       {
            int j=0;
       int arr[n];
       for( int i=sizee-1;i>=sizee-n;i--)
       { arr[j]=ptr[i];
       j++;

       }
       for (int k=sizee-1;k>=n;k--)
       {
           ptr[k]=ptr[k-n];
       }
       int f=0;
       for(int m=n-1;m>=0;m--)
       {
           ptr[f]=arr[m];
           f++ ;
       }





       }


       void mergee (arrayy b)
       {  if (sizee + b.sizee >=capacity)
           realloc();

          int k =0;
          int i=sizee;
           while ( k<=b.sizee -1)
            {  ptr[i]= b.ptr[k] ;
            k++;
            i++;

            }
            sizee=sizee+b.sizee;

           }












};

int main()
{  arrayy c1(10);











   c1.add(1);
   c1.add(2);
   c1.add(3);
   c1.add(4);
   c1.add(5);
   c1.add(6);
   c1.add(7);
   c1.add(8);
   c1.add(9);
   c1.add(10);
   c1.add(11);

   c1.insertt(100,0);
   c1.insertt(200,1);

   c1.deletee(0);


   c1.sett(0,100);
   c1.reversee();
c1.replacee(0,1);
c1.shiftleft(2);
c1.sett(0,1);
c1.sett(1,2);
c1.sett(10,5);
c1.sett(11,8);

c1.sett(0,1);
c1.sett(1,2);
c1.sett(2,3);
c1.sett(4,10);
c1.sett(10,5);
c1.sett(11,8);



c1.sett(0,1);
c1.sett(1,2);
c1.sett(2,3);
c1.sett(4,10);
c1.sett(10,5);
c1.sett(11,8);

c1.shiftright(2);

c1.sett(0,8);
c1.sett(1,9);

c1.shiftright(2);
c1.sett(0,1);
c1.sett(1,2);
c1.sett(2,3);
c1.sett(4,10);
c1.sett(5,11);
c1.sett(6,12);
c1.sett(7,5);
c1.sett(8,8);
c1.sett(9,10);
c1.shiftright(2);
c1.sett(0,1);
c1.sett(1,2);
c1.sett(0,8);
c1.sett(1,4);
c1.sett(2,400);

c1.rotateright(2);

c1.rotateright(2);
c1.rotateleft(2);

arrayy c2(5);
c2.add(1);
c2.add(2);
c2.add(3);
c1.mergee(c2);
c1.display();


















    cout << "Hello world!" << endl;
    return 0;
}
