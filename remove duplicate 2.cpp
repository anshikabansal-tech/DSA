#include<bits/stdc++.h>
using namespace std;
int removesduplicate(int arr[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else {
                j++;
            }
        }
    }
    return n;
}
int main(){
    int arr[]={1,2,3,2,4};
    int n=5;
    n=removesduplicate(arr,n);
    cout<<"after romoving duplicates"<< endl;
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

