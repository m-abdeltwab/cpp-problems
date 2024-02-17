#include<iostream>
using namespace std;




int main() {

   int start, end;
   cout <<"Enter Start Number : "<<endl;
   cin >> start;

   cout <<"Enter End Number : "<<endl;
   cin >> end;

   int n = (end - start) + 1;
      //Equation for sum range from start to end 
   int equa_from_n = n * (start + end) / 2;
      //Equation for sum range from 1 to end 
   int equa_from_1 = end * (end + 1) / 2;

   cout << "The Sum of the number from 1 to "<<end<<" = "<<equa_from_1<<endl;
   cout << "The Sum of the number from "<<start<<" to "<<end<<" = "<<equa_from_n<<endl;
return 0;
}