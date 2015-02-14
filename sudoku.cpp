#include<iostream>
#include<fstream>
using namespace std;
int cdd=0,cd=0,kd=0;
bool check(int **a,int m,int n){
    int t,i,j;
    t=a[m][n];
    for(j=0;j<9;j++){
        if(a[m][j]==t){
            if(n!=j){
                return false;
            }
        }
    }
    for(i=0;i<9;i++){
        if(a[i][n]==t){
            if(m!=i){
                return false;
            }
        }
    }
    if(((m==0)&&((n==0)||(n==3)||(n==6)))||((m==3)&&((n==0)||(n==3)||(n==6)))||((m==6)&&((n==0)||(n==3)||(n==6)))){
        if((a[m+1][n+1]==t)||(a[m+1][n+2]==t)||(a[m+2][n+1]==t)||(a[m+2][n+2]==t)){
            return false;
        }
    }
    if(((m==1)&&((n==1)||(n==4)||(n==7)))||((m==4)&&((n==1)||(n==4)||(n==7)))||((m==7)&&((n==1)||(n==4)||(n==7)))){
        if((a[m-1][n-1]==t)||(a[m-1][n+1]==t)||(a[m+1][n-1]==t)||(a[m+1][n+1]==t)){
            return false;
        }
    }
    if(((m==2)&&((n==2)||(n==5)||(n==8)))||((m==5)&&((n==2)||(n==5)||(n==8)))||((m==8)&&((n==2)||(n==5)||(n==8)))){
        if((a[m-1][n-1]==t)||(a[m-1][n-2]==t)||(a[m-2][n-1]==t)||(a[m-2][n-2]==t)){
            return false;
        }
    }
     if(((m==1)&&((n==0)||(n==3)||(n==6)))||((m==4)&&((n==0)||(n==3)||(n==6)))||((m==7)&&((n==0)||(n==3)||(n==6)))){
        if((a[m-1][n+1]==t)||(a[m-1][n+2]==t)||(a[m+1][n+1]==t)||(a[m+1][n+2]==t)){
            return false;
        }
    }
    if(((m==0)&&((n==1)||(n==4)||(n==7)))||((m==3)&&((n==1)||(n==4)||(n==7)))||((m==6)&&((n==1)||(n==4)||(n==7)))){
        if((a[m+1][n-1]==t)||(a[m+1][n+1]==t)||(a[m+2][n-1]==t)||(a[m+2][n+1]==t)){
            return false;
        }
    }
    if(((m==0)&&((n==2)||(n==5)||(n==8)))||((m==3)&&((n==2)||(n==5)||(n==8)))||((m==6)&&((n==2)||(n==5)||(n==8)))){
        if((a[m+1][n-1]==t)||(a[m+1][n-2]==t)||(a[m+2][n-1]==t)||(a[m+2][n-2]==t)){
            return false;
        }
    }
     if(((m==2)&&((n==0)||(n==3)||(n==6)))||((m==5)&&((n==0)||(n==3)||(n==6)))||((m==8)&&((n==0)||(n==3)||(n==6)))){
        if((a[m-2][n+1]==t)||(a[m-2][n+2]==t)||(a[m-1][n+1]==t)||(a[m-1][n+2]==t)){
            return false;
        }
    }
    if(((m==2)&&((n==1)||(n==4)||(n==7)))||((m==5)&&((n==1)||(n==4)||(n==7)))||((m==8)&&((n==1)||(n==4)||(n==7)))){
        if((a[m-1][n-1]==t)||(a[m-1][n+1]==t)||(a[m-2][n-1]==t)||(a[m-2][n+1]==t)){
            return false;
        }
    }
    if(((m==1)&&((n==2)||(n==5)||(n==8)))||((m==4)&&((n==2)||(n==5)||(n==8)))||((m==7)&&((n==2)||(n==5)||(n==8)))){
        if((a[m-1][n-1]==t)||(a[m-1][n-2]==t)||(a[m+1][n-1]==t)||(a[m+1][n-2]==t)){
            return false;
        }
    }
    return true;
}
void print(int **a){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
int** solve(int** a,int** b,int m,int n){
    int i,t,c=0,j;
    t=a[m][n];
    cd++;
    //cout<<cd<<" ";
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(a[i][j]==0){c=1;}
        }
    }
    if(c==0){print(a);cout<<"\n";return 0;}
    for(i=t;i<9;i++){
        if(b[m][n]==0){
            a[m][n]=i+1;
            cdd=0;
            if(check(a,m,n)==true){
                if((m==8)&&(n==8)){
                    cout<<"\n";
                    print(a);
                    cout<<"\n";
                    return 0;
                }
                else{
                    if(n==8){
                        return solve(a,b,m+1,0);
                    }
                    else{
                        return solve(a,b,m,n+1);
                    }
                }
            }
            else{
                //cout<<a[m][8]<<" ";
                if(a[m][n]==9){
                    a[m][n]=0;
                    cdd=1;
                    if(n==0){
                        return solve(a,b,m-1,8);
                    }
                    else{
                        return solve(a,b,m,n-1);
                    }
                }
            }
        }
        else{
            if((m==8)&&(n==8)){
                if(check(a,m,n)==true){
                    cout<<"\n";
                    print(a);
                    cout<<"\n";
                    return 0;
                }
            }
            else{
                if(cdd==1){
                    if(n==0){
                        return solve(a,b,m-1,8);
                    }
                    else{
                        return solve(a,b,m,n-1);
                    }
                }
                else{
                    if(n==8){
                        return solve(a,b,m+1,0);
                    }
                    else{
                        return solve(a,b,m,n+1);
                    }
                }
            }
        }
    }
    if(t==9){
        if(cdd==1){
                if(b[m][n]==0){
                    a[m][n]=0;
                    cdd=1;
                    if(n==0){
                        return solve(a,b,m-1,8);
                    }
                    else{
                        return solve(a,b,m,n-1);
                    }
                }
                else{
                    cdd=1;
                    if(n==0){
                        return solve(a,b,m-1,8);
                    }
                    else{
                        return solve(a,b,m,n-1);
                    }
                }
        }
        else{
            if(b[m][n]!=0){
                cdd=0;
                if(n==8){
                    return solve(a,b,m+1,0);
                }
                else{
                    return solve(a,b,m,n+1);
                }
            }

        }
    }
}
int main(){
    ifstream myfile;
    myfile.open("sudoku.txt");
    string s[9];
    int i,j,t;
    int** a=new int*[9];
    int** b=new int*[9];
    int** c=new int*[9];
    for(i=0;i<9;i++){
        a[i]=new int[9];
        b[i]=new int[9];
        c[i]=new int[9];
    }
    for(i=0;i<9;i++){
        myfile>>s[i];
    }
    /*for(i=0;i<9;i++){
        cout<<s[i]<<endl;
    }*/
    for(i=0;i<9;i++){
       for(j=0;j<9;j++){
            a[i][j]=s[i][j]-48;
            b[i][j]=0;
       }
    }
    for(i=0;i<9;i++){
       for(j=0;j<9;j++){
            cout<<a[i][j]<<" ";
            if(a[i][j]!=0){
                b[i][j]=1;
            }
       }
       cout<<"\n";
    }
    cout<<"\n";
    /*for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    cout<<"\n";
    solve(a,b,0,0);
}
