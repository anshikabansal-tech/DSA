#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    int arr[10][10],brr[10][10],crr[10][10];
    cout<<"enter the no of rows and columns of matrix 1";
    cin>>r1>>c1;
    cout<<"enter the elements of matrix 1";
    int i,j,k;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
           cin>>arr[i][j];
}  
}
 cout<<"enter the no of rows and columns of matrix 2";
    cin>>r2>>c2;
    cout<<"enter the elements of matrix 1";
        for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
           cin>>brr[i][j];
}  
}
if (c1 != r2) {
        cout << "Matrix multiplication not possible (columns of Matrix 1 != rows of Matrix 2)";
        return 0;
    }
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        crr[i][j]=0;
}
}
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        for(k=0;k<c1;k++){
        crr[i][j]+=arr[i][k]*brr[k][j];
    }
}
}
cout<<"matrix multiplication";
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}
    
    
    
   return 0;
}

