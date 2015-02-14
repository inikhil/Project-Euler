#include<iostream>
#include<cstdio>
using namespace std;

bool func(int n){
    int i,j,mill=1000000;
    int m;
    m=n;
    int dum=0;
    int *b=new int[m+1];
    for(i=0;i<=m;i++){
        b[i]=i;
    }
    int **a=new int*[n+1];
    for(i=0;i<=n;i++){a[i]=new int[m+1];}
    for(i=0;i<=n;i++){a[i][0]=0;}
    for(j=0;j<=m;j++){a[0][j]=1;}
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i-b[j]>=0)
                a[i][j]=(int)a[i-b[j]][j]+a[i][j-1];
            else
                a[i][j]=a[i][j-1];
            a[i][j]=(int)a[i][j]%mill;
            //if(a[i][j]==0 && i==j){cout<<i<<" "<<j<<endl;dum=1;break;}
        }
        if(dum==1){break;}
    }
    if(a[n][m]==0){return true;}
    return false;
}

int main(){
    int n;
    for(n=5;n<=10000;n++){
         if(func(n)==true){cout<<n<<endl;break;}
    }

}
