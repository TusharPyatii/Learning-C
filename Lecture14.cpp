//Water Container problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main()
// {
//     vector<int>a={1,8,6,2,5,4,8,3,7};
//     int n=a.size();
//     int res=0,ans,w,l;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             w=j-i;
//             if(a[j]>a[i])
//             {
//                 l=a[i];
//             }
//             else
//             {
//                 l=a[j];
//             }
//             ans=w*l;
//             if(ans>res)
//             res=ans;
//         }
//     }
//     cout<<res<<endl;
//     return 0;
// }


int main()
{
    vector<int>a={1,8,6,2,5,4,8,3,7};
    int n=a.size();
    int i=0,j=n-1,w,l,res=0,ans;
    while(!(i>=j))
    {
        l=min(a[i],a[j]);
        w=j-i;
        ans=w*l;
        if(a[i]>a[j])
        {
            j--;
        }
        else
        {
            i++;
        }
        if(ans>res)
        res=ans;
    }
    cout<<res;
    return 0;
}