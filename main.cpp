/* Nicholas Chen
  Class: ICS3UI-01
    Purpose: To answer questions 1 - 6 using while loops */

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  int input; // menu to select questions //
  do {
    cout << "Question 1 - 1\n";
    cout << "Question 2 - 2\n";
    cout << "Question 3 - 3\n";
    cout << "Question 4 - 4\n";
    cout << "Question 5 - 5\n";
    cout << "Question 6 - 6\n";

    cin >> input;
    switch (input) {
     
    case 1: {
      cout << "Question 1:" << endl;
      int num, sum, digit;
      cout << "Enter an integer: " << endl;
      cin >> num;
      num = abs(num); // This takes care of the negative numbers by taking the
                      // absolute value of the number //
      sum = 0;

      do {
        digit = num % 10; // This takes the last digit of the number //
        sum += digit;
        cout << digit << " ";
        num = num / 10; // This removes the last digit of the number //
      } while (num > 0);
      cout << " " << endl;
      cout << "The sum of the individual numbers is: " << sum << endl;
    }

    case 2: {
      cout << "Question 2:" << endl;
      int numLetters;
      char phoneNumberLetter;
      cout << "Enter amount of letters you want to express: ";
      cin >> numLetters;
      cout
          << "\nEnter the letters that you want to express in a phone number: ";

      // loop determining the letters associated with the numbers
      for (int counter = 0; counter < numLetters; counter++) {
        cin >> phoneNumberLetter;

        // puts hyphen between 3 letters
        if (counter == 3)
          cout << "-";
        if (counter == 6)
          cout << "-";
        // checking the letters
        if (phoneNumberLetter >= 'A' && phoneNumberLetter <= 'Z' ||
            phoneNumberLetter >= 'a' && phoneNumberLetter <= 'z')

          // converting letters into numbers
          switch (phoneNumberLetter) {
          case 'A': // using a switch for all the possibilities//
          case 'a':
          case 'B':
          case 'b':
          case 'C':
          case 'c':
            cout << 2;
            break;
          case 'D':
          case 'd':
          case 'E':
          case 'e':
          case 'F':
          case 'f':
            cout << 3;
            break;
          case 'G':
          case 'g':
          case 'H':
          case 'h':
          case 'I':
          case 'i':
            cout << 4;
            break;

          case 'J':
          case 'j':
          case 'K':
          case 'k':
          case 'L':
          case 'l':
            cout << 5;
            break;
          case 'M':
          case 'm':
          case 'N':
          case 'n':
          case 'O':
          case 'o':
            cout << 6;
            break;
          case 'P':
          case 'p':
          case 'Q':
          case 'q':
          case 'R':
          case 'r':
          case 'S':
          case 's':
            cout << 7;
            break;

          case 'T':
          case 't':
          case 'U':
          case 'u':
          case 'V':
          case 'v':
            cout << 8;
            break;

          case 'W':
          case 'w':
          case 'X':
          case 'x':
          case 'Y':
          case 'y':
          case 'Z':
          case 'z':
            cout << 9;
            break;
          } //...end switch
      }     //...end for loop
    case 3: {

      cout << " " << endl;
      cout << "Question 3:" << endl;

      int num, x, oddSum = 0, evenSum = 0;
      cout << "Enter the number of sets of integers: "; // takes the number of
                                                        // sets of integers //
      cin >> num;
      cout << "Enter the integers:"
           << endl; // takes the actual integer values of each set //
      int i = 0;
      while (i < num) {
        cin >> x;
        if (x % 2 == 0) // checks if even or not //
          evenSum += x;
        else
          oddSum += x;
        i++;
      }
      cout << "The sum of even numbers is: " << evenSum << endl;
      cout << "The sum of odd numbers is: " << oddSum << endl;
    }

    case 4: {
      cout << "Question 4:" << endl;

      int input;
      int control = 2;
      bool isPrime = true;

      cout << "Enter any positive number: ";
      cin >> input;

      // ensures that number inputted is positive
      while (input < 0) {
        cout << "enter another number: ";
        cin >> input;
      }

      // finds if inputted number is divisible by any number lesser than it
      for (control = 2; control <= input / 2; control++) {
        if (input % control == 0) {
          isPrime = false;
          break;
        }
      } //..end for loop

      // outputs if number is a prime number
      if (isPrime) {
        cout << "This number is a prime number";
      }

      else
        cout << "This number is not a prime number";
    }
      cout << " " << endl;
    case 5: {

      cout << "Question 5: " << endl;
      cout << "a)" << endl;
      int firstNum, secondNum, sum2;
      while (firstNum >= secondNum) {
        cout << "Enter an integer: " << endl;
        cin >> firstNum;
        cout << "Enter another integer that is greater than the first integer: "
             << endl;
        cin >> secondNum;
      }

      cout << "b)" << endl;
      int number =
          firstNum +
          1; // takes the values in between the numbers that are inputted //
      while (number < secondNum) {
        if (number % 2 == 0) { // finds even numbers //
          number++;
        } else
          cout << " " << number++;
        {}
      }
      cout << " " << endl;
      cout << "c)" << endl;
      number = firstNum + 1;
      sum2 = 0;

      while (number < secondNum) {
        if (!(number % 2 == 0)) // finds the even numbers //
          sum2 += number++;
        else {
          number++;
          continue;
        }
      }
      cout << "The sum of all even numbers between the two integers are: "
           << sum2 << endl;
      cout << "d)" << endl;
      number = 2;
      while (number < 10) {
        cout << number << " -> " << number << "^2"
             << " = " << number * number;
        number++; // calculates the squares of 2-9 //
      }
      cout << "" << endl;

      cout << "e)" << endl;
      number = firstNum + 1; // makes sure program only uses the numbers in
                             // between the inputted numbers //
      sum2 = 0;
      while (number < secondNum) {
        if (number % 2 == 1) // finds odd numbers //
        {
          sum2 += (number * number);
          number++; // calculates the sum of the odd squares by multiplying all
                    // the odd numbers that are filtered from the list of values
                    // //
        } else {
          number++;
          continue;
        }
      }
      cout << "The sum is: " << sum2 << endl;
      cout << "f)" << endl;
      int x1 = 65;
      while (x1 < 91)
        cout << char(x1++)
             << ", "; // gives all the letters from a-z in capitals //
    }

    case 6: {
      cout << " " << endl;
      cout << "Question 6: " << endl;
      int numMonths;
      double loanAmt, interestRateYearly, monthlyPayment, interestRateMonthly,
          amtOwed;
      cout << "Enter the value of the loan: ";
      cin >> loanAmt;
      cout << "Enter the yearly interest rate as a percentage (e.g. if "
              "interest rate was 7.2%, enter 7.2): ";
      cin >> interestRateYearly;
      cout << "Enter the monthly payment: ";
      cin >> monthlyPayment;

      while (loanAmt > 0) { // amount of months to repay the loan //
        cout << "The loan amount left is " << loanAmt << endl;
        interestRateMonthly = interestRateYearly / 1200 * loanAmt;
        loanAmt += interestRateMonthly - monthlyPayment;

        if (amtOwed < loanAmt) { // checks if the loan is payable //
          cout << "The monthly payment isn't enough to play the loan back.";
          break;
        }
        numMonths++; // counter so that is counts the months needed to pay off
                     // the loan //
      }
      cout << " and it will take " << numMonths
           << " months to pay off your loan " << endl;
    }
    }
    }
  } while (input < 7); // while loop condition for the menu //
}