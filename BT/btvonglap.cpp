#include<iostream>
using namespace std;
    int main(){
        int n,s,i;
        cin>>n;
        for(i=0; i<=n ;i+=3){
            s+=i;           
        }
        cout<<"sum= "<< s <<endl;
    return 0;
    }