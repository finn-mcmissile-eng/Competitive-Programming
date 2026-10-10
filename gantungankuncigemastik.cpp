#include <iostream>
using namespace std;
int main() {
    int n,k; cin >> n >> k;
    bool mungkin = true;

    if(n<3) {
        mungkin = false;
    }

    for(int i = 0; i < n; i++) {
        int m; cin >> m;
        if(m > k) {
            mungkin = false;
        }
    }

    if(mungkin) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }

    return 0;
}
