// #include <bits/stdc++.h>
// using namespace std;

// void pattern2(int n)
// {

//     for (int i = 1; i <= n; i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++)
//         {
//             cout<<"*";
//         }
//          for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
        
//         cout<<endl;
//     }
    
//         for (int i = 1; i <= n; i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=2*n-(2*i+1);j++)
//         {
//             cout<<"*";
//         }
//          for(int j=1;j<=i;j++)
//         {
//             cout<<" ";
//         }
        
//         cout<<endl;
//     }
    
    
    
// }

// int main()
// {
//     int n;
//     pattern2(5);
// }

    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    * 
    



#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   int i,j,k=0,rows;

   cout<<"enter the number of rows ";
   cin>>rows;
   n=(rows+1)/2;

    for (int i = 1; i<=rows; i++)
    {
        if(rows%2==0){
            if(i<=n) k++;
            if(i>n+1) k--;
        }
        else
        i<=n?k++:k--;

        for(int j=1;j<=rows;j++)
        {
            if(j>=n+1-k && j<=n-1+k)
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