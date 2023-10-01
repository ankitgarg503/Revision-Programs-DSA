#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    list<int>l1;
    l1.push_back(23);l1.push_back(11);l1.push_back(12);
    list<string>l2={"Ankit","Nitya","anand","Rajat","smily","aaksita","pankaj"};
      l1.sort();
     l2.reverse();
     l2.reverse();
     l2.remove("Nitya2");
    auto it=l2.begin();
    for (const string& str : l2)
    {
        cout<<" "<<str;
    }
    cout<<endl;
    
    for ( it;it!=l2.end();it++)
    {
           cout<<*it<<" <--> ";
    }
    auto it2=l1.begin();
    for ( it2;it2!=l1.end();it2++)
    {
           cout<<*it2<<" <--> ";
    }
    cout<<"NULL";
   l1.clear();
    cout<<endl<<l1.size();
    cout<<endl<<l2.size();
    
    return 0;
}