#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

// int arr[n];
map<int, int> m;

    for(int i=0;i<n;i++){
     int data;
     cin>>data;
     m[data] = m[data] + 1;
    }

int max = ceil(n/3);
int target=0;

for(auto it:m){

if(it.second>max){
target = it.first;
}

}

cout<<target<<endl;
return 0;
}