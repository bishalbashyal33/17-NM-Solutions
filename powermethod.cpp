/*
Start
	
  2. Input:
      a. Order of Matrix (n)
      b. Tolerable Error (e)
	
  3. Read Matrix (A):
      For i = 1 to n
        For j = 1 to n
          Read Ai,j
        Next j
      Next i
  
  4. Read Initial Guess Vector (X):
      For i = 1 to n
        Read Xi
      Next i

  5. Initialize: Lambda_Old = 1

  6. Multiplication (X_NEW = A * X):
      For i = 1 to n
        Temp = 0.0
        For j = 1 to n
          Temp = Temp + Ai,j * Xj
        Next j
        X_NEWi = Temp
      Next i

  7. Replace X by X_NEW:
     For i = 1 to n
       Xi = X_NEWi
     Next i
     
  8. Finding Largest:
      Lambda_New = |X1|
      For i = 2 to n
        If |Xi| > Lambda_New
          Lambda_New = |Xi|
        End If
      Next i

  9. Normalization:
     For i = 1 to n
       Xi = Xi/Lambda_New
     Next i

  10. Display:
      Print Lambda_New
      For i = 1 to n
        Print Xi
      Next i

  11. Checking Accuracy:
       If |Lambda_New - Lambda_Old| > e
         Lambda_Old = Lambda_New
         Goto Step (6)
       End If
  
  12. Stop

  -----------------------------------
  Note: All array indexes are assumed to start from 1.

*/


#include <iostream>
using namespace std;
#define msize 10

#include <cmath>

bool checker(float&,float&,float);

int main(){
    int n;
    float e,y_new;
    
    cout<<"Enter order and e"<<endl;
    cin>>n>>e;
    float matA[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<'a'<<i<<j<<'=';
            cin>>matA[i][j]; 
        }
    }

    float vecX[msize];
    for(int i =0;i<n;i++){
        cin>>vecX[i];
    }

    float y_old = 1;
    float vecX_new[msize];

do{
    for(int i =0;i<n;i++){
        float temp =0.0;
        for(int j=0;j<n;j++){
            temp = temp + matA[i][j]*vecX[j];
        }
        vecX_new[i] = temp;

    }


    for(int i=0;i<n;i++){
        vecX[i] = vecX_new[i];
    }

    y_new = abs(vecX[0]);
    for(int i = 1;i<n;i++){
        if(abs(vecX[i]>y_new)){
            y_new = abs(vecX[i]);
        }

    }

for(int i =0; i<n;i++){
    vecX[i] = vecX[i]/y_new;
}

cout<<"Dominant eigen value is:"<<y_new<<endl;
 cout<<"Vector is:"<<endl;
for(int i =0;i<n;i++){
   

    cout<<vecX[i]<<"\t";
}
cout<<endl;
 
} while(checker(y_old,y_new,e));



return 0;

    }
 bool checker(float &yold,float &ynew, float e){
    if(abs(ynew-yold)>e){
    yold = ynew;
    return 1;}
    else{
    return 0;}

}
   