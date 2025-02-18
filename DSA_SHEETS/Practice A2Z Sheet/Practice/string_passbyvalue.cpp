#include<bits/stdc++.h>
using namespace std;
void do_something(string s){
	s[0]='t';
	cout<<s<<endl;
	
	
	
	
}
int main(){
	string s="raj";
	
	do_something(s);//Here it just sends a copy , not itscontained value to that function
	cout<<s<<endl;//hence it returns 10 at the last
	return 0;
}


