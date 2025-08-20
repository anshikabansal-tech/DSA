#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1,str2;
	cout<<"enter the string 1";
	getline(cin,str1);
	cout<<"enter the string 2";
	getline(cin,str2);
	 str1+=str2;
	 cout<<"concatenate string"<<str1<<endl;
	 return 0;
}

