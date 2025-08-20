#include<iostream>
using namespace std;
 int binarysearch(int arr[],int n,int e){
 	int low=0;
 	int high=n-1;
 	while(low<=high){
 		int mid=(low+high)/2;
 		if(arr[mid]==e){
	 		return mid;
	 	}
	 	if(arr[mid]<e){
	 		low=mid+1;
		 }
		 else high=mid-1;
	}
	return -1;
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
	int e;
	cout<<"enter the value to be searched";
	cin>>e;
int result=binarysearch(arr,n,e);
	cout<<result<<" ";
	cout<<endl;
	return 0;
}

