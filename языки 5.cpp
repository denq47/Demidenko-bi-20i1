#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main()
{
	int arr[10] = { 49, 71, 35, 20, 17, 16, 46, 18, 52, 89};
	for (int i=0; i<10; i++)
    { 
	 cout << "arr[" <<i<< "]" << "\t" << arr[i] << "\n";
    }
    int a=(*(arr) + *(arr+1) + *(arr+2) + *(arr+3) + *(arr+4) + *(arr+5) + *(arr+6) + *(arr+7) + *(arr+8) + *(arr+9));
    cout << a;

    
	return 0;
}

