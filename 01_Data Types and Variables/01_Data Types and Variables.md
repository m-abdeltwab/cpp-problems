# Data Types & Variables

## Easy

### 01. Math Operation

```c++
double x, y;  
cin >> x >> y ;  
cout << x << " + " << y << " = " << x + y << endl;  
cout << x << " - " << y << " = " << x - y << endl;  
cout << x << " * " << y << " = " << x * y << endl;  
cout << x << " / " << y << " = " << x / y << endl;  
```

### 02. Student grades

```c++
string name_1;
cout << "What is student 1 name : " << endl;
cin >> name_1;

string id_1;
cout << "His id : " << endl;
cin >> id_1;

double grade_1;
cout << "His math exam grade : " << endl;
cin >> grade_1;

// Student 2
string name_2;
cout << "What is student 2 name : " << endl;
cin >> name_2;

string id_2;
cout << "His id : " << endl;
cin >> id_2;

double grade_2;
cout << "His math exam grade : " << endl;
cin >> grade_2;


//    Display the info
cout << "Student grades in math"<<endl;
cout << "======================"<< endl;
cout << name_1 << " (with id " << id_1 << ") " << "got grade : " << grade_1 << endl;
cout << name_2 << " (with id " << id_2 << ") " << "got grade : " << grade_2 << endl;
cout << (grade_1 + grade_2) / 2 << endl;
```



### 03. Even and Odd sum

```c++
double odd_1, odd_2, odd_3, odd_4;
double even_1, even_2, even_3, even_4;

cin >> odd_1 >> even_1;
cin >> odd_2 >> even_2;
cin >> odd_3 >> even_3;
cin >> odd_4 >> even_4;

int even_sum = even_1 + even_2 + even_3 + even_4;
int odd_sum = odd_1 + odd_2 + odd_3 + odd_4;
cout << even_sum << odd_sum;
```

## Medium

### 02. Range Summation

```c++
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
```
### 03. Swap

```c++
int num1, num2;
cin >> num1 >> num2;

int temp = num1;
num1 = num2;
num2 = temp;

cout <<num1<<" "<<num2<<endl;
```
