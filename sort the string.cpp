#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"enter the no of strings";
	cin>>n;
	cin.ignore();
	string arr[100];
	cout<<"enter string";
	int i;
	for(i=0;i<n;i++){
	getline(cin,arr[i]);
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}

