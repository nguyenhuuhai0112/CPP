#include<iostream>
  using namespace std;
  int main(){
  	int input,years,months,days;
  	cout<<"Enter an integer: ";
  	cin>>input;
	years=input/365;
	months=(input%365)/30;
	days=(input%365)%30;
	cout<<"Number of years: "<<years<<endl;
	cout<<"Number of months: "<<months<<endl;
	cout<<"Number of days: "<<days;
 return 0;  
  }
