



// another method
#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

   for(int i=1;i<=4;i++)
   
   
   {
       int k=1;
       for(int j=1;j<=7;j++)
       {
          if(j>=5-i && j<=3+i)
          {
              cout<<k;
              j<4?k++:k--;
          }
          else{
              cout<<" ";
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
   1   
  121  
 12321 
1234321