#include<iostream>
using namespace std;
int main()
{
        int i=2;
        int count=2,*p;
        p=(int*)malloc(1000*sizeof(int));
        p[0]=1;
        p[1]=2;
        while(p[i-1]<4000000)
        {
           p[i]=p[i-1]+p[i-2];
           if(p[i]<4000000)
           {
                if(p[i]%2==0)
                {
                    count=count+p[i];
                }
            }
            i++;
        }
        cout<<count;
        return 0;
}
