#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

const int x = 20, y = 20;

void startingGen(int genStart[x][y], int genEnd[x][y]);
void generationChange(int genStart[x][y], int genEnd[x][y]);
void display(int genStart[x][y], int genEnd[x][y]);

int main()
{
	//20 by 20 plane
	int genStart[x][y];
	int genEnd[x][y];

	startingGen(genStart, genEnd);

	//iterations controled here
	for (int i = 0; i < 1000; i++)
	{
		system("ClS");
		display(genStart, genEnd);
		/*generationChange(genStart, genEnd);
		Sleep(300);*/
	}

	system("pause>0");
	return 0;
}
void startingGen(int genStart[x][y], int genEnd[x][y])
{
	fstream startingFile;
	string file;
	while(getline(startingFile, file))
	{
		//nothing
	}
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			switch (file.at(i))
			{
			case " ": genStart[i][j] = 0; break;
			case "0": genStart[i][j] = 1; break;
			}
			genStart[i][j] = file.at(i);
			genEnd[i][j] = file.at(i);
		}
		startingFile.close();
	}
	for (int j = 0; j < y; j++)
		for (int i = 0; i < x; i++)
			genEnd[i][j] = genStart[i][j];

	//startingFile.open("startingFile.txt", ios::in);//read
	//if (startingFile.is_open())
	//{
	//	for (int j = 0; j < y; j++)
	//	{
	//		for (int i = 0; i < x; i++)
	//		{
	//			for (int i = 0; i < file.length(); ++i)
	//			{
	//				genStart[i][j] = file.at(i);
	//				genEnd[i][j] = file.at(i);
	//			}
	//		}
	//	}
	//	startingFile.close();
	//}
}
void generationChange(int genStart[x][y], int genEnd[x][y])
{
	//check each indivisual in genStart[][] put outcome in genEnd[][] until last cell is acounted for
	int cellCount = 0;

	for (int j = 1; j < y; j++)
	{
		for (int i = 1; i < x; i++)
		{
			cellCount = 0;
			if (genStart[i-1][j] == 1)
				cellCount++;
			if (genStart[i-1][j+1] == 1)
				cellCount++;
			if (genStart[i][j+1] == 1)
				cellCount++;
			if (genStart[i+1][j+1] == 1)
				cellCount++;
			if (genStart[i+1][j] == 1)
				cellCount++;
			if (genStart[i+1][j-1] == 1)
				cellCount++;
			if (genStart[i][j-1] == 1)
				cellCount++;
			if (genStart[i-1][j-1] == 1)
				cellCount++;

			/*if (i == 0)
			{
				cellCount = 0;
				genEnd[i][j] = 0;
			}
			if (j == 0)
			{
				cellCount = 0;
				genEnd[i][j] = 0;
			}
			if (i == x)
			{
				cellCount = 0;
				genEnd[i][j] = 0;
			}
			if (j == y)
			{
				cellCount = 0;
				genEnd[i][j] = 0;
			}*/

			if (genStart[i][j] == 0)
			{
				if (cellCount < 3)
					genEnd[i][j] = 0;
				if (cellCount == 3)
					genEnd[i][j] = 1;
				if (cellCount > 3)
					genEnd[i][j] = 0;
			}
			if (genStart[i][j] == 1)
			{
				if (cellCount < 2)
					genEnd[i][j] = 0;
				if (cellCount == 2 || cellCount == 3)
					genEnd[i][j] = 1;
				if (cellCount > 3)
					genEnd[i][j] = 0;
			}
		}
	}
}
void display(int genStart[x][y], int genEnd[x][y])
{
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			switch (genEnd[i][j])
			{
			case 0: cout << " "; break;
			case 1: cout << "O"; break;
			}
		}
		cout << endl;
	}
	cout << endl;

	//sets genStart to genEnd
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			genStart[i][j] = genEnd[i][j];
		}
	}

}