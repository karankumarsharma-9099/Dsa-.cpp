#include<bits/stdc++.h>
using namespace std;
 void printsumofelement(int hgfhd[],int size){
    int sum = 0;
    for (int  i = 0; i <size; i++)
    {
      sum = sum+hgfhd[i];
    }
    cout<<sum<<endl;

    
}
   
int main(){
int size ;
cout<<" enter the size of element "<<endl;
cin>>size;
int arr[1000000];
for (int  i = 0; i <size ; i++)
{
    cin>>arr[i];
}
printsumofelement(arr,size);

}