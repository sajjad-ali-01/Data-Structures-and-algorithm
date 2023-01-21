#include <iostream>
using namespace std;
int visited[7] = {0,0,0,0,0,0,0}; 
int arr[7][7] = {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0} 
    };
void DFS(int i){
    cout <<  i << " ";
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if(arr[i][j]==1 && !visited[j]){
            DFS(j);
        }
    }
}

int main()
{
	  
	int v = 0;
	cout << "enter matrix: " << endl;
   	for(int i;i < 7;i++){
	   
   		for(int j = 0;j < 7;j++)
			{
   				cin	>> arr[i][j];
			}
	}
	cout << "after traversal: " << endl;
	DFS(v);
        return 0;
}
