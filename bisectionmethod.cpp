//algorithm

/*
1. Start

2. Define function f(x)

3. Input 
	a. Lower and Upper guesses x0 and x1
	b. tolerable error e
	
4. If f(x0)*f(x1) > 0
	print "Incorrect initial guesses"
   	goto 3
   End If

5. Do 
	x2 = (x0+x1)/2
	
	If f(x0)*f(x2) < 0
		x1 = x2
	Else
		x0 = x2
	End If
		
   while abs(f(x2) > e
   
6. Print root as x2

7. Stop



*/



#include <iostream>
using namespace std;
#include <cmath>

 double f(double x);

int main(){
    
    double x0=0,x1=0,x2=0,e;
   
    do
    {
        system("CLS");
        cout<<"Please guess new values.";
        cout<<"Input x0,x1,e"<<endl;
        cin>>x0>>x1>>e;
        

    }while(f(x0)*f(x1)>0);

        do{
        x2 = (x0+x1)/2;
        if(f(x0)*f(x2)<0){
            x1=x2;
        }
            else{
            x0 = x2;
            }
            
        }while(abs(f(x2))>e);
        cout<<"The root is"<<x2;
    
}

double f(double x){
    return pow(x,2) - sin(x) + 3 ;
}

