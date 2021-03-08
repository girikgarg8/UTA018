//Using Binary search to find an element in an array
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
	cin >> search; //1 2 3 4 5 6
	int end=*(arr+n-1);
	int start=arr[0];
	bool isFound=false;
	int mid=(end+start)/2;
	while (search>=start && search<=end ){
		if (search>mid){ // 5>3 search=5
			start=mid; //start=3 start=4
			mid=(start+end)/2; //mid=4 new mid=4+5/2=4
		}
		else if (search<mid){
			end=mid;
			mid=(start+end)/2;
		}
		else if (search==mid){
			isFound=true;
			break;
		}
	}
	if (isFound==true) cout << "Element Found";
	else cout << "Element not found";
	free(arr);
	return 0;
}
