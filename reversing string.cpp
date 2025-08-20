#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<<"enter the value of string";
	getline(cin,str);
	reverse(str.begin(),str.end());
	cout<<"reversing string"<<str<<endl;
	return 0;
}

