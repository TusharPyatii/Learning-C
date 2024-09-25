// Majority Element (Moore's Voting algorithm)

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//Brute force method

// int main()
// {
//     vector<int>a={2,7,11,15};
//     vector<int>ans;
//     int target=22;
//     for(int i=0;i<4;i++)
//     {
//         for(int j=i+1;j<4;j++)
//         {
//             int sum=0;
//             sum=a[i]+a[j];
//             if(sum==target)
//             {
//                 ans.push_back(a[i]);
//                 ans.push_back(a[j]);
//                 cout<<ans[0]<<","<<ans[1]<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<"Target was not matched with any pair of values"<<endl;
//     return 0;
// }


//optimized

// int main()
// {
//     vector<int>a={2,7,11,15};
//     vector<int>ans;
//     int target=22;
//     int i=0;
//     int j=((a.size())-1);
//     while(i<j)
//     {
//         int sum=a[i]+a[j];
//         if(sum<target)
//         {
//             i++;
//         }
//         else if(sum>target)
//         {
//             j--;
//         }
//         else
//         {
//             ans.push_back(i);
//             ans.push_back(j);
//             cout<<ans[0]<<","<<ans[1]<<endl;
//             return 0;
//         }
//     }
//     return 0;
// }


//Majority Element

int main()
{
    vector<int>a={1,2,2,1,3,3,3,3,3};
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        int freq=0;
        for(int j=0;j<s;j++)
        {
            if(a[i]==a[j])
            {
                freq++;
            }
        }
        if(freq>(s/2))
        {
            cout<<a[i]<<endl;
            return 1;
        }
    }
    return 0;
}