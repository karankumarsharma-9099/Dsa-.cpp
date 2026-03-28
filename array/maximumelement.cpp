#include<bits/stdc++.h>
using namespace std;


int maximum(int arr[],int size){
    int maxi = INT_MIN;
    for (int  i = 0; i < size; i++)

    {
        maxi = max(maxi,arr[i]);

    //   if(arr[i]>max){
    //     max = arr[i];
    //   }

    }
    return maxi;
    
}
int minimum(int arr[],int n){
    int mini = INT_MAX;

    for (int  i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);
        // if(arr[i]<min){
            
        //     min = arr[i];
            
             
        }

        /* code */
    
    return mini;
    
}

   
int main(){
    int size;
     cout<< " enter the size of an array"  <<endl;
    cin>>size;
    int arr[100];
    for (int  i = 0; i < size ; i++)
    {
        cin>>arr[i];
    }
    
    //  cout<<   " enter the value of array "<<endl;
    
//     for (int  i = 0; i < 100; i++)
//     {
        
//   cin>>arr[i];
//     }
     int karan = maximum(arr,size);
      cout<<  karan <<endl;
      int rana = minimum(arr,size);
           cout<< rana <<endl;
 
return 0;



}