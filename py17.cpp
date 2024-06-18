#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=5;j++)
       {
           if(j==i||j==6-i)
           {
               cout<<"*";
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
   



    pattern2(4);
}


*   *
 * * 
  *  
 * * 
*   *
