#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	float y;
	cin>>x;
	cin>>y;
	if((x+0.50)>y)
	    cout<<fixed<<setprecision(2)<<y;
	else if(x%5!=0){
	        cout<<fixed<<setprecision(2)<<y;
	    }else{
	        float result=y-x-0.50;
	        cout<<fixed<<setprecision(2)<<result;
	    }
	return 0;
}
