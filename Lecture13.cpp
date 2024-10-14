// Lecture 12 was based on Time complexity

// Best time to buy and sell stocks
//Below code is mylogic. Doesnt work on all conditions
#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int>a={5,1,3,8,7} ;
   int n=a.size();
   int buy=a[0],z;;
   for(int i=1;i<n-1;i++)
   {
        if(a[i]<buy)
        {
            buy=a[i];
            z=i;
        }
   }
   int sell=a[z+1];
   for(int i=(z+2);i<n;i++)
   {
        if(a[i]>sell)
        {
            sell=a[i];
        }
   }
    int ans=sell-buy;
    if(ans<0)
        cout<<0;
    else
        cout<<ans;
<<<<<<< HEAD

    return 1;
}
=======
}
>>>>>>> e72b31b081dc3ade83e37f89e495bdc8aa6e9154
