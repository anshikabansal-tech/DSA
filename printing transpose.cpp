#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10],brr[10][10],n;
    int r1,c1,i,j;
    cout<<"enter the no of rows and columns in matrix";
    cin>>r1>>c1;
    cout<<"enter the elements of matrix";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }	
       for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            brr[j][i]=arr[i][j];
        }
    }
    cout<<"print transpose";
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
          cout<<  brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}

