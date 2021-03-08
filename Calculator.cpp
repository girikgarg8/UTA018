//Program to make calculator using switch case
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a,b,c;
	cout << "Please enter first number" << endl;
	cin >> a;
	cout << "Please enter second number" << endl;
	cin >> b;
	cout <<endl;
	cout << "Enter 1 for addition" << endl;
	cout << "Enter 2 for subtraction" << endl;
	cout << "Enter 3 for multiplication" << endl;
	cout << "Enter 4 for division" << endl;
	cin >> c;
	cout << endl ;
	if (b==0 && c==4){
		cout << "Not possible to divide by zero";
		exit(1);
	}
	switch (c){
		case 1 : cout << a+b; 
		break;
		case 2: cout << a-b;
		break;
		case 3 : cout << a*b;
		break;
		case 4: cout << a/(float) b;
		default : cout << "Invalid option";
	}
	return 0;
}
