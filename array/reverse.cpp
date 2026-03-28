#include<bits/stdc++.h>
using namespace std;
 void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
 }
}

    void print (int arr[],int size){
        for (int  i = 0; i < size; i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
int main(){
int  size;
 cout<<  " enter the value  of size" <<endl;
 cin>>size;

 int arr[1000];
 for (int  i = 0; i < size ; i++)
 {
    cin>>arr[i];
 }
 reverse(arr,size);
 print(arr,size);
 
//  for (int  i = 0; i < size; i++)
//  {
//     cout<<arr[i];
//  }
 

 
}