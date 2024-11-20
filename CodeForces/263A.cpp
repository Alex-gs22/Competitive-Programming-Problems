#include <iostream>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int mainiooni() {
    fastIO;
    int val;
    for(int i = 0; i <=4; i++) {
        for(int j = 0; j<=4; j++) {
            cin>>val;
            if(val==1) {
                cout<<abs(i-2)+abs(j-2);
                return 0;
            }
        }
    }
    return 0;
}