#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 1)
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