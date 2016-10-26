#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cout << "Enter a number: \n";
    scanf("%d", &num);
    if(num == 1) {
        printf("one");
    } else if (num == 2) {
        printf("two");
    } else if (num == 3) {
       cout << "three" << endl;
    }else if (num == 4) {
       cout << "four" << endl;
    }else if (num == 5) {
       cout << "five" << endl;
    }else if (num == 6) {
       cout << "six" << endl;
    }else if (num == 7) {
       cout << "seven" << endl;
    }else if (num == 8) {
       cout << "eight" << endl;
    }else if (num == 9) {
       cout << "nine" << endl;
    } else if (num > 9) {
        printf("Greater than nine");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    return 0;
}

