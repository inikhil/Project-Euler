#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int i,j=1,k=1;
   double t,m=0,n=0;
   for(i=1;i<50000;i++){
        t=i*(2*i-1);
        while(m<t){
            m=(double)j*(3*j-1)/2;
            j++;
        }
        if(m==t){
            while(n<t){
                n=(double)k*(k+1)/2;
                k++;
            }
            if(n==t){
                printf("%0.0f",m);
                cout<<"\n";
            }
        }
   }

}

