#include <iostream>
using namespace std;
#define size 10
#define n 3
int main(){
    int dn;
    float x[size],y[size],ratio;
    cout<<"Enter number of data";
    cin>>dn;


    for(int i=0;i<dn;i++){
        cout<<"x"<<i<<'=';
        
        cin>>x[i];
        cout<<'y'<<i<<'=';
        cin>>y[i];
    }

    float sum[8] ={0,0,0,0,0,0,0,0};

    for(int i=0;i<dn;i++){
       
        sum[0]+=1;
        sum[1]+=x[i];
        sum[2]+=x[i]*x[i];
        sum[3]+= x[i]*x[i]*x[i];
        sum[4]+= x[i]*x[i]*x[i]*x[i];
        sum[7]+= x[i]*x[i]*y[i];
        sum[5]+=y[i];
        sum[6]+=x[i]*y[i];
    }
    int code =0;
float matA[10][10];
for(int i =0;i<n;i++){
    for(int j=0;j<n;j++){
        matA[i][j] = sum[code];
        cout<<"sum"<<code<<'='<<sum[code]<<' ';
        code++;
    }
    cout<<endl;
    code =code-2;
}
code = 5;
for(int i =0;i<n;i++){
    matA[i][n] = sum[code];
    code++; 
}

for(int i=0;i<n;i++){
        if (matA[i][i] == 0.0){
            cout<<"Mathematical error"<<endl;
            return 0;
        }
    
    for(int j=0;j<n;j++){
        if(i!=j){
             ratio = matA[j][i]/matA[i][i];
            for(int k =0;k<n+1;k++){
                matA[j][k] = matA[j][k]-ratio*matA[i][k];
            }
        }
    }}

    for(int i=0;i<n;i++){
        x[i]= matA[i][n]/matA[i][i];
    }

    cout<<"The value of a, b and c are"<<' '<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
    return 0;



}

    

    // float b = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    // float a = (sumy - b*sumx)/n;

    // cout<<"The values of a and b are:"<<a<<' '<<b;
//}