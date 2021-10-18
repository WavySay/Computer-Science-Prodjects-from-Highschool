#include <iostream>
using std::cout;
using std::endl;

//This program solves the problem of the "The Josephus Problem" shown by Numberphile in their youtube video
//given a number of people in a circle that kill the alive person adjacent to them, find the last person standing

int findWinner(int group[]);
int numberAlive(int group[]);
int findNextAlive(int group[], int srt);
void setAllAlive(int group[]);
void displayGroup(int group[]);

int main()
{
	const int numberOfPeople = 5;
	int group[numberOfPeople];

	setAllAlive(group);
	cout << findWinner(group); //input: 5 output: 3
	displayGroup(group);

	system("pause>0");
	return 0;
}
int findWinner(int group[])
{
	for (int i = 0; i <= sizeof(group); i++)
	{
		if (group[i] == 1)
		{
			group[findNextAlive(group, i)] = 0;
		}
		if (numberAlive(group) == 1)
		{
			return group[i];
		}
	}
	findWinner(group);
}
int numberAlive(int group[])
{
	int count = 0;
	for (int i = 0; i <= sizeof(group); i++)
	{
		if (group[i] == 1)
		{
			count++;
		}
	}
	return count;
}
int findNextAlive(int group[], int srt)
{
	for (int i = srt; i <= sizeof(group); i++)
	{
		if (group[i] == 1)
		{
			return i;
		}
	}
	for (int i = 0; i < srt; i++)
	{
		if (group[i] == 1)
		{
			return i;
		}
	}
	return (srt + 1);
}
void setAllAlive(int group[])
{
	for (int i = 0; i <= sizeof(group); i++)
	{
		group[i] = 1;
	}
}



void displayGroup(int group[])
{
	for (int i = 0; i <= sizeof(group); i++)
	{
		cout << group[i];
	}
}