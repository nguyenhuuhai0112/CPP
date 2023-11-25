#include<iostream>
#include<cMath>
using namespace std;
    int main(){
     	int degree;
     	double PI=3.14; 
     	cout<<"enter the degree: ";
     	cin>>degree;
     	double radian=(degree*PI)/180 ;
        double sin_value=sin(radian) ;
        double cos_value=cos(radian) ;
        double tan_value=tan(radian) ;
        double cot_value=1.0/tan_value;
        cout<<"\nsin("<<degree<<")= "<<sin_value; 
        cout<<"\ncos("<<degree<<")= "<<cos_value;
        cout<<"\ntan("<<degree<<")= "<<tan_value<<endl; 
        cout<<"cot("<<degree<<")= "<<cot_value;
    return 0;
	 }
