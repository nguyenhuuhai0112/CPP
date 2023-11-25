#include<iostream>
    using namespace std;
    int main(){
    	int a,b;
    	cout<<"enter a: ";
    	cin>>a;
    	cout<<"enter b: ";
    	cin>>b;
    	cout<<"sum= "<<a + b<< endl;
    	cout<<"difference= "<< a - b<<endl;
		cout<<"product= "<<a*b<<endl;
		if (b!=0) {
		cout<<"lance= "<<static_cast<double>(a)/b<<endl; 
	    } else {
		cout<<"lane: cannot divide by zero.";}
	return 0;	
	}
