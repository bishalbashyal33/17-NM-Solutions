/*
1. Start


2. Define Function f(x)


3. Input lower_limt, upper_limit, sub_interval


4. Calculate: step_size = (lower_limit - upper_limit)/sub_interval


5. Calculate: integration = f(lower_limit) + f(upper_limit)  


6. Set: i=1


7. Loop 
        
        k= lower_limit + i * step_size 
        integration =  integration + 2*f(k)
        i = i+1
        
   While i<= sub_interval


8. integration = integration * step_size/2


9. Print intgertaion as result


10. Stop 

*/

#include <iostream>
#include <cmath>
using namespace std;
float f(float x);
int main()
{
    float a,b,h;
    cout<<"Enter lower, upper limit and sub-interval";
    cin>>a>>b>>h;

    float stepsize = (a-b)/h;
    float integration = f(a)+f(b);

    int i =1;

    do{
        float k = a+i*b;
        integration = integration +2*f(k);
        i=i+1;

    }while(i<=h);

    integration = integration + stepsize/2;
    cout<<"Integration is:"<<integration;
    return 0;
}

float f(float x){
    return pow(x,2)-cos(x);
}