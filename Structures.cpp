#include <iostream>
#include <cstdlib>
using namespace std;
struct Student{
	char name[20];
	int roll;
	float marks;
	void setStudentData(){
		cin >> name;
		cin >> roll;
		cin >> marks;
	}
	void getStudentData(){
		cout << name <<endl;
		cout << roll <<endl;
		cout << marks <<endl;
	}
}arr[3];
int main(){
	int i=0;
	for (i=0;i<3;i++){
		arr[i].setStudentData();
}
for (i=0;i<3;i++){
	arr[i].getStudentData();
}
return 0;
}
