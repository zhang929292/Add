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

 
// void Add(int a, int b) { 
//   string str1 = std::to_string(a);
//   string str2 = std::to_string(b);
//   str1 += "str2";

//   cout<< str1 <<endl;
//   return;
// }

// void PrintPercentage(int length, int percentage){
//                     //std::string Solution::PrintPercentage(int length, int percentage){
//   string str;
//   string str1 = std::to_string(percentage);

//   for (int i = 1; i < length; i++){
//      //str = str + '-';
//     cout<<"-";
//   }
//   cout << ">" << percentage << "%" <<endl;
//   // str = str + '<';
//   // str = str + str1;
//   // str = str + '%';
//   //return ;


