#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   map<string,string>mp;
    mp["Ankit"]="Nitya";
    mp["Anand"]="smily";
    mp["Rajat"]="sahahna";
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" is a wife of "<<it->first<<endl;
    }

    
     cout<<mp.size()<<endl;
     cout<<mp.empty()<<endl;
     cout<<mp.at("Ankit")<<endl;
    return 0;
}