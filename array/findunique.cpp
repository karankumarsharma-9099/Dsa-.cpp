#include<bits/stdc++.h>
using namespace std;
   
int main(){
int arr[6]= {3,4,7,3,4,7 };
int ans = 0;
for (int  i = 0; i <6; i++)
{
    ans = ans^arr[i];
cout<<ans<<" ";
}


}