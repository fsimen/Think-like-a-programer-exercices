/* 
2-2.
Or how about:
   ##
  ####
 ######
########
########
 ######
  ####
   ##

*/

#include <iostream>
using std::cin;
using std::cout;

int main(void) {
  int row, pos, hash, i;
  for (row = 1; row <= 8; row++) {
    /* add spaces */
    pos = (row < 5)?(5 - row):(row - 4);
    for (i = 0; i < pos; i++)
      cout << " ";
    for (i = 0; i < 8 - 2 *(pos -1); i++)
      cout << "#";
    cout << "\n";
  }
  return 0;
}
