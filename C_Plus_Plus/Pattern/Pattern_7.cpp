#include <iostream>
using namespace std;

int main()
{
    int row = 4, col = 6;

    for (int i = 1; i <= row; i++)
    {
        if (i == 1 || i == 3)
        {
            for (int j = 1; j <= col; j++)
            {
                if (j % 2 == 0)
                    cout << 2 << " ";
                else
                    cout << 1 << " ";
            }
        }
        else
        {
            for (int j = 0; j < col; j++)
            {
                if (j % 2 == 0)
                    cout << 2 << " ";
                else
                    cout << 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}