#include<bits/stdc++.h>

using namespace std;
// void printdivisor(int n){
//     for(int i = 1; i<=n;i++){
//         if(n%i==0){
//         cout<<i<<" ";
// //     }
// }
// }
void printdivisor(int n){
vector<int>ls;
for(int i = 1;  i<=sqrt(n);i++){
    if(n%i==0){
        ls.push_back(i);
        if(n/i!=i){
            ls.push_back(n/i);
        }
       

    }
     
}
sort(ls.begin(),ls.end());
for(auto it :ls){
cout<<it<<" ";
}
}

int main(){
    
    // std::vector<int>v= { 12,3,4,5,3,32,67};
    // std::vector<int>v1= { 23,45,4,3,5,6,4};
    // v.swap(v1);
    // for(auto i = v.begin();  i <v.end(); i++){
    //     cout<<*i<<" ";
    // }
  
    // }
    // std::vector<int>v1;
    // v1.push_back(9);
    // v1.emplace_back(7);
    //  v1.push_back(6);
    //   v1.push_back(5);
    //   cout<<v1[0];
    // v1.erase(v1.begin());
    // cout<<v1[0];
    // v1.clear();
    // cout<<v1[0];
    //  int arr[]= { 3,2,44,23,45};
    //  int n = sizeof(arr)/sizeof arr[0];
    //  sort(arr,arr+n);
    //  for(int i = 0 ;i<n;i++){
    //     cout<<arr[i]<<" ";
    //  }
    // std::vector<int>v(3,100);
    // v.insert(v.begin(),400);
    // v.insert(v.begin()+1,300);
    // v.erase(v.begin(),v.begin()+3);
    // for( std::vector<int>::iterator i = v.begin(); i<v.end();i++){
    //     cout<<*i<<" ";

    // }
    // pair<int,int> a[]= { {2,3},{4,3},{35,474}};
   
    //     cout<<a[1].first<< " ";
    // }
    // list<int>ls;
    // ls.push_back(8);
    // ls.push_back(6);
    // ls.push_back(3);
    // ls.clear();
    // int a[4]=  { 3,45,34,32};
    // int n = sizeof(a)/sizeof a[0];
    // int maximum =*max_element(a,a+n);
    // cout<<maximum;
// int a[4]=  { 3,45,34,32};
// int n = sizeof(a)/sizeof a[0];
// int minimum = *min_element(a,a+n);
// cout<<minimum;


// int n; 
// cout<<" enter the number"<<endl;
// cin>>n;
// while(n>0){
//     int lastdigit = n%10;
//     cout<<lastdigit;
//     n = n/10;
// }
 int n ; 
 cin>>n;
 printdivisor(n);


}
   

 
