#include <iostream>
using namespace std;

int main(){
	
	int r, c;
	
	cout << "Enter row and column" << endl;
	cin>>r>>c;
	
	//creating a array of pointers
	int** arr = new int*[r];
	
	//assigning new array to the old array  
	for(int i =0; i<r; i++){
		arr[i] = new int[c];
	}
	
	
	cout<<endl;
	cout<<"Enter elemet in array "<<endl;
	for(int i =0; i<r; i++){
		for(int j=0; j <c; j++){
			cin>>arr[i][j];
		}
	}
	
	
	cout<<endl;
	
	for(int i =0; i<r; i++){
		for(int j=0; j <c; j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
