#include <iostream> 
using namespace std;

void display(int arr[],int size)
{
	for(int i =0; i< size; i++){
		cout << arr[i] << "  ";
	}
}
void search(int arr[],int size,int key){
	for(int i = 0; i < size ; i++){
		if(key == arr[i]){
			cout << "\nNumber found at " << " [ " << i << " ] : " << arr[i] << endl;
		}
	}
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
	
	cout << "elements of array: " << endl;
	display(arr,size);
	search(arr, size,key);
	
	return 0;
	
}
