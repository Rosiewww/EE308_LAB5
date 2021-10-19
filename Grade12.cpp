#include <iostream>
#include "Grade12.h"

using namespace std;

bool Grade12(double arr[3]) {
    int firstNum = arr[0];
    int secondNum = arr[1];
    //The third number in the array represents the operation symbol
    // 0 represents plus "+"
    // 1 represents minus "-"
    // 2 represents multiply "*"
    // 3represents division "/"
    int caseNum = arr[2];
    int ans, useRes;

    if (caseNum == 0) {  // 0 represents plus "+"
        ans = firstNum + secondNum;
        cout << firstNum << " + " << secondNum << " = ?" << endl;//Print the question to the screen.
        cin >> useRes;  //Get the user's input

        if (ans == useRes) {
        	//If user's answer equals to the right answer, then return true
            return true;
        } else {
        	//If user's answer dosen't equal to the right answer, then return true
            return false;
        }
    }

    if (caseNum == 1) { // 1 represents minus "-"
        ans = firstNum - secondNum;
        cout << firstNum << " - " << secondNum << " = ?" << endl;
        cin >> useRes;

        if (ans == useRes) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
