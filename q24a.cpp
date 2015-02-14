#include<iostream>
using namespace std;
int main()
{

   long long a=1*2*3*4*5*6*7*8*9;
   int numbers[10]={0,1,2,3,4,5,6,7,8,9};
   long long k=999999;
   int counter=9;
   while(counter>=0)
   {
      cout<<numbers[(k/a)];
      for(int i=k/a;i<9;i++)
      {
         numbers[i]=numbers[i+1];
      }
      k=k%a;
      if(counter!=0)
      a=a/counter;
      counter--;
   }
   cout<<endl;
   return 0;
}
