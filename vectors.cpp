#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> func(vector<int> c)
{
    int i;
    c.push_back(11);
    /*for(i=0;i<11;i++)
    {
        cout<<c[i]<<endl;
    }*/
    return c;
}
int main()
{
    int i;
    int *it;
    vector<int> c;
    vector<int> v;
    for(i=0;i<20;i++)
    {
        c.push_back(34);
    }
    v=func(c);
    cout<<c.capacity()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.resize(v.size()+1);
    v.push_back(10);
    v.push_back(9);

    cout<<sizeof(v)<<endl;
    /*for(i=0;i<13;i++)
    {
        cout<<c[i]<<endl;
    }
    /*for(vector::iterator it = c.begin(); it!= c.end(); it++)
    {
        cout<<*it<<endl;
    }*/
    return 0;
}
