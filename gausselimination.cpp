/*
Algroithm:
1. Start

2. Input the Augmented Coefficients Matrix (A):
	
	For i = 1 to n
		
		For j = 1 to n+1
			
			Read Ai,j
		
		Next j
	
	Next i

3. Apply Gauss Elimination on Matrix A:
	
	For i = 1 to n-1
		
		If Ai,i = 0
			
			Print "Mathematical Error!"
			Stop
		
		End If
		
		For j = i+1 to n
			
			Ratio = Aj,i/Ai,i
			
			For k = 1 to n+1
				
				Aj,k = Aj,k - Ratio * Ai,k
			
			Next k
		Next j
	Next i

4. Obtaining Solution by Back Substitution:
	
	Xn = An,n+1/An,n
	
	For i = n-1 to 1 (Step: -1)
		
		Xi = Ai,n+1
		
		For j = i+1 to n
			
			Xi = Xi - Ai,j * Xj
		
		Next j
		
		Xi = Xi/Ai,i
	Next i

5. Display Solution:
	
	For i = 1 to n
		
		Print Xi
	
	Next i

6. Stop


---------------
Note: All array indexes are assumed to start from 1.

*/
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
#define size 5
#define n 3

int main(){
    float matA[size][size],x[3],ratio;
    int i,j,k;
    cout<< setprecision(2)<< fixed;
    for(i=0;i<n;i++){
    for(j=0;j<n+1;j++){
        cout<<'a'<<i<<j<<'=';
        cin>>matA[i][j];
    }}

    for(i=0;i<n;i++){
        if (matA[i][i] == 0.0){
            cout<<"Mathematical error"<<endl;
            return 0;
        }
    
    for(j=0;j<n;j++){
        if(i!=j){
             ratio = matA[j][i]/matA[i][i];
            for(k =0;k<n+1;k++){
                matA[j][k] = matA[j][k]-ratio*matA[i][k];
            }
        }
    }}

    x[n-1] = matA[n-1][n]/matA[n-1][n-1];
    for(i=n-2;i>=0;i--)
{
    x[i] = matA[i][n];
    for(j=i+1;j>n;j++){
        x[i]=x[i]-matA[i][j]*x[j];
    }
    x[i]=x[i]/matA[i][i];
}

cout<<"The solution is:";
for(i=0;i<n;i++){
    cout<<'x'<<i<<'='<<x[i]<<endl;
}
return 0;

}