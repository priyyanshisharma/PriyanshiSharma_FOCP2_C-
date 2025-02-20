//  q33 Create a program that determines whether a given floating-point number can be represented
//exactly in binary format and explains why (hint: binary representation of floating-point
    //numbers).
    #include <iostream>
    using namespace std;
    
    bool isRepresentableExactly(float num) {
        while (num != static_cast<int>(num)) {
            num *= 2;
            if (num > 1e7) return false;
        }
        return true;
    }
    
    int main() {
        float num;
        cout << "num: ";
        cin >> num;
        
        cout << (isRepresentableExactly(num) ? "yes" : "no") << endl;
        
        return 0;
    }
    
