//MISCELLANEOUS CONCEPTS LIKE BITWISE OPERATORS, DATA TYPE MODIFIERS AND MORE

//1.bitwise [&(bitwise and),|(bitwise or),^(bitwise xor),<<(bitwise left shift),>>(bitwise right shift)]

#include<iostream>
using namespace std;

// int main()
// {
//     int a=10;
//     cout<<(a>>1)<<endl; // for bitwise xor (0^0 or 1^1 is 0, whereas 0^1 or 1^0 is 1) 
//     return 0;
// }


//2.Operator precedence (can google and check the photo for operator precedence)  

//3.scope[local(restricted to loops,conditional statements, functions etc),global(can be accessed aywhere in the code)]

//4.Data type modifiers(long,short, long long, signed, unsigned) 


// to check if the given number is power of 2


// int main()
// {
//     int a=128;
//     while(a>1)
//     {
//         if(a%2==0)
//         {
//             a=a/2;
//         }
//         else
//         {
//             break;
//         }
//     }
//     if(a==1)
//     {
//         cout<<"The given number is a power of 2."<<endl;
//     }
//     else
//     {
//         cout<<"The given number is not a power of 2."<<endl;
//     }
//     return 0;
// }


//to check if the given number is power of 2 without using loops, using bitwise operators

// int main()
// {
//     int a=1024;
//     if(((a & (a-1)) == 0))
//     {
//         cout<<"The given number is a power of 2."<<endl;
//     }
//     else
//         cout<<"The given number is not a power of 2."<<endl;
// }


//Reversing an integer

// int main()
// {
//     int a=12345,rem,ans=0,pow=1;
//     while(a>0)
//     {
//         ans*=10;  
//         rem=a%10;
//         a=a/10;
//         ans+=(rem*pow);
//     }
//     cout<<ans<<endl;
//     return 0;
// }


