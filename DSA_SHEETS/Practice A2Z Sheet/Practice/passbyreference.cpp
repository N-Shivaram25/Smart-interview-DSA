//pass by refernce : I want the riginal one to make changes or sending contained data to function
#include<bits/stdc++.h>
using namespace std;
void do_something(string s){ //here we are adding & means adding address ,that is it take original memory address and value also
	s[0]='t';
	cout<<s<<endl;
	
	
	
	
}
int main(){
	string s="raj";
	cout<<s<<endl;
	do_something(s);

	cout<<s<<endl;
	return 0;
}


