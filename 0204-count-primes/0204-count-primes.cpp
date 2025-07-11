// #include <iostream>
// using namespace std;

// int main() {
//     int n,count = 0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 2; i < n; i++) {
//         bool isPrime = true;

//         for (int j = 2; j * j <= i; j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }
class Solution {
public:
    int countPrimes(int n) {
        
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};
