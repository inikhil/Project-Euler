#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    ifstream myfile;
    myfile.open("q79.txt");
    vector<int> a;
    int n,t,i,m;
    while(myfile>>n){
        a.push_back(n);
    }
    t=a.size();
    int *dig=new int[10];
    int *ten=new int[10];
    int *hund=new int[10];
    for(i=0;i<10;i++){
        dig[i]=0;
        ten[i]=0;
        hund[i]=0;
    }
    for(i=0;i<t;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"-----------------------------"<<endl;
    for(i=0;i<t;i++){
        m=a[i]%10;
        dig[m]=dig[m]+1;
        a[i]=a[i]/10;
        m=a[i]%10;
        ten[m]=ten[m]+1;
        a[i]=a[i]/10;
        m=a[i]%10;
        hund[m]=hund[m]+1;
    }
    for(i=0;i<10;i++){
        cout<<dig[i]<<" ";
        cout<<ten[i]<<" ";
        cout<<hund[i]<<" ";
        cout<<"\n";
    }
    m=0;
    cout<<73162890;
}
