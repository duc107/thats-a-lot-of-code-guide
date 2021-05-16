#include <iostream>
#include <cmath>
using namespace std;


int solve (int a, int& decrease) {
    for (size_t b = 1; b <= a; b++)
    {
        decrease = pow(a, 3) - pow(b, 3);
        return decrease;
       
    }
}

bool check(int decrease) {
    bool isPrime = true;
    if (decrease == 0 || decrease == 1) {
            isPrime = false;
        }
    else {
        for (size_t i = 2; i <= decrease / 2; ++i) {
            if (decrease % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}


int32_t main() {
    int a, ans = 0, h = 0, decrease = 0;

    cin >> a;
    for (size_t b = 1; b <= a; b++)
    {
        decrease = pow(a, 3) - pow(b, 3);
        cout << decrease << " ";
       
    }
    // cout << solve(a, decrease) << " ";
    // check(decrease);
    // if (check(decrease) == true) {
    //     ++ans;
    // }
    // cout << ans << "\n";
    
    return 0;
}