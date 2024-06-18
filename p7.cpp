


// another method
#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{

   
    for(int i=1;i<=5;i++)
    {
        int k=1;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                cout<<"*";
                k=0;
            }
            else
           { 
            cout<<" ";
            k=1;
               
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
        
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*n-i);j++)
        {
            cout<<"* ";
        }
          
           for(int j=1;j<=n-i;j++)
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
   * *   
  * * *  
 * * * * 
* * * * *