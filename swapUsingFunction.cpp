//Program to swap two variables using functions
#include <iostream>
using namespace std;
void swap (int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=5;
	int b=10;
	cout << "Before swapping  " << "a = " << a << " "<< " " "b= " << b <<endl;
	swap(&a,&b);
	cout << "After swapping " << "a = " << a << " "<< "b= " << b;
	return 0;
}
