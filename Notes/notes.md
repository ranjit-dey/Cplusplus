# Cplusplus
Learning c plus plus programming language


# **Notes**
- C++ is a Object Oriented Programming Language
- C++ is a superset of c language

**Software**
- Console based application
- GUI application
- Web application
- System application : OS
- Mobile application

### Here we will learn about **Console based application and Object Oriented Concept**
There are two approaches to make a software -

1. Procedure Oriented
2. Object Oriented
Example : 
1. C is a procedure oriented programming language.
2. C++ is object oriented programming language

Although C++ is procedure and object oriented programming language because C++ is superset of C language
When a class is created then these two things will defined
1. Variable/Properties
2. Method

In some other class one extra things are there that is
1. Opertor 
**Examples**
- object.variable
- object.function()
- Class contains description of an object
- Class contains properties/variable or methods/function
As a class contains properties
- properties will same for all object
- properties value may or may not same

Example : 
In a class there is properties called age , so for a object like Ram age 16 but Shyam age 65
    Whenever an action(method/function) is performed then the state of that object may or may not be changed.
```c++
#include<iostream>
using namespace std;
int main() {
    cout << "Hello World" << endl;
}
```
<h1 style="font-size: 50px; font-weight: bold; font-family: sans-serif; color: yellow; ">function()</h1>

### **inline keyword**

```c++
inline
```
- inline is keyword used for optimization purpose
- inline is a request to compiler

inline keyword request the compiler if possible then expand the code only.
Actually in function there are some advantage and disadvantages like

- **Advantages**
    - reusability of code
    - easily maintainance
    - readablity

- **Disadvantages**
    - Memory waste for small code like sum of two number
    - Increases execution time

So, to utilize function advantages and avoid disadvantages we are used inline keyword.

if the code is small the inline keyword expand the code of function to the object file. and if the code is large it will not expand the code in object file.

if there is any loop, recursion, switch in function then compiler will expand the code in object file if the code is small.
**Example**

use inline keyword in declaration
```c++
#include<iostream>
using namespace std;
inline int calculateCube(int); // inline keyword
int main()
{
    cout << endl << endl;

    int number, result;
    cout << "Enter a number: ";
    cin >> number;

    result = calculateCube(number);
    cout << "value: " << result;

    cout << endl << endl;
    return 0;
}

int calculateCube(int num){
    return num*num*num;
}
```
### **default argument**

in the following example of c++ code I used default argument.
if user not provide the values then also this code will run for three argument without any error

*Rules :*
- Default argument are right aligned
    - Example :
        - valid:
            1. int add(int=0, int=0, int=0)
            2. int add(int, int=0, int=0)
            3. int add(int, int, int=0)
        - invalid:
            1. int add(int=0, int, int)
            2. int add(int=0, int=0, int)
            3. int add(int, int=0, int)
    
    You will face an error if you used invalid declaration
        
- You can give the default values only once either declaration time or definition time

```c++
    // Error one example
    #include<iostream>
    -----
    int add(int, int=0, int=0); 
    int main()
    {
        -----
        -----
        -----
    }

    int add(int a, int b=0, int c=0){ // again default value provides
        ----
        ----
        ----
    }



    // Error two example
    /*
        Although you are set default values only once.
        if you provides less than 3 argument in program the you will face error because the forward declaration of add is with 3 arguments (too few arguments)

        to avoid this error write the definition of the function before main function
    */
    #include<iostream>
    -----
    int add(int, int, int); 
    int main()
    {
        -----
        -----
        -----
    }

    int add(int a, int b=0, int c=0){ // agian default value provides
        ----
        ----
        ----
    }
```

Example :
```c++
#include<iostream>
using namespace std;
int Add(int=0, int=0, int=0); // default values set to zero

int main()
{
    cout << endl;

    int x = 45;
    int y = 20;
    int z = 10;

    // uses of the function Add()
    cout << "the sum : " << Add() << endl;
    cout << "the sum of " << x << " is : " << Add(x) << endl; 
    cout << "the sum of " << x << " + " << y << " is : " << Add(x+y) << endl;
    cout << "the sum of " << x << " + " << y << " + " << z << " is : " << Add(x+y+z) << endl;
    cout << endl;
    return 0;
}

int Add(int firstNum, int secondNum, int thirtNum)
{
    return firstNum+secondNum+thirtNum;
}
```

