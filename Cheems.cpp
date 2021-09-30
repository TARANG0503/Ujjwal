#include<bits/stdc++.h>
using namespace std ;

int BinarySearch(int list[], int start, int end, int ele){
	if(start <= end){
		int mid = (start+end)/2;
		if(list[mid] == ele){
			return mid ;
		}
		if(list[mid] > ele){
			return BinarySearch(list, start, mid-1, ele);
		}
		if(list[mid] < ele){
			return BinarySearch(list, mid+1, end, ele);
		}
	}
	return -1 ;
}

int main(){

	int list[10] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40} ;
	int ele = 0 ;
	cout << "Enter the element you want to search for:"<<endl;
	cin >> ele ;
	int index = BinarySearch(list, 0, 9, ele);
	if (index == -1)
	{
		cout << "Element entered is not present in the array."<<endl ;
	}else{
		cout << ele << " is present at "<<index << "th index in the array."<<endl;
	}
	return 0 ;
}
