/*
1. Start 

2. Read Order of Matrix (n).

3. Read Matrix (A):

	For i = 1 to n
	  For j = 1 to n
	    Read Ai,j
	  Next j
	Next i

4. Augment Identity Matrix of Order n to Matrix A:

	For i = 1 to n
	  For j = 1 to n
	    
	    If i = j
	      Ai,j+n = 1
	    Else
	      Ai,j+n = 0
	    End If
	  
	  Next j
	Next i

5. Apply Gauss Jordan Elimination on Augmented Matrix (A):
	For i = 1 to n
	  If Ai,i = 0
	    Print "Mathematical Error!"
	    Stop
	  End If
	  
	  For j = 1 to n
	    If i ≠ j
	      Ratio = Aj,i/Ai,i
	      
	      For k = 1 to 2*n
	        Aj,k = Aj,k - Ratio * Ai,k
	      Next k
	    
	    End If
	  Next j
	Next i
	
6. Row Operation to Convert Principal Diagonal to 1.
	
	For i = 1 to n
	  For j = n+1 to 2*n
	    Ai,j = Ai,j/Ai,i
	  Next j
	Next i
	
7. Display Inverse Matrix:

	For i = 1 to n
	  For j = n+1 to 2*n
	    Print Ai,j
	  Next j
	Next i

8. Stop

*/


#include <iostream>
using namespace std;
#include <cmath>

#define n 3
#include <iomanip>
int main(){

    float matA[10][10],x[3],ratio;
    int i,j,k;
    cout<<setprecision(2)<< fixed;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<'a'<<i<<j<<'=';
        cin>>matA[i][j];
    }}

    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            matA[i][j+n] =1;
        }
        else{
            matA[i][j+n]=0;
        }
    }}

    for(i=0;i<n;i++){
        if (matA[i][i] == 0.0){
            cout<<"Mathematical error"<<endl;
            return 0;
        }
    
    for(j=0;j<n;j++){
        if(i!=j){
             ratio = matA[j][i]/matA[i][i];
            for(k =0;k<2*n;k++){
                matA[j][k] = matA[j][k]-ratio*matA[i][k];
            }
        }
    }}

    for(i=0;i<n;i++)
    for(j=n;j<2*n;j++){
        matA[i][j] = matA[i][j]/matA[i][i];

    }

    for(i=0;i<n;i++){
    for(j=n;j<2*n;j++){
        cout<<matA[i][j]<<"\t";
    }
    cout<<endl;
    }


return 0;



}