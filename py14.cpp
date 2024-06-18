#include <bits/stdc++.h>
using namespace std;

void pattern8(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // For printing the stars in each row
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {

            cout << "*";
        }

        // For printing the spaces after the stars in each row
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    pattern8(N);

    return 0;
}

Output 

*********
 ******* 
  *****  
   ***
    *   
      
      #include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    int i,j,r;
    cout<<"enter the number of rows";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=2*r-1;j++)
        {
            if(j>=i && j<=2*r-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
   
}

int main()
{
   int n;
   
pattern2(n);


    pattern2(5);
}