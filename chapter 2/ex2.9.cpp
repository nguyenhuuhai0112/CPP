#include<iostream> 
using namespace std;
   int main(){
   	double a,b,c;
   	cout<<"Enter the first corner: ";
   	cin>>a;
	cout<<"Enter the second corner: ";
	cin>>b;
	c = 180 - a - b;
	cout<<"The third angle is: " << c <<" degree";
   return 0; 
   }
