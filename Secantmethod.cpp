/*
Start

2. Define function as f(x)

3. Input:
	a. Initial guess x0, x1
	b. Tolerable Error e
	c. Maximum Iteration N


4. Initialize iteration counter step = 1


5. Do 
	If f(x0) = f(x1)
		Print "Mathematical Error"
		Stop
	End If

	x2 = x1 - (x1 - x0) * f(x1) / ( f(x1) - f(x0) )
	x0 = x1
	x1 = x2
	step = step + 1
	If step > N
		Print "Not Convergent"
		Stop
	End If

   While abs f(x2) > e 

6. Print root as x2

7. Stop
*/
#include <iostream>
using namespace std;
#include <cmath>
double f(double x);

int main(){
    double x2,x0,x1,e,n;
    cout<<"Input x0,x1,e,n";
    cin>>x0>>x1>>e>>n;
    int count = 0;
    do{
        if(f(x0)==f(x1)){
            cout<<"mathematical error"<<endl;
            return 0;
        }
        x2 = x1 - (x1-x0)*f(x1)/(f(x1)-f(x0));
        x0=x1;
        x1=x2;
        count++;
        if(count>n){cout<<"Not convergent";
         return 0;}


    }while(abs(f(x2))>e);
    cout<<"The root is:"<<x2<<endl;
    return 0;



}

double f(double x){
    return pow(x,2) - cos(x);
}
