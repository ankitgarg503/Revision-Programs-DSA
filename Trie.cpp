#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char data){
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
             children[i] =nullptr;
        }
        isTerminal=false;
        
    }
};

class Trie{

    public:

  TrieNode* root;
  Trie(){
        root=new TrieNode('\0');
  }
  
    void insertUtil(TrieNode* root,const string& words){
         if(words.size()==0){
            root->isTerminal=true;
            return;
         }
         int index=words[0]-'A';
         TrieNode* temp=nullptr;
         if(root->children[index]!=nullptr){
            temp=root->children[index];
         }
         else{
            temp=new TrieNode(words[0]);
            root->children[index]=temp;
         }
         insertUtil(temp,words.substr(1));



    }
   void insert(const string& words){
     insertUtil(root,words);
   }

    bool searchUtil(TrieNode* root,const string& words){
         if(words.size()==0){
            return  root->isTerminal;
         }
         int index=words[0]-'A';
         TrieNode* temp=nullptr;
         if(root->children[index]!=nullptr){
            temp=root->children[index];
         }
         else{
            return false;
         }
        return searchUtil(temp,words.substr(1));

    }
   bool search(const string& words){
        return searchUtil(root,words);
   }

};

int main(){
    
    Trie t;
    t.insert("ABC");
    t.insert("ABCD");
    t.insert("ABCG");
   cout << t.search("ABG") << endl;
    return 0;
}