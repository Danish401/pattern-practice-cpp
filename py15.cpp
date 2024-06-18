#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
   for(int i=1;i<=4;i++)
   {
       for(int j=1;j<=8;j++)
       {
           if(j>=5-i && j<=9-i)
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
   
pattern2(n);


    pattern2(4);
}

   *****
  ***** 
 *****  
*****   