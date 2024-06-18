

1
12
123
1234
12345
#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<j;
       }
       cout<<endl;
   }
   
}

int main()
{
   int n;
   



    pattern2(4);
}



// 
1
22
333
4444
55555

#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<i;
       }
       cout<<endl;
   }
   
}

int main()
{
   int n;
   
    pattern2(4);
}



1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1


#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
   for(int i=1;i<=6;i++)
   {
       for(int j=1;j<=n-i+1;j++)
       {
           cout<<j;
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
01
101
0101


#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    
    int start=1;
   for(int i=0;i<6;i++)
   {
       if(i%2==0) start=1;
       else
       start=0;
       
       for(int j=1;j<i;j++)
       {
           cout<<start;
           start=1-start;
       }
       cout<<endl;
   }
   
}

int main()
{
   int n;
   



    pattern2(6);
}



1          1
12        21
123      321
1234    4321
12345  54321
123456654321




#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    
   
  int space=2*(n-1);
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i;j++)
      {
          cout<<j;
      }
      for(int j=1;j<=space;j++)
      {
          cout<<" ";
      }
      for(int j=i;j>=1;j--){
          cout<<j;
      }
      cout<<endl;
      space-=2;
  }
}

int main()
{
   int n;
   



    pattern2(6);
}



1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21



#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    
    int start=1;
  
  for(int i=1;i<=n;i++)
  {
     
      for(int j=1;j<=i;j++)
      {
          cout<<start<<" ";
          start+=1;
          
      }
      
      cout<<endl;
     
  }
}

int main()
{
   int n;
   



    pattern2(6);
}



6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6 

#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{   
    
for(int i=0;i<2*n-1;i++)
{
    for(int j=0;j<2*n-1;j++)
    {
        int top=i;
        int bottom=j;
        int right=(2*n-2)-j;
        int left=(2*n-2)-i;
        
        cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
    }
    cout<<endl;
}
}

int main()
{
   int n;
   



    pattern2(6);
}