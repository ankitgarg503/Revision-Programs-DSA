#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    string name;
    public:
    void setData(int age, string name){
        this->age = age;
        this->name = name;
    }
    void display(void){
        cout<<this->name;
        cout<<"  having age= "<<this->age;
    }
};




int main(){
    pair<string,string> p1;
    pair<string,int> p2;
    pair<int,int> p3;
    pair<string,float> p4;
    p1=make_pair("Ankit","Nitya");
    p2=make_pair("Nitya",2);
    p3=make_pair(20,22);
    p4=make_pair("Nitya",90);
    cout<<"\nPair P1\n";
    cout<<p1.second<<"  is a wife of "<<p1.first;
    cout<<"\nPair P2\n";
    cout<<p2.first<<" having "<<p2.second<<" childrens";
    cout<<"\nPair P3\n";
    cout<<p1.first<<" age="<<p3.first<<" and "<<p1.second<<" age="<<p3.second;
    cout<<"\nPair P4\n";
    cout<<p4.first <<" got "<<p4.second<<" marks"; 


    Student s1;
    s1.setData(22,"Nitya Saini");
    pair<string,Student> p6;
    p6=make_pair("Ankit",s1);
    cout<<"\n"<<p6.first<<" is a husband of ";
    Student s2=p6.second;
    s2.display();

    return 0;
}