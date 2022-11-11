#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int len1 = a.length()-1;
        int len2 = b.length()-1;
string sum;
        while(len1!=-1 && len2!=-1){
            
            if(a[len1]=='1' && b[len2]=='1'){
                
                if(carry=='0'){
                sum = '0' + sum;
                carry = '1';
                len1--;
                len2--;
                // cout<<"hey "<<sum<<" ";
                }else if(carry=='1'){
                    
                sum = '1' + sum;
                carry = '1';
                len1--;
                len2--;
                // cout<<"hey "<<sum<<" ";
                }
                // cout<<sum<<" ";
            }else if((a[len1]=='1' && b[len2]=='0') || (a[len1]=='0' && b[len2]=='1')){
                
                if(carry=='0'){
                    sum = '1' + sum;
                    carry = '0';
                len1--;
                len2--;
                    
                }else if(carry=='1'){
                    
                    sum = '0' + sum;
                    carry=='1';
                len1--;
                len2--;
                    
                }
                
            }
            else if(a[len1]=='0' && b[len2]=='0'){
                if(carry=='0'){
                    sum = '0' + sum;
                len1--;
                len2--;
                }else if(carry=='1'){
                    sum =  '1' + sum;
                len1--;
                len2--;
                carry='0';
                // cout<<sum<<" ";
                }
               
            }
            
        }
        
        if(len1!=-1 && len2==-1){
            while(len1!=-1){
                
                if(a[len1]=='0'){
            if(carry=='1'){
                sum = '1' + sum;
                carry='0';
            }else if(carry = '0'){
                sum = a[len1] + sum;
                carry='0';
            }
            }
                else if(a[len1]=='1'){
                    
                   if(carry=='1'){
                sum = '0' + sum;
                carry = '1';
            }else if(carry = '0'){
                sum = a[len1] + sum;
                carry='0';       
            } 
                    
                }
            len1--;
                
            }
        }else if(len2!=-1 && len1==-1){
            while(len2!=-1){
                
                if(b[len2]=='0'){
            if(carry=='1'){
                sum = '1' + sum;
                carry='0';
            }else if(carry = '0'){
                sum = b[len2] + sum;
                carry='0';
            }
            }
                else if(b[len2]=='1'){
                    
                   if(carry=='1'){
                sum = '0' + sum;
                carry = '1';
            }else if(carry = '0'){
                sum = b[len2] + sum;
                carry='0';       
            } 
                    
                }
            len2--;
        }
        }
        
        if(carry=='1'){
            sum= '1' + sum;
        }
        
        return sum;
    }
};


int main(){

string a;
cin>>a;
string b;
cin>>b;
Solution obj;
cout<<obj.addBinary(a,b);

}
