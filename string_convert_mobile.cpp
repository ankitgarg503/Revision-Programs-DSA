#include<iostream>
using namespace std;

string convertIntoMobile(string s){
          string ans;
          for (int i = 0; i < s.size(); i++)
          {
               if (s[i]=='A')
               {
                 ans=ans+"2";
               }
               if (s[i]=='B')
               {
                 ans=ans+"22";
               }
               if (s[i]=='C')
               {
                 ans=ans+"222";
               }
               if (s[i]=='D')
               {
                 ans=ans+"3";
               }
               if (s[i]=='E')
               {
                 ans=ans+"33";
               }
               if (s[i]=='F')
               {
                 ans=ans+"333";
               }
               if (s[i]=='G')
               {
                 ans=ans+"4";
               }
               if (s[i]=='H')
               {
                 ans=ans+"44";
               }
               if (s[i]=='I')
               {
                 ans=ans+"444";
               }
               if (s[i]=='J')
               {
                 ans=ans+"5";
               }
               if (s[i]=='K')
               {
                 ans=ans+"55";
               }
               if (s[i]=='L')
               {
                 ans=ans+"555";
               }
               if (s[i]=='M')
               {
                 ans=ans+"6";
               }
               if (s[i]=='N')
               {
                 ans=ans+"66";
               }
               if (s[i]=='O')
               {
                 ans=ans+"666";
               }
               if (s[i]=='P')
               {
                 ans=ans+"7";
               }
               if (s[i]=='Q')
               {
                 ans=ans+"77";
               }
               if (s[i]=='R')
               {
                 ans=ans+"777";
               }
               if (s[i]=='S')
               {
                 ans=ans+"7777";
               }
               if (s[i]=='T')
               {
                 ans=ans+"8";
               }
               if (s[i]=='U')
               {
                 ans=ans+"88";
               }
               if (s[i]=='V')
               {
                 ans=ans+"888";
               }
               if (s[i]=='W')
               {
                 ans=ans+"9";
               }
               if (s[i]=='X')
               {
                 ans=ans+"99";
               }
               if (s[i]=='Y')
               {
                 ans=ans+"999";
               }
               if (s[i]=='Z')
               {
                 ans=ans+"9999";
               }
               if (s[i]==' ')
               {
                 ans=ans+"0";
               }
               
          }
       return ans;   
}



int main(){
    string s="HEY U";
     string ans=convertIntoMobile(s);
     cout<<ans<<endl;
    return 0;
}