//Program to illustrate use of same name variables and functions in different sections/libraries of the code
#include <iostream>
using namespace std;
namespace firststudent{
	void name(){
		cout << "First student is David";
	}
}
namespace secondstudent{
	void name(){
		cout << " Second name is Mark";
	}
}
int main(){
	firststudent::name();
	secondstudent::name();
	return 0;
}
