/*
algorithm:
1. Start

2. Define function f(x,y)

3. Read values of initial condition(x0 and y0), 
   number of steps (n) and calculation point (xn)
   
4. Calculate step size (h) = (xn - x0)/n

5. Set i=0

6. Loop 
      
      k1 = h * f(x0, y0)
      k2 = h * f(x0+h/2, y0+k1/2)
      k3 = h * f(x0+h/2, y0+k2/2)
      k4 = h * f(x0+h, y0+k3)
      
      k = (k1+2*k2+2*k3+k4)/6
      
      yn = y0 + k
      
      i = i + 1
      x0 = x0 + h
      y0 = yn
      
   While i < n


7. Display yn as result


8. Stop

*/

#include <iostream>
using namespace std;
#include <cmath>
float f(float x, float y){
    return cos(x)-4*y;
}

int main(){
    float x0,y0,xn,h,yn;
    int n;
    cout<<"Enter x0,y0,n,xn";
    cin>>x0>>y0>>n>>xn;
    h = (xn-x0)/n;

    int i =0;
    do{
        float k1= h*f(x0,y0);
        float k2= h*f(x0+h/2,y0+k1/2);
        float k3 = h*f(x0+h/2,y0+k2/2);
        float k4 = h*f(x0+h,y0+k3);
        float k=(k1+2*k2+2*k3+k4)/6;
        yn = y0+k;
        i++;
        x0+=h;
        y0=yn;


    }while(i<n);

    cout<<"Yn = "<<yn;
    return 0;
}
