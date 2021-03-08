#include <iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int main(){
	int a,b,c;
	cout << "Enter two numbers" <<endl;
	cin>>a;
	cin>>b;
	cout << "sum is " << add (a,b);
	return 0;
}
