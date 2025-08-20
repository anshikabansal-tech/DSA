#include<bits/stdc++.h>
using namespace std;
void reverseelements(int arr[],int n){
    int start=0;
    int end=n-1;
    int i;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n,arr[100];
    cout<<"enter the no of elements of array";
    cin>>n;
    cout<<"enter the elements of array";
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseelements(arr,n);
    cout<<"reversing the elements"<<endl;
      for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

