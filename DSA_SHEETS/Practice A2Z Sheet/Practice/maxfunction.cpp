#include<bits/stdc++.h>
using namespace std;
int maxx(int num1 ,int num2){ //here maxx is not a  library-function
	if(num1>num2){
		return num1;
	}
	else return num2; //or return num2 
}
//Every function there shiould be guven a return or else it will give garbage value








int main(){
	int num1,num2;
	
	cout<<"Enter num1 and num2 :";
	cin>>num1>>num2;
	
	int res =maxx(num1,num2);
	cout<<"The maximum number between "<<num1<<" and "<<num2<<" is :"<<res;
	return 0;
}