### **reference variable**
There are some type of variable in c
- normal variable
    - int a = 10;
- pointer variable
    - int *b = &a;

But in C++ there are one extra type of variable 
- reference variable
    - int &c = a;


Description of **reference variable**
- reference variable is a alise of that variable which you want to assign. 
- it is a nickname of original variable.
- there is no physical address of reference variable.
- in above example address of c is as same as address of a.
- After assign &c = a , you can't assign any other varible to it like &c = z, it is not possible.
- If you change anything in c it will reflect in a also vice versa.
- You can create so many reference variable of a variable.
- You can't assign null to a reference variable. (int &x = null --> error)
- You can't only declare reference variable , you must have to initialize it with a variable otherwise you will face error. 
    - example
        - int &y; --> error
        - int &y = a; --> ok



Difference between a pointer variable and reference variable :
- you can reassign pointer variable to any other address but you can't reassign reference variable.
- you can declare pointer variable, and you can assign null to it but in reference variable you can't do it.
- in pointer variable memory will allocate but in reference variable memory will not allocate further. 
- you can access related address by increment or decrement in pointer variable but in reference variable it is not possible.
- pointer variable is little bit hard but reference variable is easy.
**Example of Program**

```c++
#include<iostream>
using namespace std;
int main()
{
    cout << endl;

    int a = 10;
    int *b = &a;
    int &c = a;

    c = c+20;
    cout << a << endl;
    a = a+1;
    cout << c << endl;

    if(&c == &a) cout << "Denotes same memory location." << endl;
    cout << "Prove : " << endl << 
                "\taddress of a : " << &a << endl << 
                "\taddress of c : " << &c << endl << endl;
    return 0;
}
```
**Output of program**

```c++
30
31
Denotes same memory location.
Prove :
        address of a : 0xb44bdffa5c
        address of c : 0xb44bdffa5c
```

<p style="font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;">Call by value</p>

```c++
    #include<iostream>
    using namespace std;

    void f(int, int); // call by value

    int main()
    {
        cout << endl;

        // call by value
        f(10, 15);

        cout << endl;
        return 0;
    }

    void f(int a, int b){
        cout << a << " + " << b << " = " << a+b << endl; 
    }
```

<hr/>

**output**

```c++
10 + 15 = 25
```


<p style="font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;">Call by address</p>


```c++
    #include<iostream>
    using namespace std;
    void fun(int *, int *); // call by address

    int main()
    {
        cout << endl;

        // call by address
        int a = 10, b = 20;
        fun(&a, &b);

        cout << endl;
        return 0;
    }


    void fun(int *num1, int *num2){
        cout << *num1 << " + " << *num2 << " = " << *num1 + *num2 << endl;
    }

```

<hr/>

**output**

```c++
10 + 20 = 30
```

<p style="font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;">Call by reference</p>

```c++
    #include<iostream>
    using namespace std;

    void function(int &, int &); // call by reference

    int main()
    {
        cout << endl;

        // call by reference
        int m = 50, n = 40;
        function(m, n);

        cout << "value of m: " << m << ", " << "value of n: " << n << endl;
        cout << endl;
        return 0;
    }

    void function(int &num1, int &num2){
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        num1 = 23;
        num2 = 32;
    }
```
<hr/>

**output**

```c++
50 + 40 = 90
value of m: 23, value of n: 32
```

question: tell me here what is x in cin (call by value/call by address/call by reference)
```c++
    int x;
    cin >> x;
```

answer: call by reference
as we can assign/change the value of x.

    call by value -> in call by value we can't change or update the value.
    call by reference -> if it is call by reference then it looks like : cin >> &x.
### **function overloading**
- multiple function with same name

```c++

return_type function_name(arguments)
            <---------------------->
              signature of function


for function overloading signature of function must be unique.

```
**Description of function overloading**
- number of argument must be different or type of argument must be different
- function selection (overload resolution) is perfomed by compiler -> also know as binding
- function selection is based on number of argument or types of argument
- same signature but different return type is not a function overloading.
    - int fun(int a)
    - void fun(int x)
