#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // used another method if else 
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    pattern1(5);
}

* 
* * 
* * *
* * * *
* * * * *
* * * * * *