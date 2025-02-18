#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	cout<<"Enter the number of Elements in the array :";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int minimum=arr[0];
	int maximum=arr[0];
	for(int i=0;i<n;i++){
		minimum =min(minimum , arr[i]);
		maximum =max(maximum , arr[i]);
	}
	cout<<"Minimum Element is : "<<minimum<<"\n";
	cout<<"Maximum Element is : "<<maximum;
	return 0;
}
