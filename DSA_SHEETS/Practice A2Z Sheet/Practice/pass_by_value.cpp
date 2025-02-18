#include<bits/stdc++.h>
using namespace std;
void do_something(int num){
	
	cout<<num<<endl;
	num+=5;
	cout<<num<<endl;
	
	num+=5;
	cout<<num<<endl;
	num+=5;
	cout<<num<<endl;
	
	
}
int main(){
	int num= 10;
	
	do_something(num);//Here it just sends a copy , not itscontained value to that function
	cout<<num<<endl;//hence it returns 10 at the last
	return 0;
}


