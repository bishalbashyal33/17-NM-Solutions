/*
Start

2. Define function f(x,y)

3. Read values of initial condition(x0 and y0), 
   number of steps (n) and calculation point (xn)
   
4. Calculate step size (h) = (xn - x0)/n

5. Set i=0

6. Loop 
      
      yn = y0 + h *  f(x0 + i*h, y0)
      
      y0 = yn
      
      i = i + 1

   While i < n

7. Display yn as result

8. Stop

*/

#include <iostream>
#include <cmath>
using namespace std;
float f(float x,float y);
int main()
{
    float x0,y0,n,xn,h,yn;
    cout<<"Enter intial values, num of steps and calculation poin";
    cin>>x0>>y0>>n>>xn;

    float sh = (xn-x0)/n;
   

    int i =0;

    do{
        yn =y0+h*(f(x0+i*h,y0));
        y0=yn;
        i++;
        

    }while(i<n);

    
    cout<<"solution is"<<yn;
    return 0;
}

float f(float x,float y){
    return exp(x)-4*y;
}