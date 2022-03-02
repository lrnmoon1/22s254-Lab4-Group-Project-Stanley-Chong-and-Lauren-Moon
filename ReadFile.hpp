#ifndef ReadFile_hpp
#define ReadFile_hpp
#include<iostream>
#include<fstream>
#include<vector>

#include <stdio.h>
using namespace std;

class ReadFile
{

public:
	void readFile(string filename)
	{
		string output;

		fstream file;
		file.open(filename);

		while(file >> output)
		{
			cout << output << endl;
		}

		file.close();
	}
};

#endif
