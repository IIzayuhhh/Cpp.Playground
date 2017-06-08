//https://www.hackerrank.com/challenges/staircase
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
  Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

  Write a program that prints a staircase of size .
*/


int main(){

  //SOLUTION
    int n, steps;
    cin >> n;
    steps = n;

    for(int i = 0; i < n; i++){
      for(int j = n; j >= steps; j--){
        cout << "#";
      }
      steps--;
      cout << endl;
    }
  //END OF SOLUTION

    return 0;
}


/*
  Sample input: 6

  Sample output:

    #
    ##
    ###
    ####
    #####
    ######

*/
