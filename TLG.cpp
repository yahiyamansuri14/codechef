//The Leas Game Problem
#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     //fropen("input.txt","r",stdin);
     //fropen("output.txt","w",stout);
     int n;
     cin>>n;
     int cs1=0,cs2=0;
     int max_lead=0;
     int max_lead_player=1;
     while(n--){
        int s1,s2;
        cin>>s1>>s2;
        cs1+=s1;
        cs2+=s2;
        int cur_lead=0;
        int cur_lead_player=1;
        if(cs1>=cs2){
            cur_lead=cs1-cs2;
        }else{
            cur_lead=cs2-cs1;
            cur_lead_player=2;
        }
        if(cur_lead>max_lead){
            max_lead=cur_lead;
            max_lead_player=cur_lead_player;
        }
     }
     cout<<max_lead_player<<" "<<max_lead;
     return 0;
 }
