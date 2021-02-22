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
    float a,b,h,integration = 0.0,stepsize,k;
    int i;
    cout<<"Enter lower, upper limit and sub-interval";
    cin>>a>>b>>h;

    stepsize = (b-a)/h;
    integration = f(a)+f(b);



       for( i=1; i<= h-1; i++)
 {
  float k = a + i*stepsize;

  if(i%3==0)
  {
    integration = integration + 2 * (f(k));
  }
  else
  {
    integration = integration + 3 * (f(k));
  }
 }

    integration = integration *stepsize*(3.0/8.0);
    cout<<"Integration is:"<<integration;
    return 0;

}
  
    
    
    
    

float f(float x){
    return pow(2,x)+3;
}