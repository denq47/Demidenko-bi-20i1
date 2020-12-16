#include <iostream>
using namespace std;
int main()
{
	int n=0;
	cin >> n;
	int f1, f2;
	if ((0<n) and (n<=99))
    {
	f1 = n / 10;
    f2 = n % 10;
    setlocale(LC_ALL, "Russian");
	if( f1 == f2 ) cout << "Это палиндром)";    
    else cout << "Это не палиндром(";
	}
else 	
	if ((100<=n) and (n<=1000))
    {
	f1 = n / 100;
    f2 = n % 10;
    setlocale(LC_ALL, "Russian");
	if( f1 == f2 ) cout << "Это палиндром)";    
    else cout << "Это не палиндром(";
	}
else 	
	if ((1000<=n) and (n<=10000))
    {
	f1 = n / 1000;
    f2 = n % 10;
    setlocale(LC_ALL, "Russian");
	if( f1 == f2 ) cout << "Это палиндром)";    
    else cout << "Это не палиндром(";
	}	
else 	
	if ((10000<=n) and (n<=100000))
    {
	f1 = n / 10000;
    f2 = n % 10;
    setlocale(LC_ALL, "Russian");
	if( f1 == f2 ) cout << "Это палиндром)";    
    else cout << "Это не палиндром(";
	}
else 	
	if ((100000<=n) and (n<=1000000))
    {
	f1 = n / 100000;
    f2 = n % 10;
    setlocale(LC_ALL, "Russian");
	if( f1 == f2 ) cout << "Это палиндром)";    
    else cout << "Это не палиндром(";
	}		
	cout << endl;
	return 0;
}



