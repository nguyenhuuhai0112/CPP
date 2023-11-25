#include<iostream> 
using namespace std;
     int main(){
     	int hours,minutes,totalminutes;
     	cout<<"Enter the number of hours: ";
     	cin>>hours;
		cout<<"Enter the number of minutes: ";
		cin>>minutes;
		totalminutes = hours * 60 + minutes ;
		cout<<"The total number of minutes is: "<<totalminutes; 
    return 0; 	
	 }
