#include <iostream>
#include "Grade56.h"

using namespace std;

bool Grade56(double arr[3]) {
    int caseNum = arr[2];

    int num1 = arr[0] * 100;
    double rNum1 = (double) num1 / 100.0;
    int num2 = arr[1] * 100;
    double rNum2 = (double) num2 / 100.0;
    int ans;
    double result;

    switch (caseNum) {
        case 0:
            cout << rNum1 << " + " << rNum2 << " = ?" << endl;
            result = rNum1 + rNum2;
            break;
        case 1:
            cout << rNum1 << " - " << rNum2 << " = ?" << endl;
            result = rNum1 - rNum2;
            break;
        case 2:
            cout << rNum1 << " * " << rNum2 << " = ?" << endl;
            ans = rNum1 * rNum2 * 100 + 0.5;
            result = ans / 100.0;
            break;
        case 3:
            cout << rNum1 << " / " << rNum2 << " = ?" << endl;
            ans = (rNum1 / rNum2) * 100 + 0.5;
            result = ans / 100.0;
            break;
        default:
            break;
    }

    double input, solution;
    cin >> input;

    if (abs(result - input) < 1e-5) {
        return true;
    } else {
        return false;
    }
}