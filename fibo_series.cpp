#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,i,count;
	cout << "Enter The Value Of Count" << "\n";
	cin >> count;
	n1=0;
	n2=1;
	cout << "Fibonacci Series" << "\n";
	cout << n1 << " " << n2 << " ";
	for(i=2;i<count;++i)
		{
			n3=n1+n2;
			cout << n3 << " ";
			n1=n2;
			n2=n3;	
		}
	return 0;		
}