- binding is decided in compile time
    - binding is which function will execute in function overloading


**Example of function/method overloading**

```c++
    #include<iostream>
    using namespace std;

    // method overloading
    int max(int, int, int, int);
    int max(int, int, int);
    int max(int, int);

    int main()
    {
        cout << endl;

        cout << "Max of (1, 7, 8, 11) : " << max(1,7,8,11) << endl;
        cout << "Max of (1, 8, 6) : " << max(1,8,6) << endl;
        cout << "Max of (8, 6) : " << max(8,6) << endl;

        cout << endl;
        return 0;
    }

    int max(int a, int b, int c , int d)
    {
        if(a > b){
            if(a > c){
                if(a > d) return a;
                return d;
            }
            else{
                if(c > d) return c;
                return d;
            }
        }
        else{
            if(b > c){
                if(b > d) return b;
                return d;
            }
            else{
                if(c > d) return c;
                return d;
            }
        }
    }

    int max(int a, int b , int c)
    {
        return a > b ? a > c ? a : c : b > c ? b :c;
    }

    int max(int a, int b)
    {
        return a > b ? a : b;
    }

```
<img src="./Images/binding1.png" style="width: 80vw; margin-left: 10vw; filter: saturate(0);"/>

**Summary of binding process**

- Identify candidate functions by name.
- Filter to viable functions that match the argument list.
- Select the best match based on exact matches and conversions.
  - Exact matches (no conversion needed).
  - type Promotions (e.g., int to double).
  - Standard conversions (e.g., float to double).
  - User-defined conversions (like conversion operators or constructor calls, which are less preferred).
- Check for ambiguity; if ambiguous, report a compile-time error.
  
```c++
        int f(double);
        void f(double, double=2.5); 
        //here compile will throw an error

        int main()
        {
                f(3.6);
        }
```
- Bind the function if a single, best match is found
<img src="./Images/binding.png" style="width: 100vw; "/>


<hr>
<h1 style="font-size: 50px; font-weight: bold; font-family: sans-serif; color: yellow; ">Structure</h1>

**Description of structure :**
- It is option to write struct keyword while you are using structure variable only use struct keyword where it is defined (mandatory)

- by using typedef keyword you can create nickname of (struct struct_name)

```c++
struct student{
    int age;
} typedef details;

// here details is the nickname of struct student data type
```
<h2>Example</h2>

```c++
#include<iostream>
#include<string.h>
using namespace std;

// created structure of student
struct student {
    char name[30];
    int age;
    float CGPA;
    char section;
} typedef details; // assign a nickname details

/*
we can't write the function above the struct student 
variable because before use a variable we must have to declare it first
*/

// funtion to take input
details input(){  
    details student; // created a struct student variable

    // taking input from user
    cin.ignore();

    cout << endl;
    cout << "Enter name of the student : ";
    cin.getline(student.name, 30);


    cout << "Enter " << student.name << "'s age : ";
    cin >> student.age;

    cout << "Enter " << student.name << "'s section : ";
    cin >> student.section;

    cout << "Enter " << student.name << "'s CGPA : ";
    cin >> student.CGPA;

    return student;
}

// function to print the details 
void printDetails(details student){
    int total_no_character = 10+strlen(student.name);

    cout << endl;
    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl;

    cout << "Student Details" << endl;

    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl;

    cout << "Name\t: " << student.name << endl;
    cout << "Age\t: " << student.age << endl;
    cout << "Section\t: " << student.section << endl;
    cout << "CGPA\t: " << student.CGPA << endl;

    for(int i=1; i <= total_no_character; i++) cout << "-";
    cout << endl << endl;

    
}


int main()
{
    cout << endl;

    // type 1
    struct student s1 = {"Ranjit Dey",21, 8.6, 'C'};
    printDetails(s1);


    // type 2
    details s2;
    s2.age = 12;
    s2.section = 'C';
    s2.CGPA = 8;
    strcpy(s2.name, "Hori bol");
    printDetails(s2);

    // type 3
    int total_number_student;
    cout << "Enter total number of student : ";
    cin >> total_number_student;

    details X[total_number_student];

    for(int i = 0; i < total_number_student; i++){
        X[i] = input();
    }

    for(int i = 0; i < total_number_student; i++){
        printDetails(X[i]);
    }

    cout << endl;
    return 0;
}
```

