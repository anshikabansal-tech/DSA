#include<iostream>
using namespace std;
 int missingnumber(int arr[],int n){
 	int i;
 	for(i=0;i<n;i++){
 		if(arr[i]!=i+1){
 			return i+1;
		 }
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

int result=	missingnumber(arr,n);
	cout<<result<<" ";
	cout<<endl;
	return 0;
}

