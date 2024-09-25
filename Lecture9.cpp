//Vectors (arrays part-2)

#include<iostream>
#include<vector>
using namespace std;

// int linearsearch(vector<int>&vec,int target) // & in this defines that the vector is passed by reference
// {
//     for(int val:vec)
//     {
//         if(val==target)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     vector<int> vec={1,2,3,4,5};
//     int target=9;
//     cout<<linearsearch(vec,target)<<endl;
//     return 0;
// }





// void reverse(vector<int>vec,int s)
// {
//     int i=0;
//     int c=s;
//     while(i<s/2)
//     {
//         swap(vec[i],vec[c-1]);
//         i++;
//         c--;
//     }
//     for(int val:vec)
//     {
//         cout<<val<<endl;
//     }
//     cout<<endl;
// }

// int main()
// {
//     vector<int> vec={1,2,3,4,5,6,7,8,9,10};
//     int s=vec.size();
//     reverse(vec,s);
//     for(int val:vec)
//     cout<<val<<endl;
//     return 0;
// }