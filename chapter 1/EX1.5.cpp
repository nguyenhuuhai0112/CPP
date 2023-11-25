#include<iostream>
using namespace std;
    int main(){
    	int a, b, c;
    	cout<<"nhap so thu nhat: ";
		cin>>a;
		cout<<"nhap so thu hai: ";
		cin>>b; 
		cout<<"nhap so thu ba: ";
		cin>>c;
		if (a>=b && a>=c) {
		cout<<"so lon nhat la: " << a << endl;
		} else if (b>=a && b>=c){
		cout<<"so lon nhat la: " << b << endl;
		} else {
	    cout<<"so lon nhat la: " << c << endl;
		}
		
    return 0;	
	}
    
