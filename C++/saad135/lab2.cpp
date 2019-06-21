#include <iostream>

std::string fizzbuzz(int num){
  std::string result="";
  if(num%3==0){
    result+="FIZZ";
    if(num%5==0){
      result+="BUZZ";
    }
  }
  return result;
}

bool leapyear(int year){
  if(year%4==0){
    if(year%100!=0){
      return true;
    }
    return false;
  }
  return false;
}

int main(){
  std::cout << fizzbuzz(15) << std::endl;
  std::cout << fizzbuzz(21) << std::endl;
  std::cout << fizzbuzz(2) << std::endl;
  std::cout << leapyear(400) << std::endl;
  return 0;
}
