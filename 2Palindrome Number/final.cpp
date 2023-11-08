// // #include <iostream>
// // #include <cstdlib>

// // using namespace std;

// // int main() {
// //     int n, rev = 0, rim;
// //     cin >> n;
// //     int oRiGiNaLnum = n;
    
// //     if (n < 0) {
// //         cout << "false" << endl;
// //         return 0;
// //     }

// //     while (n != 0) {
// //         rim = n % 10;
// //         rev = rev * 10 + rim;
// //         n = n / 10;
// //     }

// //     if (oRiGiNaLnum == rev) {
// //         cout << "true" << endl;
// //     } else {
// //         cout << "false" << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>

// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) {
//             return false;
//         }

//         int originalNumber = x;
//         int reversedNumber = 0;

//         while (x != 0) {
//             int remainder = x % 10;
//             reversedNumber = reversedNumber * 10 + remainder;
//             x = x / 10;
//         }

//         return originalNumber == reversedNumber;
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     Solution solution;
//     bool result = solution.isPalindrome(n);

//     if (result) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }



// class Solution {
// public:
//     bool isPalindrome(int x) {
//     if (n < 0) {
//         cout << "false" << endl;
//         return 0;
//     }

//     while (n != 0) {
//         rim = n % 10;
//         rev = rev * 10 + rim;
//         n = n / 10;
//     }

//     if (oRiGiNaLnum == rev) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
//     return 

    
// };


class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) {
            return false;
        }

        int original = n;
        int rev = 0;
        int rim;

        while (n != 0) {
            rim = n % 10;
            rev = rev * 10 + rim;
            n = n / 10;
        }

        if (original == rev) {
            return true;
        } else {
            return false;
        }
    }
};
