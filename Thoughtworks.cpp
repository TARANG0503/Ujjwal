#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubble(int a[],int n){
	bool swapped=false;                             //for O(n) in best case

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				swap(&a[j],&a[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
	}

}

}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	bubble(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}


}
