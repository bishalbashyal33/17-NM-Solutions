/*1. Start

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
     sumX = sumX + Xi
     sumX2 = sumX2 + Xi * Xi
     sumY = sumY + Yi
     sumXY = sumXY + Xi * Yi
   Next i

6. Calculate Required Constant a and b of y = a + bx:
   b = (n * sumXY - sumX * sumY)/(n*sumX2 - sumX * sumX)
   a = (sumY - b*sumX)/n

7. Display value of a and b

8. Stop*/


#include <iostream>
using namespace std;
#define size 10
int main(){
    int n;
    float x[size],y[size];
    cout<<"Enter number of data";
    cin>>n;


    for(int i=0;i<n;i++){
        cout<<"x"<<i<<'=';
        
        cin>>x[i];
        cout<<'y'<<i<<'=';
        cin>>y[i];
    }

    float sumx=0,sumx2=0,sumy=0,sumxy=0;

    for(int i=0;i<n;i++){
        sumx+=x[i];
        sumx2+=x[i]*x[i];
        sumy+=y[i];
        sumxy+=x[i]*y[i];
    }

    float b = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    float a = (sumy - b*sumx)/n;

    cout<<"The values of a and b are:"<<a<<' '<<b;
}