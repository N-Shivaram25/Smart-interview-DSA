#include<bits/stdc++.h>
using namespace std;  // Make sure to include this line for using standard C++ library

void sum(int num1 , int num2){
	int num3 = num1+num2;
	cout<< num3;
}


int main(){
	int num1, num2;
	
	cout<<"Enter num1 and num2 values  :";
	cin>>num1>>num2;
	
	cout<<"Addition of num1 and num2 :";
	sum(num1,num2);
	return 0;
	
}
