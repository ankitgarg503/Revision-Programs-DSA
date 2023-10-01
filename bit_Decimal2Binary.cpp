// #include<math.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int num=7;
//     int ans=0;
//     int i=0;
//      while (num!=0)
//      {
//             int bit=num & 1;
//             ans=(bit*pow(10,i))+ans;
//             num=num>>1;
//             i++;
//      }
//         cout<<ans<<endl; 
//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    float ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}