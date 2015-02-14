#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool myfn(int i, int j) { return i<j; }

int main()
{
    char a[1024], *pch;
    vector<int> data;
    int i, j, k=0, temp=0, temp1=0, l=0, m=0;
    ifstream infile;
    infile.open("triangle.txt");    // change file name for q18

    while(infile.good()){
        infile.getline(a, 1024);
        pch = strtok (a," ");
        while (pch != NULL)
        {
            data.push_back(atoi(pch));
            pch = strtok (NULL, " ");
        }
    }
    for(i=1;i<101;i++)          // change 101 to 15 for q18
    {
        m+=(i+1);l+=i;
        if(m<data.size()&&l<data.size())
            for(j=l;j<=m;j++)
            {
                if(j==l)  data[j]+=data[j-i];
                else if(j==m) data[j]+=data[j-i-1];
                else{
                    temp = data[j-i];
                    temp1 = data[j-i-1];
                    if(temp>=temp1)  data[j]+=temp;
                    else    data[j]+=temp1;
                }
            }
    }
    cout<<*max_element(data.begin(),data.end(),myfn);
    infile.close();
    return 0;
}
