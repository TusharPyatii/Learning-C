// ARRAYS (1st DATA STRUCTURE)

#include<iostream>
using namespace std;

//Find smallest and largest value in an array

// int main(){
//     int size;
//     cout<<"Enter the size of array:"<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the arr:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     int small=0;
//     int large=0,index,index1;
//     for(int i=0;i<size;i++)
//     {
//         if(small>arr[i])
//         {
//             small=arr[i];
//             index=i;
//         }
//         if(large<arr[i])
//         {
//             large=arr[i];
//             index1=i; 
//         }
//     }
//     cout<<"The smallest number in the array is:"<<small<<" which is stored at index "<<index<<endl;
//     cout<<"The Largest number in the array is:"<<large<<" which is stored at index "<<index1<<endl;
//     return 0;
// }


//Pass by reference means when an array is passed to a function, the function receives the array's address, not a copy. Any changes made to the array in the function will affect the original array in the main function. This differs from pass by value, where a copy is made.


//Linear search

// int main(){
//     int size;
//     cout<<"Enter the size of array:"<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the arr:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     for(int i=0;i<size;i++)
//     {
//         if(target==arr[i])
//         {
//             cout<<"Target found at index:"<<i<<endl;
//             return i;
//         }
//     }
//     cout<<"Target not found"<<endl;
//     return -1;
// }



//REVERSING AN ARRAY

// int main()
// {
//     int size=10;
//     int arr[size]={10,20,30,40,50,60,70,80,90,100};
//     int a,end;
//     int start=0;
//     end=(size-1);
//     // for(int i=0;i<(size/2);i++)
//     // {
//     //     a=arr[i];
//     //     arr[i]=arr[sz];
//     //     arr[sz]=a;
//     //     // swap(arr[i],arr[sz]);
//     //     sz--;
//     // }
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<endl;
//     return 0;
// }



//swapping minimum and maximum number in an array

// int main(){
//     int size;
//     cout<<"Enter the size of array:"<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the arr elements:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     int small=arr[0];
//     int large=arr[0],index=0,index1=0;
//     for(int i=1;i<size;i++)
//     {
//         if(small>arr[i])
//         {
//             small=arr[i];
//             index=i;
//         }
//         if(large<arr[i])
//         {
//             large=arr[i];
//             index1=i; 
//         }
//     }
//     swap(arr[index],arr[index1]);
//     cout<<"The swapped array is:"<<endl;
//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<endl;
//     return 0;
// }



//To print all the unique values in an array

// void findUnique(int arr[], int size) {
//     bool isUnique;

//     cout << "Unique elements are: ";
//     for (int i = 0; i < size; i++) {
//         isUnique = true;
//             for (int j = 0; j < size; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }
//             if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int size = 5;
//     int arr[size] = {10, 20, 10, 30, 20};

//     findUnique(arr, size);

//     return 0;
// }




//To print the intersection elements

int intersection(int a[],int b[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
               cout<<b[j]<<endl;
               break; 
            }
        }
    }
}
int main()
{
    int n=5;
    int m=5;
    int a[n]={1,3,5,6,15};
    int b[m]={5,7,3,15,66};
    intersection(a,b,n,m);
    return 0;
}