#include <iostream>
using namespace std;
#include <cmath>

float dyx(float x, float y){
    return exp(x)-4*(y);
}

float rk(float x0,float y0, float x,float h){
    int n = int((x-x0)/h);
    float k1,k2;
    float y =y0;
    for(int i =0;i<n;i++){
         k1 = h * dyx(x0, y); 
          k2 = h * dyx(x0 + 0.5 * h, 
                      y + 0.5 * k1); 
        y = y + (1.0 / 6.0) * (k1 + 2 * k2); 
        x0 = x0 + h; 

    }
    return y;
}

int main(){
    float x0 =0,y=9,x=4.1,h=0.5;
    cout<<"Solution is:"<<rk(x0,y,x,h);
    return 0;
}