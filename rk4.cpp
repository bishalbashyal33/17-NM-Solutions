#include <iostream>
using namespace std;
float f(float x, float y){
    return (x-y)/2;
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
        float k=(k1+2*k2+3*k3+k4)/6;
        yn = y0+k;
        i++;
        x0+=h;
        y0=yn;


    }while(i<n);

    cout<<"Yn = "<<yn;
    return 0;
}
