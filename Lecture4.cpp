// PATTERNS 


#include<iostream>
using namespace std;


//1.SQUARE PATTERN

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<"*";;
//         }
//         cout<<endl;
//     }
// }



//2.

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     char a='A';
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }


//3.Right Traingle pattern

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<(i+1);j++)
//         {
//             cout<<char(65+i);
//         }
//         cout<<endl;
//     }
// }



//4.REVERSE TRIANGLE PATTERN

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i;j>0;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


//5.Floyd's Triangle pattern

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     char a='A';
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }


//6.INVERTED TRIANGLE PATTERN

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=n;j>i;j--)
//         {
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// }



//7.Pyramid pattern

// int main(){
//     int n;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=(n-1);j>i;j--)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<(i+2);j++)
//         {
//             cout<<j;
//         }
//         for(int j=i;j>0;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



//8.HOLLOW DIAMOND PATTERN

// int main(){
//     int n;
//     cin>>n;
//     int i,j,m,x,a=1;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<(n-i);j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0)
//         {
//             for(x=0;x<(2*i-1);x++)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<i+2;j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=n-2)
//         {
//             for(j=0;j<2*(n-i)-5;j++)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



//9.Butterfly pattern

// int main(){
//     int n,i,j;
//     cout<<"Enter number of lines:"<<endl;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         for(j=2*(n-i)-2;j>0;j--)
//         {
//             cout<<" ";
//         }
//         for(j=0;j<=i;j++)
//         {
//             cout<<"*";
//         } 
//         cout<<endl;
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=n;j>i;j--)
//         {
//             cout<<"*";
//         }
//         for(j=0;j<2*i;j++)
//         {
//             cout<<" ";
//         }
//         for(j=n;j>i;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
