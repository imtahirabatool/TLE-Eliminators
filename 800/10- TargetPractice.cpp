#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        const int size = 10;
        vector<string> grid(size);

        // Input the 10x10 grid
        for (int i = 0; i < size; i++)
        {
            cin >> grid[i];
        }

        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] == 'X')
                {
                    int ring = min({i, j, size - 1 - i, size - 1 - j}) + 1;
                    count += ring;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}