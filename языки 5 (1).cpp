#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int sum = 0;
	int arr[10] = { 49, 71, 35, 20, 17, 16, 46, 20, 52, 89};
	for (int i=0; i<10; i++)
    { 
		sum += arr[i];
    }
    cout << sum;
	return 0;
}

