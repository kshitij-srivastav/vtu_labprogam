#include<iostream>
using namespace std;

int main()
{
   char choice;
   long num1, num2, x;

   //options
   cout << "-------------MENU-------------"
           "\n + Addition"
           "\n - Subtraction"
           "\n * Multiplication"
           "\n / Division"
           "\n\n Enter the symbol for operator: ";
   cin >> choice;

   switch (choice)
   {
      //Addition
      case '+':
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 + num2;
         cout << "Sum = " << x;
         break;

      //Subtraction
      case '-':
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 - num2;
         cout << "Subtraction = " << x;
         break;

      //Multiplication
      case '*':
         cout << "Enter two numbers: \n";
         cin >> num1 >> num2;
         x = num1 * num2;
         cout << "Product = " << x;
         break;

      //Division
      case '/':
         cout << "Enter Dividend: ";
         cin >> num1;
         cout << "Enter Divisor: ";
         cin >> num2;

         //while loop checks for divisor whether it is zero or not
         while(num2 == 0)
         {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> num2;
         }
         x = num1 / num2;
         cout << "\nQuotient = " << x;
         break;
      default: cout << "\nError";
   }
   return 0;
}
