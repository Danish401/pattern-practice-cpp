// #include <bits/stdc++.h>
// using namespace std;

// void pattern2(int n)
// {   int i,j,k=0,rows;

//    cout<<"enter the number of rows ";
//    cin>>rows;
//    n=(rows+1)/2;

//     for (int i = 1; i<=rows; i++)
//     {
//        i<=n?k++:k--;

//         for(int j=1;j<=n;j++)
//         {
//            if(j<=k)
//            {cout<<"*";}
//            else
//            cout<<" ";
//         }

//         cout<<endl;
//     }
    
    
// }

// int main()
// {
//    int n;
   
// pattern2(n);


//     pattern2(5);
// }

// enter the number of rows 8
// *   
// **  
// *** 
// ****
// *** 
// **  
// * 


#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";
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