#include "solution.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int Solution::Add(int a, int b){
  a += b;
  return a; 
}
 string Solution::Add(string a, int b) { 
    string i = std::to_string(b);
    a += i;
    return a;
}
  string Solution::Add(string a, string b) { 
    a += b;
    return a;
}
