#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<string,string,string> t1;
    t1=make_tuple("Ankit"," Nitya","Aakash");
    cout<<get<0>(t1)<<" garg wife name is "<<get<1>(t1)<<" and baby name is "<<get<2>(t1);
    return 0;
}