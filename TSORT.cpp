#include<iostream>
 using namespace std;
 int arr[1000000]={0};
 int main(){
     int n,a;
     cin>>n;
     while(n--){
         cin>>a;
         arr[a]++;
     }
     a=0;
     while(a<1000000){
         while(arr[a]){
             cout<<a<<endl;
             arr[a]--;
         }
        a++;
     }
     return 0;
 }
