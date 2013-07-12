#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

/* Prototypes=================================================================*/


/* Actual functions===========================================================*/


/**
 * Where the magic happens
 */
int main()
{
	//here be some shit
	int size; 
	string line;
	cout << "How many numbers to count?\n";
	cin >> size;
	int nums[size];
	//get the input
	ifstream file;
	file.open("IntegerArray.txt", ios::in);
	if(!file.is_open()) //error checking
	{
		cout<<"Error opening input file.\n";
		return -1;
	}
	//now actual input reading
	int i = 0;
	while(file.good() && i < size)
	{
		getline(file, line);
		nums[i] = atoi(line.c_str());
		cout << nums[i] << "\n";
		i++;
	}
	return 0;	
}


