#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int arr [10] = {1,43,12,4,77,21,7,8,9,10};
	
	*(arr+1)=*(arr+1)*2;
	if (*(arr+1)>10)
	{
		*(arr+1)=*(arr+1)-10;
	}
	*(arr+3)=*(arr+3)*2;
	if (*(arr+3)>10)
	{
		*(arr+3)=*(arr+3)-10;
	}
	*(arr+5)=*(arr+5)*2;
	if (*(arr + 5)>10)
	{
		*(arr+5)=*(arr+5)-10;	
	} 
	*(arr+7)=*(arr+7)*2;
	if (*(arr+7)>10) 
	{
		*(arr+7)=*(arr+7)-10;
	}
	*(arr+9)=*(arr+9)*2;
	if (*(arr+9)>10)
	{
		*(arr+9)=*(arr+9)-10;
	}
	 for (int i=0; i<10; i++){ 
                cout<<arr[i]<< " ";
      } 
return 0; 
	
}
