#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
    //   throw 1;
   }
    cout << "hello world" << std::endl;
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   }

   catch (...) {
     cerr << "Second " << endl;
   }

   return 0;
}