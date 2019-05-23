// Problem 2 : Experiment 4 //

#include<iostream>
#include <conio.h>

using namespace std;
 
int main()
{
	int a[50] ,n ,i ,j ,temp;
	
	cout << "Selection Sorting... \n" << endl;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "Enter the " << n << " elements: "; 
	cout << endl;
	for (i = 0; i < n; i++)
	cin >> a[i];
		
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < (n - i) ; j++)
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}
	
	cout << "\nAfter using either Selection or Bubble Sort..." << endl;
	cout<< "Sorted Data: ";
	for (i = 0; i < n; i++)
	cout << a[i] << " ";
		
	return 0;
}