<h2>Detailed Notes about Structure(OOP)</h2>

<img src="./Images/structure.png" style="width: 100vw; "/>

<h2>Example :</h2>

```c++
#include<iostream>
#include<string.h>
using namespace std;

// created structure of student
struct student {
    char name[30];
    int age;
    float CGPA;
    char section;

    // input function
    void input(){  
        // taking input from user
        cin.ignore();

        cout << endl;
        cout << "Enter name of the student : ";
        cin.getline(name, 30);


        cout << "Enter " << name << "'s age : ";
        cin >> age;

        cout << "Enter " << name << "'s section : ";
        cin >> section;

        cout << "Enter " << name << "'s CGPA : ";
        cin >> CGPA;
    }

    // display function
    void printDetails(){
        int total_no_character = 10+strlen(name);

        cout << endl;
        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl;

        cout << "Student Details" << endl;

        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl;

        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Section\t: " << section << endl;
        cout << "CGPA\t: " << CGPA << endl;

        for(int i=1; i <= total_no_character; i++) cout << "-";
        cout << endl << endl;
    }

} typedef details; // assign a nickname details


int main()
{
    cout << endl;

    // type 1
    student s1 = {"Ranjit Dey",21, 8.6, 'C'};
    s1.printDetails();


    // type 2
    details s2;
    s2.age = 12;
    s2.section = 'C';
    s2.CGPA = 8;
    strcpy(s2.name, "Hori bol");
    s2.printDetails();

    // type 3
    int total_number_student;
    cout << "Enter total number of student : ";
    cin >> total_number_student;

    details X[total_number_student];

    for(int i = 0; i < total_number_student; i++){
        X[i].input();
    }

    for(int i = 0; i < total_number_student; i++){
        X[i].printDetails();
    }

    cout << endl;
    return 0;
}
```

<h2>Notes about data security</h2>

<img src="./Images/datasecurity.png" style="width: 100vw; "/>

<h2>Sample programs</h2>

```c++
#include<iostream>
#include<string.h>
using namespace std;

struct patient{
    char name[30];
    int age;
    char services[100];

    void input(){
        cout << "Enter patient name : ";
        cin.getline(name, 30);

        cout << "Enter patient age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter your problem : ";
        cin.getline(services, 100);
    }

    void printPatientDetails(){
        cout << "--------------------" << endl;
        cout << "Patient's Details : " << endl;
        cout << "--------------------" << endl;
        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Problem\t: " << services << endl;
    }
};

int main()
{
    cout << endl;

    patient p2;
    p2.age = 12;
    strcpy(p2.name, "Hello World");
    strcpy(p2.services, "Hello world tech programming language devops machine learning");

    p2.printPatientDetails();

    patient p1;
    p1.input();
    p1.printPatientDetails();

    cout << endl;
    return 0;
}
```
<h3>Member variable hiding using structure</h3>

```c++

#include<iostream>
#include<string.h>
using namespace std;

struct patient{

private :
    char name[30];
    int age;
    char services[100];

public :
    void input(){
        cout << "Enter patient name : ";
        cin.getline(name, 30);

        cout << "Enter patient age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter your problem : ";
        cin.getline(services, 100);
    }

    void printPatientDetails(){
        cout << "--------------------" << endl;
        cout << "Patient's Details : " << endl;
        cout << "--------------------" << endl;
        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Problem\t: " << services << endl;
        
    }
};

int main()
{
    cout << endl;

    // patient p2;

    // You can't do this
    // p2.age = 12;
    // strcpy(p2.name, "Hello World");
    // strcpy(p2.services, "Hello world tech programming language devops machine learning");

    // p2.printPatientDetails(); // ---> it is correct

    patient p1;
    p1.input();
    p1.printPatientDetails();

    cout << endl;
    return 0;
}
```

