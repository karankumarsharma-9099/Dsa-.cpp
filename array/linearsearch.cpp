#include<bits/stdc++.h>
using namespace std;


 bool linearsearch(int arr[],int size , int target){
        //  int start = arr[0];
         for (int  i = 0; i < size ; i++)
         {
            if(arr[i] == target ){
                return true;

            } 
            
         }
         return false;
        
         
 }
   
int main(){
int  size ;
 cout<< " enter the value of size"  <<endl;
cin>>size;

int arr[10000];
for (int  i = 0; i < size ; i++)

{
  cin>>arr[i];    /* code */
}
int target ;
 cout<<  " enter the target element " <<endl;
 cin>>target;
  bool found  = linearsearch(arr,size,target);
 if(found){
     cout<< " target is found "  <<endl;
 }
 else{
     cout<<  " target is not found " <<endl;
 }

}