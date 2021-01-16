#include <iostream>
// Fizz and Buzz refer to any number that's a multiple of 3 and 5 respectively. In other words, if a number is divisible
// by 3, it is substituted with fizz; if a number is divisible by 5, it is substituted with buzz. If a number is simultaneously
// a multiple of 3 AND 5, the number is replaced with "fizz buzz." In essence, it emulates the famous children game
// "fizz buzz".

using namespace std;

int main() {

  int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size = 15;
  

  for (int i = 0; i < size; i++){

    //cout << numbers[i] << endl;
    //Speed up algorithm by directly checking if number is 
    //divisible by 15 instead of checking if number is divisible
    //by 3 && 5. Runtime of O(n) instead of O(N^2).
    if (numbers[i] % 15 == 0){
      cout << "fizz buzz" << endl;
    }else if (numbers[i] % 3 == 0){
      cout << "fizz" << endl;
    }else if (numbers[i] % 5 == 0){
      cout << "buzz" << endl;
    }else cout << numbers[i] << endl;
    
    

  }

 

  return 0;
  
}