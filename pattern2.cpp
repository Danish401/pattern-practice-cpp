#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    pattern2(5);
}
    *
   **
  ***
 ****
*****