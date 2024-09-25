//Kadane's Algorithm


//Using brute force method

#include<iostream>
using namespace std;
// void maxsubarr(int arr[])
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=i;j<5;j++)
//         {
//             for(int k=i;k<=j;k++)
//             cout<<arr[k];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     maxsubarr(arr);
//     return 0;
// }

//solving maximum subarray

//1.Brute force method

// void maxsubarr(int arr[])
// {
//     int sum=0;
//     int sum2=INT32_MIN;
//     for(int i=0;i<7;i++)
//     {
//         sum=0;
//         for(int j=i;j<7;j++)
//         { 
//             sum+=arr[j];
//             sum2=max(sum2,sum);  
//         }
//     }
//     cout<<sum2;
// }

// int main()
// {
//     int arr[7]={3,-4,5,4,-1,7,-8}; 
//     maxsubarr(arr);
//     return 0;
// }


//2.Kadane's Algorithm

int main(){
    int sum=0;
    int maxSum=INT32_MIN;
    int arr[5]={9,-11,3,-2,10};
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
        maxSum=max(sum,maxSum);
        if(sum<0)
        sum=0;
    }
    cout<<maxSum;
    return 0;
}