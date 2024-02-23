#include <iostream>
using namespace std;


int main(){
  int n;
  cin >> n;

  bool is_prime = true;

  for(int num = 2; num < n; ++num){
      for(int i = 2; i < num; ++i){
          if(num % i == 0){
              cout <<i;
          }
      }


  }




    return 0;
}