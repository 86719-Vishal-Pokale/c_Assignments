/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
    string palli;
    cout<<"Enter string: ";
    cin>>palli;
    int j=palli.size()-1;
    int mid=j/2;
    int t;
    for(int i=0;i<=mid;i++){
        t=palli[i];
        palli[i]=palli[j];
        palli[j]=t;    
        j--;
    }
    cout<<palli;
    return 0;
}
