#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Enter number : " << endl;
	cin>>n;
	
	//creating a array of pointers
	int** arr = new int*[n];
	
	//assigning new array to the old array  
	for(int i =0; i<n; i++){
		arr[i] = new int[n];
	}
	
	
	cout<<endl;
	cout<<"Enter elemet in array "<<endl;
	for(int i =0; i<n; i++){
		for(int j=0; j <n; j++){
			cin>>arr[i][j];
		}
	}
	
	
	cout<<endl;
	
	for(int i =0; i<n; i++){
		for(int j=0; j <n; j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
