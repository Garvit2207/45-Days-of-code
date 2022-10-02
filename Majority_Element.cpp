#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
map<int, int> m;
int min = floor(n/2);
for (int i = 0; i < n; i++)
{
    int data;
    cin>>data;

    m[data]++;
}

int max = 0;

for(auto it:m){

if(it.second>min){
    max = it.first;
}
}

cout<<max;

}