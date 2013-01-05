/*
Using the same rule as the shapes programs from earlier in the chapter (only
two output statements—one that outputs the hash mark and one that outputs
an end-of-line), write a program that produces the following shape:
########
 ######
  ####
   ##
*/

#include <iostream>
using std::cin;
using std::cout;


int main(void) {
  int row, pos, hash;

  for (row = 1; row <= 4; row++) {
    for (pos=1; pos < row; pos++)
      cout << " ";
    for (hash = 0; hash < 8 -2*(row - 1); hash++)
      cout << "#";
    cout << "\n";
  }
  return 0;
}
