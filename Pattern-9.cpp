#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int i,j;
    int k=1;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(j<=k || j>=n-k+1)
               {
                   cout<<"*" << " ";
               }
               else
               {
                 cout<<" " << " ";
               }
             }
            if(i<=n/2)
        	   k++;
            else
              k--;
            cout<<"\n";
     }
}
