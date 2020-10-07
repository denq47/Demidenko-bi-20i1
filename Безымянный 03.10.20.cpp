#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
int main()
{
	int size = 100;
	int i = 0;
	int matrix[100];
	int temp;
	int j=99;
	for(int i=0; i<100;i++)
	{
		matrix[i]=i;
	}
	for(int i=0; i<100;i++)
	{
		cout << matrix[i]<<" ";
	}
	cout << endl;
	temp=matrix[j];
	matrix[j]=matrix[i];
    matrix[i]=temp;
	for(int i=0; i<100;i++)
	{
		cout << matrix[i]<<" ";
	}	
	cout << endl;
	return 0;
	}
