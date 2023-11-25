#include<iostream>
using namespace std;
     int main(){
     	
     	int months;
     	cin>>months;
     	if(months>=1 && months<=3){
     		cout<<"quarter: "<<1; 
		 }if(months>=4 && months<=6){
		 	cout<<"quarter: "<<2; 
		 }if(months>=7 && months<=9){
		 	cout<<"quarter: "<<3; 
		 }if(months>=10 && months<=12){
		 	cout<<"quarter: "<<4; 
	     }else 
		  {
		  	cout<<"N" ;		  	
		   } 
     return 0; 
	 }
