#include <iostream>
using namespace std;
struct student{
	private:
	char name[20];
	int roll;
	float marks;
	public:
	void setStudentData(){
		cin >> name;
		cin >> roll ;
		cin >> marks;
	}
	void getStudentData(){
		cout << name <<endl;
		cout << roll <<endl;
		cout << marks <<endl;
	}
} arr[3];
	int main(){
	int i=0;
	for (i=0;i<3;i++){
		arr[i].setStudentData();
	}
	for (i=0;i<3;i++){
		arr[i].getStudentData();
	}	
	cout << endl;
//	cout <<"Trying to access private data";
//	cout << arr[0].name; Gives error 
	return 0;
}
