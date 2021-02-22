/*
Algorithm:
Start
 
2. Input the Augmented Coefficients Matrix (A):
	
	For i = 1 to n
		
		For j = 1 to n+1
			
			Read Ai,j
		
		Next j
	
	Next i

3. Apply Gauss Jordan Elimination on Matrix A:
	
	For i = 1 to n
		
		If Ai,i = 0
			
			Print "Mathematical Error!"
			Stop
		
		End If
		
		For j = 1 to n
			
			If i ≠ j 
				
				Ratio = Aj,i/Ai,i
				
				For k = 1 to n+1
				
					Aj,k = Aj,k - Ratio * Ai,k
			
				Next k
				
			End If
			
		Next j
	Next i

4. Obtaining Solution:
	
	For i = 1 to n 
		Xi = Ai,n+1/Ai,i
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
#include <cmath>
#include <iomanip>
using namespace std;
#define n 3
#define size 10

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

    for(i=0;i<n;i++){
        x[i]= matA[i][n]/matA[i][i];
    }

    cout<<"The value of x1, x2 and x3 are"<<' '<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
    return 0;



}