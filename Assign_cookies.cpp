#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int numcookies = s.size();
        int children = g.size();
        int i = 0;
        int j = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        while(numcookies!=0 && children!=0){
            
            if(s[j]>=g[i]){
                count++;
                // s.erase(j);
                // g.erase(i);
                numcookies--;
                children--;
                i++;
                j++;
            }else {
                j++;
                numcookies--;
                  }
            
        }
        return count;
        
    }
};

int main(){

int n;
cout<<"Enter number of children"<<endl;
cin>>n;
int m;
cout<<"Enter number of cookies"<<endl;
cin>>m;
cout<<"Enter content for each child"<<endl;
vector<int> g;
for(int i=0; i<n; i++){

int data;
cin>>data;
g.push_back(data);

}
cout<<"Enter the content/size of each cookie available"<<endl;
vector<int> s;
for(int i=0; i<m; i++){

int data;
cin>>data;
s.push_back(data);

}

Solution obj;
cout<<obj.findContentChildren(g,s)<<endl;

return 0;
}