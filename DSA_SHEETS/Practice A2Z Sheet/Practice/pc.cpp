#include<bits/stdc++.h>
using namespace std;  // Make sure to include this line for using standard C++ library

void printname(string name){
    cout << "hey! " << name << endl;  // Added a space after "hey!" and a newline at the end
}

int main(){
	cout<<"Enter you name:";
    string name;
    cin >> name;
    printname(name);
    
    cout<<"Enter you name:";
    string name2;
    cin >> name2;
    printname(name2);
    
    return 0;
}

