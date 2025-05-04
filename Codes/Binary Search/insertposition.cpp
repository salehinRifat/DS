#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 4, 4, 6, 8};
    int target = 5;

   
    int ans = lower_bound(v.begin(), v.end(), target) - v.begin();

    cout << "Lower bound index of " << target << " is: " << ans << endl;

    return 0;
}
