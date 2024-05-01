#include<iostream>
#include<string>
#include<set>
using namespace std;

void permuation(string str,int s,int e,set<string>& st){
    if(s>e){
        return;
    }
    for (int i = s; i <e; i++)
    {
        swap(str[i],str[s]);
        st.insert(str);
        permuation(str,s+1,e,st);
        swap(str[i],str[s]);
    }
    
}


int main(){
    string s="nit";
    set<string> st;
    permuation(s,0,3,st);
    for (auto it:st)
    {
        cout<<it<<endl;
    }
    
    return 0;
}