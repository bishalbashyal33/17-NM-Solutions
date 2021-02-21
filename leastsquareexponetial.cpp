/*
Start

2. Read Number of Data (n)

3. For i=1 to n:
     Read Xi and Yi
   Next i

4. Initialize:
     sumX = 0
     sumX2 = 0
     sumY = 0
     sumXY = 0

5. Calculate Required Sum
   For i=1 to n:
     sumX = sumX + log(Xi)
     sumX2 = sumX2 + log(Xi) * log(Xi)
     sumY = sumY + log(Yi)
     sumXY = sumXY + log(Xi) * log(Yi)
   Next i

6. Calculate Required Constant A and b of Y = A + bX:
   b = (n * sumXY - sumX * sumY)/(n*sumX2 - sumX * sumX)
   A = (sumY - b*sumX)/n

7. Transformation of A to a:
   a = exp(A)
   
8. Display value of a and b

8. Stop
*/

#include <iostream>
#include <cmath>
using namespace std;
#define size 10
int main(){
    int n;
    float x[size],y[size];
    cout<<"Enter number of data";
    cin>>n;


    for(int i=0;i<n;i++){
        cout<<"x"<<i;
        
        cin>>x[i];
        cout<<'y'<<i;
        cin>>y[i];
    }

    float sumx=0,sumx2=0,sumy=0,sumxy=0;

    for(int i=0;i<n;i++){
        sumx+=log(x[i]);
        sumx2+=log(x[i])*log(x[i]);
        sumy+=log(y[i]);
        sumxy+=log(x[i])*log(y[i]);
    }

    float b = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    float a = (sumy - b*sumx)/n;

    cout<<"The values of a and b are:"<<exp(a)<<' '<<b;
}