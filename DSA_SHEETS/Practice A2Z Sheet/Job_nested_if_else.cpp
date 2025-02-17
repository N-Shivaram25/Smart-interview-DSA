/*Take the age from the user and then decide accordingly
  1.If age< 18,            Print-> Not eligible for Job
  2.If age>=18,            Print->Eligible for Job
  3.If age>=55 and age<=37 Print->"Eligible for Job ,but Retirement Soon."
  4.If age>57              Print-> "Retirement Time"
  */
  
#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age<18){
		cout<<"Not Eligible for Job";
	}
	else if(age<=54){
		cout<<"Eligible for Job";
	}
	else if(age<=57){
		cout<<"Eligible for Job ,but Retirement Soon.";
	}
	else{
		cout<<"Retirement Time";
	}
	return 0;
}
