/*
Algorithm:
Start

2. Define function as f(x)

3. Define derivative of function as g(x)

4. Input:
	a. Initial guess x0 
	b. Tolerable Error e
	c. Maximum Iteration N

5. Initialize iteration counter step = 1

6. Do 
	If g(x0) = 0
		Print "Mathematical Error"
		Stop
	End If

	x1 = x0 - f(x0) / g(x0)
	x0 = x1
	
	step = step + 1
	
	If step > N
		Print "Not Convergent"
		Stop
	End If

   While abs f(x1) > e 

7. Print root as x1

8. Stop
*/
#include <iostream>
using namespace std;
#include <cmath>
double f(double x);
double df(double x);
int main(){
    int count = 0;
    double x0,x1,e,n;
    cout<<"Enter x0,e,max iteration N"<<endl;
    cin>>x0>>e>>n;
    do{
        if(df(x0)==0){
            cout<<"mathematical error"<<endl;
            return 0;
        }
        x1 = x0 - f(x0)/df(x0);
        x0=x1;
        count++;
        if(count>n){
            cout<<"Not convergent"<<endl;
            return 0;
        }

    }while(abs(f(x1)>e));
    cout<<"The root is"<<x1<<endl;
    return 0;
}

double f(double x){
    return pow(x,2) - cos(x) ;
}

double df(double x){
    return 2*x + sin(x);
}
