#include <iostream>
using namespace std;

int apand(int arr[],int size,int key){
	arr[size] = key;
	
	size++;
	return size;
}

int main(){
	int size = 0;
	cout << "Enter the size of array: " << endl;
	cin >> size;
	
	int arr[size];
	int key = 20;
	
	cout << "Enter numbers in array: " << endl;
	for(int i = 0; i < size;i++ )
	{
		cin >> arr[i];
	}
	
	cout << "array before apand: " << endl;
	for(int i = 0; i < size;i++ )
	{
		cout << arr[i] << "  ";
	}
	
	size = apand(arr, size, key);
	
	cout << "\narray after apand: " << endl;
	
	for(int i = 0; i < size;i++ )
	{
		cout << arr[i] << "  ";
	}
	
	return 0;
	
}
