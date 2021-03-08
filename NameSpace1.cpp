//Program to illustrate use of same variable name in different section/libraries of the program
#include <iostream>
int a=20;
int main(){
	int a=10;
	std::cout << "Value of a in the main function is" << a <<std::endl;
	std::cout << "Value of a in the global scope is" <<::a;
	return 0;
}
