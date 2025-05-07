// If you are copying this, atleast use some brain and do some changes :D

// Preprocessor directive statements
#include <iostream>
#include <cmath>
using namespace std;

// Declaring function prototypes
float discriminant_fn (int a, int b, int c);


// The main function
int main() {
   
   // Declaring variables
   int a,b,c;
   float neg, pos, discriminant;
   char confirm;

   /* Prompting user to input the values
      This part can be made much simple, using a single 'cin' */
      
   start:  
   cout << "\nThis program helps to find the roots of a quadratic equation";

   cout << "\nEnter the coefficient of X^2:\t";
   cin >> a;

   cout << "\nEnter the coefficient of X:\t";
   cin >> b;

   cout << "\nEnter the last value:\t";
   cin >> c;

   // Confirming that the values are correct
   // Can be removed, incase :D
   confirm:
   cout << "\nCheck the following equation is correct or not.\nIf yes, type 'Y' or 'N' if its wrong.\n";
   cout << a << "X^2 +\t" << b << "X +\t" << c << "\n";
   cin >> confirm;

   // If-else statement to check the user reply
   // Can be removed, if u are lazy :D
   if (confirm == 'Y') {
      goto process;
   }
   else if (confirm == 'N') {
      goto start;
   }
   else {
      goto confirm;
   }

   //  Things get serious and dumb from here
   //  We are checking the no:of roots using function
   process:
   discriminant = discriminant_fn(a,b,c);


   if (discriminant > 0) {
      cout << "\nThere are 2 real roots";
      goto roots;
   }
   else if (discriminant == 0) {
      cout << "\nA unique root is possible";
      exit(0);
   }
   else {
      cout << "\nNo real roots are there";
      exit(0);
   }
   
   // Finding the roots
   // Atleast this is important, dont remove it XD
   roots:
   pos = ( (-b + sqrt(discriminant) ) / (2*a) );
   neg = ( (-b - sqrt(discriminant) ) / (2*a) );

   // Printing the values
   cout << "\nThe values are:\t" << pos << " And " << neg ;

}

// The function which we are gonna use to find discriminant
float discriminant_fn (int a,int b,int c) {
   float dis = ( pow(b,2) - (4*a*c) );
   return dis;
}


