//BINARY NUMBER SYSTEM

#include<iostream>
#include<math.h>
using namespace std;


//Decimal to binary code

// int dtob(int decN)
// {
//     int rem,sum=0,a=1;;
//     while(decN>0)
//     {
//         rem = decN%2;
//         decN = decN/2;
//         sum=sum+(rem*a);
//         a=a*10;
//     }
//     return sum;
// } 
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         cout<<dtob(i)<<endl; 
//     }
//     return 0;
// }



//binary to decimal

// int btod(int binN)
// {
//     int rem,sum=0,a=1;;
//     while(binN>0)
//     {
//         rem=binN%10;
//         binN=binN/10;
//         sum=sum+(rem*a);
//         a*=2;
//     }
//     return sum;
// } 
// int main()
// {
//     cout<<btod(110010)<<endl;
//     return 0;
// }