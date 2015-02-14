#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("q22a.txt","r");
    do{
        ch = getc(fp);
        cout<<ch<<" ";
    }while(ch!=EOF);

}
