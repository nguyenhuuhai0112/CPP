#include<iostream>
using namespace std;
    int main(){
    	int number,tens,ones,sum;
    	   cout<<"enter the number: ";
    	   cin>>number;
    	   tens=number/10;
    	   ones=number%10;
    	   sum=tens+ones;
    	   cout<<"Sum: "<<sum;
    return 0;	   
	} 
