#include<bits/stdc++.h>
using namespace std;
void primenumber(int n ){
    int factor  = 0;
for(int i = 1; i<=sqrt(n);i++){
    if(n%i==0){
      factor ++;
        if((n/i)!=i)
         factor ++;
        
    }
 



}
   if(factor  == 2){
        cout<< "it is a prime number"<<endl;
    }
    else cout<<"it is not a prime number"<<endl;
    
}
int main(){
    int n ; 
    cin>>n;
    primenumber(n);
  

    }
