#include<iostream>
using namespace std;
 int missingnumber(int arr[],int n){
 	int start=0;
 	int end=n-1;
 	while(start<=end){
 		int mid=(start+end)/2;
 		if(arr[mid]!=mid+1){
 			if(arr[mid]==0 || arr[mid-1]==mid)
 			return mid+1;
 			end=mid-1;
		 }
	else {
		start=mid+1;
	}	 
	 }
 }
int main(){
           int n,arr[10];
	cout<<"enter the no of elemnts of array";
	cin>>n;
	cout<<"enter the value of elemnts of array";
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
int result=missingnumber(arr,n);
	cout<<result<<" ";
	cout<<endl;
	return 0;
}

