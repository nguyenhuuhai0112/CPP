#include<iostream>
#include<cMath>
using namespace std;
     int main(){
     	int a,b,c;
     	float x,x1,x2,delta;
     	cin>>a>>b>>c;
     	if (a == 0)
     	{
     		//bac1
     		if (b == 0)
     		     if(c == 0)
     		        cout<<"pt khong xac dinh !";
     		     else
     		        cout<<"pt vo nghiem !";
     	    else
			    {
			    	
			    	x = (float)-c/a;
			    	cout<<x;
			    	
				 } 
	}else
	    // bac2
	    delta = b*b-4*b*a*c;
	    if(delta > 0)
	    {
	    	x1 = (float)(-b + sqrt(delta))/(2*a);
	    	x2 = (float)(-b - sqrt(delta))/(2*a);
	    	cout<<x1<<endl<<x2;
		}
		else
		    if(delta==0)
		    {
		    	x=(float)-b/(2*a);
		    	cout<<x;
			}
			else
			
			    cout<<"pt vo nghiem !";
			    
	 return 0;
}
    
	
	
