//Product of Array Except Self(problem no. - 238)


#include<iostream>
#include<vector>
using namespace std;

//Brute force approach

// int main()
// {
//     vector<int>nums={-1,1,0,-3,3};
//     vector<int>ans;
//     int n=nums.size();
//     int prod=1,j=0;
//     for(int i=0;i<n;i++)
//     {
//         prod=1;
//         j=0;
//         while(j<n)
//         {
//             if(i!=j)
//             prod=prod*nums[j];
//             j++;
//         }
//     ans.push_back(prod);
//     }
//     int z=ans.size();
//     for(int i=0;i<z;i++)
//     {
//         cout<<ans[i]<<endl;
//     }
//     return 0;
// }


//optimal solution

//Directly written in leetcode