<h3>Member variable hiding using class</h3>

```c++
#include<iostream>
#include<string.h>
using namespace std;

class patient{

    // as it is a class so all member are set to private by default
    char name[30];
    int age;
    char services[100];

    // making the function public to access it outside the struct block
public :
    void input(){
        cout << "Enter patient name : ";
        cin.getline(name, 30);

        cout << "Enter patient age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter your problem : ";
        cin.getline(services, 100);
    }

    void printPatientDetails(){
        cout << "--------------------" << endl;
        cout << "Patient's Details : " << endl;
        cout << "--------------------" << endl;
        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Problem\t: " << services << endl;
        
    }
};

int main()
{
    cout << endl;

    // patient p2;

    // You can't do this
    // p2.age = 12;
    // strcpy(p2.name, "Hello World");
    // strcpy(p2.services, "Hello world tech programming language devops machine learning");

    // p2.printPatientDetails(); // ---> it is correct

    patient p1;
    p1.input();
    p1.printPatientDetails();

    cout << endl;
    return 0;
}
```

## Class and Object
<img src="./Images/class and object.png" style="width: 100vw; "/>

### **Sample program** 
```c++
#include<iostream>
#include<string.h>
using namespace std;

class Student{

private:
    char name[50];
    int age;
    float marks;

public:
    void printDetails(); // Declaration
    void takeInput();
};


// Definition of two function which is declared inside the class
void Student::printDetails(){
    cout << "Name\t: " << name << endl;
    cout << "Age\t: " << age << endl;
    cout << "Marks\t: " << marks << endl << endl;
}

void Student::takeInput(){
    cout << "Enter your name\t: ";
    cin.getline(name, 50);

    cout << "Enter your age\t: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << endl << endl ;

    cin.ignore(); // absorb the nextline character
}

int main()
{
    cout << endl;

    Student s[4];

    for(int i=0; i<4; i++)
    {
        s[i].takeInput();
    }

    for(int i=0; i<4; i++)
    {
        s[i].printDetails();
    }

    cout << endl;
    return 0;
}
```
## Static Member Variable

In C++, a **static member variable** is a class-level variable shared across all instances of the class. Here’s a breakdown of its key properties and usage:

1. **Single Copy Across All Instances**: A static member variable is shared by all objects of the class, meaning only one copy exists, regardless of how many instances of the class are created.

2. **Class-Level Storage**: Static members are stored at the class level, not within individual objects. They are stored in a different memory area than instance variables.

3. **Declaration and Initialization**:
   - You declare a static member variable inside the class, but you must define it outside the class to allocate memory.
   - Static variables are initialized once and can be re-initialized only outside the class, typically in a `.cpp` file.

   ```cpp
   class MyClass {
   public:
       static int count;  // Declaration of a static variable
   };

   // Definition and initialization outside the class
   int MyClass::count = 0;
   ```

4. **Access**: Since static members are shared among all instances, you can access them directly using the class name without creating an object:
   ```cpp
   MyClass::count++;
   ```
   Alternatively, they can be accessed via an instance, though this is not common.

5. **Lifetime**: Static variables persist for the entire program's lifetime, like global variables, but their scope is restricted to the class.

6. **Common Use Cases**:
   - **Counting instances**: To keep track of how many instances of a class are created.
   - **Constants**: To store class-specific constants or configuration data that shouldn't change per object.

### Example: Counting Instances of a Class

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass() { count++; }   // Constructor increments count
    ~MyClass() { count--; }  // Destructor decrements count

    static void displayCount() {
        cout << "Current count: " << count << endl;
    }
};

int MyClass::count = 0;  // Definition and initialization of static variable

int main() {
    MyClass::displayCount();  // Output: Current count: 0

    MyClass obj1, obj2;
    MyClass::displayCount();  // Output: Current count: 2

    {
        MyClass obj3;
        MyClass::displayCount();  // Output: Current count: 3
    }

    MyClass::displayCount();  // Output: Current count: 2

    return 0;
}
```

In this example:
- The `count` variable is static, so it is shared among all instances of `MyClass`.
- The constructor and destructor increment and decrement the `count`, tracking the number of active objects in memory.