#include<stdio.h>

// 1. Write c program to print the following pattern.
//
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
// ABCDEFG
// ABCDEFGH
// ABCDEFGHI
// ABCDEFGHIJ

// int main()
// {
//   int n =10;
//   for(int i=0;i<n;i++){
//     char ch = 'A';
//     for(int j=0;j<=i;j++){
//       printf("%c",ch++);
//     }
//     printf("\n");
//   }
// }



// 2. Write c program to print the following pattern.
//         1
//        12
//       123
//      1234
//     12345
//    123456
//   1234567
//  12345678
// 123456789

// int main()
// {
//   int n=9;
//   for(int i = 0;i<n;i++)
//   {
//     int num = 1;
//     for(int j=0;j<=(n-i);j++){
//       printf(" ");
//     }

//     for(int j=0;j<=i;j++)
//     {
//       printf("%d",num++);
//     }
//     printf("\n");
//   }
// }


// 3. Write c program to print the following pattern.
//         1
//        121
//       12321
//      1234321
//     123454321
//    12345654321
//   1234567654321
//  123456787654321
// 12345678987654321

// int main()
// {
//   int n=9;
//   for(int i = 0;i<n;i++)
//   {
//     int num = 1;
//     for(int j=0;j<=(n-i);j++){
//       printf(" ");
//     }

//     for(int j=0;j<=i;j++)
//     {
//       printf("%d",num++);
//     }
//     num--;

//     for(int j=0;j<i;j++){
//       printf("%d",--num);
//     }
//     printf("\n");
//   }
// }