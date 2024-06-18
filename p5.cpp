#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

   
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j <=4+i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" " ;
            }
        }
        cout<<endl;
    }
    
   
}

int main()
{
    int n;
    pattern2(6);
}


// another method
#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

   
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
         for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
   
}

int main()
{
    int n;
    pattern2(6);
}


    *    
   ***   
  *****  
 ******* 
*********