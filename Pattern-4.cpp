#include <iostream>
using namespace std;
int main() 
{
	int n,k;
	cin >> n;
	
	for(int i = 1;i <= n;i++)
	{
	
		for(int j = i;j <= n;j++)
		{
			cout << j << " ";
		     
		}
       
		cout << "\n";
	}
	for(int i = 1;i < n;i++)
	{
		for(int j = n-i;j <= n;j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}
