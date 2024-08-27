#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char,int> res;
    cout<<"Enter String!!!\n";
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        res[s[i]]++;
    }
    for(auto &it:res)
    {
       cout<<it.first<<":"<<it.second<<endl;
    }
}