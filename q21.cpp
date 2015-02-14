#include<iostream>
using namespace std;
int isamicable(int n)
{
   int count1=0,count=0,i;
   for(i=1;i<n;i++)
   {
       if(n%i==0)
       {
           count=count+i;
       }
   }
   for(i=1;i<count;i++)
   {
       if(count%i==0)
       {
           count1=count1+i;
       }
   }
   if((count1==n)&&(count1!=count))
   {
       cout<<n<<" ";
       return n;
   }
   return 0;
}
int main()
{
    int n,i,count=0;
    cout<<"Enter your number: ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        count=count+isamicable(i);
        //cout<<i<<"->"<<count<<" ";
    }
    cout<<count;
}
