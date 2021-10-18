#include <iostream>
#include <stdlib.h>
using namespace std;

const int a = 5;

void NewGrid(int grid[a][a]);
void DisplayGrid(int grid[a][a]);

int main()
{
    int grid[a][a];
    NewGrid(grid);
    DisplayGrid(grid);

}
void NewGrid(int grid[a][a])
{
    int pt1 = 13; //14, 13, 12
    int pt2 = 3;  //5,  3,  2
    int pt3 = 2;  //0,  2,  3
    int pt4 = 7;  //6,  7,  8 (voltorb)
    int changeCount = (a * a);
    int placed;
    int rdm1 = rand() % (a + 1);
    int rdm2 = rand() % (a + 1);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            grid[j][i] = 0;
        }
    }
    while (changeCount != 0)
    {
        placed = 0;
        int i = 1;
        while (placed == 0)
        {
            if (grid[rdm1][rdm2] == 0)
            {
                if (pt1 > 0)
                {
                    grid[rdm1][rdm2] = 1;
                    pt1--;
                }
                else if (pt2 > 0)
                {
                    grid[rdm1][rdm2] = 2;
                    pt2--;
                }
                else if (pt3 > 0)
                {
                    grid[rdm1][rdm2] = 3;
                    pt3--;
                }
                else if (pt4 > 0)
                {
                    grid[rdm1][rdm2] = 4;
                    pt4--;
                }
                placed++;
            }
            else
            {
                rdm1 = rand() % (a + 1);
                rdm2 = rand() % (a + 1);
                srand(i);
                i++;
            }
        }
        changeCount--;
    }
}
void DisplayGrid(int grid[a][a])
{
    for (int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            cout << grid[j][i] << " ";
        }
        cout << endl;
    }
}