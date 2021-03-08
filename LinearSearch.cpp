#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n;
	cout << "Enter number of elements of array" <<endl;
	cin >>n;
	int *arr;
	arr=(int *) malloc (n*sizeof(int));
	int i;
	for (i=0;i<n;i++){
		cin >> arr[i];
	}
	int search;
	cout << "Enter element to be searched" <<endl;
	cin >> search;
	bool isFound=false;
	for (i=0;i<n;i++){
		if (search==arr[i]){
			isFound=true;
			break;
		}
	}
if (isFound==true)	cout << "Element found at position" << i;
else cout << "Element Not found";
free (arr);
	return 0;
}
