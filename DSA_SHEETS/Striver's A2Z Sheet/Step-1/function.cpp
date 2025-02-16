#include<bits/stdc++.h>
using namespace std;
void  printname(string name){ //Here this guy is taking parameters of which is given inside the main
	cout<<"Hey "<<name;// getting output using variable -->"name" which is inside the main function
}
int main(){
	string name; //Here the data type is string 
	cout<<"Enter your string name:";
	cin>>name;
	printname(name);//Here we pass the name
	
	cout<<"Enter your string name:";
	cin>>name;
	printname(name2);
	
	return 0;
	
}
