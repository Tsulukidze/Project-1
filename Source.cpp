/****************************************************************************
**
**				Name :Temur Tsulukidze
**	
****************************************************************************/


#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	int row;   // Size of Rows .
	int column;   // Size of columns 

	cout << "Number of Rows.....";
	cin >> row;  //row input.

	while (row < 5 || row>15)
	{

		cout << "The number of rows must be between 5-15 ... Try again....";
		cin >> row;   // row - input.
	}
	cout << "Number of Rows....." << row << endl;   // to show size of row.


	cout << "Number of Columns ......";
	cin >> column;       

	while (column < 5 || column>40)
	{

		cout << "The number of columns  must be between 5-40 ... Try again....";
		cin >> column; 
	}


	while (column != 2 * row)
	{
		
		cout << "number of columns must be twice of rows";
		cin >> column;  //// column  input .
	}

	cout << "Row.....:" << row << endl;
	cout << "Column.....:" << column << endl << endl;

	int y; // y- size of height.
	int g; // g - size of widths. 



	for (int y = 0; y < row; y++)   
	{
		Sleep(80);    // waiting  0.8 seconds  
		for (int g = 0; g < column; g++)  
		{
			if (y == 0 || y == row - 1 || g == 0 || g == column - 1 || (g == y + row) || (y + g == row - 1))
			{
				cout << "*";
				
			}
			else {
				cout << " "; 
			}
		}

		cout << endl; 


	// To draw second rectangle
	}
	cout << endl;  //  spca between rectangles .

	for (int y = 0; y < row; y++) 
	{ 
		Sleep(80); // waiting 0.8 seconds.
		for (int g = 0; g < column; g++)  
		{
			if (y == 0 || y == row - 1 || g == 0 || g == column - 1 || (g == y) || (y + g == 2 * row - 1))
			{
				cout << "*";
			}
			else {
				cout << " "; 
			}
		}

		cout << endl; 


	}


	system("pause");
	return 0;

}