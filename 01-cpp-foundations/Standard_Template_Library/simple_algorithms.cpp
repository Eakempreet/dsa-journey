// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Custom comparator: sort by second ascending,
// and if second is equal, sort by first descending.
// Return true when p1 should come BEFORE p2.
bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // second is same, so decide using first
    return p1.first > p2.first;
}

int main() {
    // SORTING
    int a[] = {1, 5, 3, 2};
    int n = 4;
    sort(a, a + n);                  // ascending, range is (start, end)
    sort(a, a + n, greater<int>());  // descending

    vector<int> v = {1, 5, 3, 2};
    sort(v.begin(), v.end());        // same idea for vectors

    pair<int, int> b[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(b, b + 3, comp);
    // result: {4,1}, {2,1}, {1,2}

    string s = "312";
    sort(s.begin(), s.end());        // s becomes "123"

    // BIT COUNTING
    int num = 7;                     // binary 111
    int cnt = __builtin_popcount(num);          // 3 (count of 1s)

    long long num1 = 234234234234;
    int cnt1 = __builtin_popcountll(num1);      // ll version for long long

    // MIN, MAX, REVERSE
    int mx = *max_element(v.begin(), v.end());  // returns iterator, so use *
    int mn = *min_element(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // PERMUTATIONS
    string t = "123";
    do {
        cout << t << "\n";           // 123 132 213 231 312 321
    } while (next_permutation(t.begin(), t.end()));
    // Note: sort first, or you miss the smaller permutations

    return 0;
}