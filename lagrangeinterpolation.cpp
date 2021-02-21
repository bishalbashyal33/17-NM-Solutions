/*
1. Start

2. Read Number of Data (n)

3. Read Data:
   For i = 1 to n
     Read Xi and Yi
   Next i

4. Read xp
   
5. Initialize: yp = 0

6. For i = 1 to n
     p = 1
     For j =1 to n
       If i ≠ j 
         p = p * (xp - Xj)/(Xi - Xj)
       End If
     Next j
     yp = yp + p * Yi
   Next i

6. Print yp

7. Stop

*/


#include <iostream>
using namespace std;
#include <cmath>
#define size 10
int main(){
int n;
float x[size],y[size],p;
cout<<"Enter number of data"<<endl;
cin>>n;

for(int i=0;i<n;i++){
    cout<<'x'<<i;
    cin>>x[i];
    cout<<'y'<<i;
    cin>>y[i];
    cout<<endl;
}

float xp;
cout<<"Enter xp"<<endl;
cin>>xp;
float yp=0;

for(int i=0;i<n;i++){
     p = 1;
    for(int j=0;j<n;j++){
        if(i!=j){
            p = p * (xp -x[j])/(x[i]-x[j]);
        }
    }
    yp=yp+p*y[i];
}

cout<<"The value of yp is:"<<yp;
return 0;



}