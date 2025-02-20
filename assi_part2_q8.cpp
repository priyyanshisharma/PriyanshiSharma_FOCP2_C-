// q8 Longest Consecutive Subsequence:
//Find the length of the longest subsequence of consecutive integers in an unsorted
//array.
//Example:
//Input: [1, 9, 3, 10, 2, 20]
//Output: 3 (The longest consecutive subsequence is [1, 2, 3]).
#include <iostream>
#include <unordered_set>
using namespace std;

int findLongestConsecutiveSubseq(int arr[], int n) {
    unordered_set<int> s(arr, arr + n);
    int longest = 0;
    
    for (int num : s) {
        if (s.find(num - 1) == s.end()) {
            int currentNum = num;
            int count = 1;
            
            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;
    
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "longest consecutive subseq: " << findLongestConsecutiveSubseq(arr, n) << endl;
    
    return 0;
}
