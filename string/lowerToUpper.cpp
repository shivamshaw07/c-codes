#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "ShiVam";
    for(int i = 0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i] + 32;
                cout<<i<<endl;
            }
        }
    
    cout<<s;
}
