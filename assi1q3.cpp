//  ASSIGNMENT1 Q3  string manipulation
//Write a program that:
#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++, right--;
    }
    return true;
}

void countCharacterFrequency(string str) {
    int freq[26] = {0};
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c >= 'a' && c <= 'z') freq[c - 'a']++;
    }
    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }
}

void replaceVowels(string &str, char replacement) {
    string vowels = "aeiouAEIOU";
    for (char &c : str) {
        for (char v : vowels) {
            if (c == v) {
                c = replacement;
                break;
            }
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    countCharacterFrequency(input);
    
    replaceVowels(input, '*');
    cout << "String after replacing vowels: " << input << endl;

    return 0;
}



