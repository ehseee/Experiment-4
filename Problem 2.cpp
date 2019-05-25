// Problem 2 : Experiment 4 //

#include<iostream>
#include <conio.h>

using namespace std;
 
int main()
{
	int a[50] ,n ,i ,j ,temp;
	char A, B, c, b, choice;
	A = c;
	B = b;
	
	cout << "\nSelection Sorting... \n" << endl;
	cout << "Enter the size of array: ";
	cin >> n;
	cout << "\nEnter the " << n << " elements: "; 
	cout << endl;
	for (i = 0; i < n; i++)
	cin >> a[i];
	
	cout << "\nWhat type of sort do you want" << endl;
	cout << " A for Bubble Sort" << "   " << " B for Selection Sort" << endl;
	cin >> choice;

	switch (choice)
	{
		case 'a':
		case 'A':
	
			cout << "\nAfter using Bubble Sort..." << endl;
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
			break;
		
		case 'b':
		case 'B':

			cout << "\nAfter using Selection Sort..." << endl;
			for(i = 0; i < n; i++)
			{
				for(j = i + 1; j < n; j++)
				{
					if(a[i] > a[j])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			break;
	}
	
	cout<< "Sorted Data: ";
	for (i = 0; i < n; i++)
	cout << a[i] << " ";
		
	return 0;
}
