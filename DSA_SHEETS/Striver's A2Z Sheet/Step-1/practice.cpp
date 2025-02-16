#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;//It allocates memory for x
	cout<<"Enter the integer value of x: ";
	cin>> x;
	cout<<"The value of x is : "<<x<<"\n\n";
	
	//Take input float from user and printing output
	float y;
	cout<<"Enter the float value of y: ";
	cin>> y;
	cout<<"The value of y is : "<<y<<"\n\n";
	
	//Taking input string from user and printing output
	string s;
	cout<<"Enter a Single String name :";
	cin>>s;
	cout<<"The Entered String value is:"<<s<<"\n\n";
	
	
	//Declaring two variable strings at a time
	string s1,s2;
	cout<<"Enter the s1 and s2 strings using space :";
	cin>>s1>>s2;
	cout<<"s1 value is : "<<s1<<"\n"<<"s2 value is: "<<s2<<"\n\n";
	
	//To print a sentence using string we use (getline())
	string s3;
	cout<<"Enter the sentence you want to show :";
	cin.ignore();
	getline(cin,s3);
	cout<<"your sentence: "<<s3;
	return 0;
}

/*Before calling getline(cin, s3);,
 a previous cin >> operation (used for s1 and s2)
 leaves a newline character (\n) in the input buffer.
  getline() reads this leftover newline instead of waiting for user input.*/




