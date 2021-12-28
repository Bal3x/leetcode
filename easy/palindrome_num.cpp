/* Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

    For example, 121 is a palindrome while 123 is not.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 

Constraints:

    -231 <= x <= 231 - 1

 
Follow up: Could you solve it without converting the integer to a string?

Create by Bryan Chavez
*/

#include <iostream>
using namespace std;

int main(){
// variables
    int x;
// solicitar al usuario numero al que se le quiere probar que es un palindromo
    cout << "Entre el numero al que se le quiere probar que es un Palindromo: " << endl;
    cin >> x;
        while (x < 0 || x > 230 - 1){
            cout << "Valor invalido por favor intente nuevamente con un valor entre -231 al 230." << endl;
            cin >> x;
            
        }
    cout << x << endl;


    return 0;
}
