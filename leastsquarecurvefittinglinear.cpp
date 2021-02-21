#include <iostream>
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
        sumx+=x[i];
        sumx2+=x[i]*x[i];
        sumy+=y[i];
        sumxy+=x[i]+y[i];
    }

    float b = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    float a = (sumy - b*sumx)/n;

    cout<<"The values of a and b are:"<<a<<' '<<b;
}