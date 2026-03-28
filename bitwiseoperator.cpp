#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std; 
 int main (){
     int a = 6 ;
     int b = 4;
     cout<<" and operator is :"<<(a&b)<<endl;
       cout<<" or operator is :"<<(a|b)<<endl;
         cout<<" not operator is :"<<(~a)<<endl;
             cout<<" xor  operator is :"<<(a^b)<<endl;
//  unsigned a = 0;
//  cout<<a;
// right and left shift 
// cout<<(7>>1)<<endl;
// cout<<(8>>1)<<endl;
// cout<<(8<<1)<<endl;
// cout<<(7<<1)<<endl;
// int n ; 
// cin>>n;
// int i =1 ;
// for(; ; ){
//     if(i<=n){
//         cout<<i<<endl;
//     }
//     else {
//         break;
//     }
//     i++;
// }
// int sum = 0;
// for(int i = 1; i<=n; ++i){
//     sum = sum+i;

// }
// cout<<sum;
// bool isprime  = 1;
// for(int i =2; i<n;i++){
//     if(n%i==0){
//         // cout<<" it is not a prime number "<<endl;
//          isprime = 0;
//         break;
//     }
   
// }
// if(isprime==0){
//     cout<<" it is not a prime number "<<endl;
// }
// else {
//     cout<<" it is a prime number "<<endl;
// }
//  }
//   if(1){
    
//     int b = 1;
//     if(1){
        
        
//         if(1){
//             cout<<b<<endl;
//         }
//     } 

//   }#include <iostream>



//     int n = -6;

//     for(int i = 31; i>=0;i--) {
//         cout << ((n >> i) & 1);
//     }

// //     return 0;



// int main() {
//     int n;
//     cin >> n;

// //     int remainder = 0;

// // //     while(n > 0){
// //         int rem = n % 2;
// //         remainder =rem;
// // //         n = n / 2;
// //     }

// //     cout << remainder;
// //     return 0;
// int reverse = 0;
// int lastdigit = 0;
//  int a = 0;
//      int i =0;
// while(n!=0){
//      int lastdigit = n%2;
//      cout<<lastdigit;
//      n = n/2;
//      // int a = (lastdigit^1);
     
     // cout<<a ;
     // i++;
  
   

int n ;
cin>>n;
     
//      //  int ans = 0;
     // int bit;
     
     // int i = 0;
     //  while(n!=0){
     //      int bit = n&1;
         

     //          ans = (bit*pow(10,i))+ans;
     //        n = n>>1;
     //        i++;

    

     // }
     // cout<<ans;
     int ans =0,i = 0;
     while(n!=0){
          int ld = n%10;
          if(ld == 1){
          ans = ans + (pow(2,i));
          }
          n = n /10;
          i = i+1;

     }
     cout<<ans;

}












 
 
