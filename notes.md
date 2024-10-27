{
 "cells": [
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "# **Notes**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "- C++ is a Object Oriented Programming Language\n",
    "- C++ is a superset of c language\n",
    "\n",
    "\n",
    "**Software**\n",
    "- Console based application\n",
    "- GUI application\n",
    "- Web application\n",
    "- System application : OS\n",
    "- Mobile application\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### Here we will learn about **Console based application and Object Oriented Concept**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "There are two approaches to make a software -\n",
    "\n",
    "1. Procedure Oriented\n",
    "2. Object Oriented"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "Example : \n",
    "1. C is a procedure oriented programming language.\n",
    "2. C++ is object oriented programming language\n",
    "\n",
    "Although C++ is procedure and object oriented programming language because C++ is superset of C language"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "When a class is created then these two things will defined\n",
    "1. Variable/Properties\n",
    "2. Method\n",
    "\n",
    "In some other class one extra things are there that is\n",
    "1. Opertor "
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "**Examples**\n",
    "- object.variable\n",
    "- object.function()"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "- Class contains description of an object\n",
    "- Class contains properties/variable or methods/function"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "As a class contains properties\n",
    "- properties will same for all object\n",
    "- properties value may or may not same\n",
    "\n",
    "Example : \n",
    "In a class there is properties called age , so for a object like Ram age 16 but Shyam age 65"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "    Whenever an action(method/function) is performed then the state of that object may or may not be changed."
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "```c++\n",
    "#include<iostream>\n",
    "using namespace std;\n",
    "int main() {\n",
    "    cout << \"Hello World\" << endl;\n",
    "}\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "<h1 style=\"font-size: 50px; font-weight: bold; font-family: JetBrains Mono NL; color: aqua; \">function()</h1>"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### **inline keyword**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "\n",
    "```c++\n",
    "inline\n",
    "```\n",
    "- inline is keyword used for optimization purpose\n",
    "- inline is a request to compiler\n",
    "\n",
    "inline keyword request the compiler if possible then expand the code only.\n",
    "Actually in function there are some advantage and disadvantages like\n",
    "\n",
    "- **Advantages**\n",
    "    - reusability of code\n",
    "    - easily maintainance\n",
    "    - readablity\n",
    "\n",
    "- **Disadvantages**\n",
    "    - Memory waste for small code like sum of two number\n",
    "    - Increases execution time\n",
    "\n",
    "So, to utilize function advantages and avoid disadvantages we are used inline keyword.\n",
    "\n",
    "if the code is small the inline keyword expand the code of function to the object file. and if the code is large it will not expand the code in object file.\n",
    "\n",
    "if there is any loop, recursion, switch in function then compiler will expand the code in object file if the code is small."
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "**Example**\n",
    "\n",
    "use inline keyword in declaration"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "```c++\n",
    "#include<iostream>\n",
    "using namespace std;\n",
    "inline int calculateCube(int); // inline keyword\n",
    "int main()\n",
    "{\n",
    "    cout << endl << endl;\n",
    "\n",
    "    int number, result;\n",
    "    cout << \"Enter a number: \";\n",
    "    cin >> number;\n",
    "\n",
    "    result = calculateCube(number);\n",
    "    cout << \"value: \" << result;\n",
    "\n",
    "    cout << endl << endl;\n",
    "    return 0;\n",
    "}\n",
    "\n",
    "int calculateCube(int num){\n",
    "    return num*num*num;\n",
    "}\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### **default argument**\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "in the following example of c++ code I used default argument.\n",
    "if user not provide the values then also this code will run for three argument without any error\n",
    "\n",
    "*Rules :*\n",
    "- Default argument are right aligned\n",
    "    - Example :\n",
    "        - valid:\n",
    "            1. int add(int=0, int=0, int=0)\n",
    "            2. int add(int, int=0, int=0)\n",
    "            3. int add(int, int, int=0)\n",
    "        - invalid:\n",
    "            1. int add(int=0, int, int)\n",
    "            2. int add(int=0, int=0, int)\n",
    "            3. int add(int, int=0, int)\n",
    "    \n",
    "    You will face an error if you used invalid declaration\n",
    "        \n",
    "- You can give the default values only once either declaration time or definition time\n",
    "\n",
    "```c++\n",
    "    // Error one example\n",
    "    #include<iostream>\n",
    "    -----\n",
    "    int add(int, int=0, int=0); \n",
    "    int main()\n",
    "    {\n",
    "        -----\n",
    "        -----\n",
    "        -----\n",
    "    }\n",
    "\n",
    "    int add(int a, int b=0, int c=0){ // again default value provides\n",
    "        ----\n",
    "        ----\n",
    "        ----\n",
    "    }\n",
    "\n",
    "\n",
    "\n",
    "    // Error two example\n",
    "    /*\n",
    "        Although you are set default values only once.\n",
    "        if you provides less than 3 argument in program the you will face error because the forward declaration of add is with 3 arguments (too few arguments)\n",
    "\n",
    "        to avoid this error write the definition of the function before main function\n",
    "    */\n",
    "    #include<iostream>\n",
    "    -----\n",
    "    int add(int, int, int); \n",
    "    int main()\n",
    "    {\n",
    "        -----\n",
    "        -----\n",
    "        -----\n",
    "    }\n",
    "\n",
    "    int add(int a, int b=0, int c=0){ // agian default value provides\n",
    "        ----\n",
    "        ----\n",
    "        ----\n",
    "    }\n",
    "```\n",
    "\n",
    "Example :\n",
    "```c++\n",
    "#include<iostream>\n",
    "using namespace std;\n",
    "int Add(int=0, int=0, int=0); // default values set to zero\n",
    "\n",
    "int main()\n",
    "{\n",
    "    cout << endl;\n",
    "\n",
    "    int x = 45;\n",
    "    int y = 20;\n",
    "    int z = 10;\n",
    "\n",
    "    // uses of the function Add()\n",
    "    cout << \"the sum : \" << Add() << endl;\n",
    "    cout << \"the sum of \" << x << \" is : \" << Add(x) << endl; \n",
    "    cout << \"the sum of \" << x << \" + \" << y << \" is : \" << Add(x+y) << endl;\n",
    "    cout << \"the sum of \" << x << \" + \" << y << \" + \" << z << \" is : \" << Add(x+y+z) << endl;\n",
    "    cout << endl;\n",
    "    return 0;\n",
    "}\n",
    "\n",
    "int Add(int firstNum, int secondNum, int thirtNum)\n",
    "{\n",
    "    return firstNum+secondNum+thirtNum;\n",
    "}\n",
    "```\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### **reference variable**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "There are some type of variable in c\n",
    "- normal variable\n",
    "    - int a = 10;\n",
    "- pointer variable\n",
    "    - int *b = &a;\n",
    "\n",
    "But in C++ there are one extra type of variable \n",
    "- reference variable\n",
    "    - int &c = a;\n",
    "\n",
    "\n",
    "Description of **reference variable**\n",
    "- reference variable is a alise of that variable which you want to assign. \n",
    "- it is a nickname of original variable.\n",
    "- there is no physical address of reference variable.\n",
    "- in above example address of c is as same as address of a.\n",
    "- After assign &c = a , you can't assign any other varible to it like &c = z, it is not possible.\n",
    "- If you change anything in c it will reflect in a also vice versa.\n",
    "- You can create so many reference variable of a variable.\n",
    "- You can't assign null to a reference variable. (int &x = null --> error)\n",
    "- You can't only declare reference variable , you must have to initialize it with a variable otherwise you will face error. \n",
    "    - example\n",
    "        - int &y; --> error\n",
    "        - int &y = a; --> ok\n",
    "\n",
    "\n",
    "\n",
    "Difference between a pointer variable and reference variable :\n",
    "- you can reassign pointer variable to any other address but you can't reassign reference variable.\n",
    "- you can declare pointer variable, and you can assign null to it but in reference variable you can't do it.\n",
    "- in pointer variable memory will allocate but in reference variable memory will not allocate further. \n",
    "- you can access related address by increment or decrement in pointer variable but in reference variable it is not possible.\n",
    "- pointer variable is little bit hard but reference variable is easy."
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "**Example of Program**\n",
    "\n",
    "```c++\n",
    "#include<iostream>\n",
    "using namespace std;\n",
    "int main()\n",
    "{\n",
    "    cout << endl;\n",
    "\n",
    "    int a = 10;\n",
    "    int *b = &a;\n",
    "    int &c = a;\n",
    "\n",
    "    c = c+20;\n",
    "    cout << a << endl;\n",
    "    a = a+1;\n",
    "    cout << c << endl;\n",
    "\n",
    "    if(&c == &a) cout << \"Denotes same memory location.\" << endl;\n",
    "    cout << \"Prove : \" << endl << \n",
    "                \"\\taddress of a : \" << &a << endl << \n",
    "                \"\\taddress of c : \" << &c << endl << endl;\n",
    "    return 0;\n",
    "}\n",
    "```\n",
    "**Output of program**\n",
    "```c++\n",
    "30\n",
    "31\n",
    "Denotes same memory location.\n",
    "Prove :\n",
    "        address of a : 0xb44bdffa5c\n",
    "        address of c : 0xb44bdffa5c\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "<p style=\"font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;\">Call by value</p>\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "```c++\n",
    "    #include<iostream>\n",
    "    using namespace std;\n",
    "\n",
    "    void f(int, int); // call by value\n",
    "\n",
    "    int main()\n",
    "    {\n",
    "        cout << endl;\n",
    "\n",
    "        // call by value\n",
    "        f(10, 15);\n",
    "\n",
    "        cout << endl;\n",
    "        return 0;\n",
    "    }\n",
    "\n",
    "    void f(int a, int b){\n",
    "        cout << a << \" + \" << b << \" = \" << a+b << endl; \n",
    "    }\n",
    "```\n",
    "<hr/>\n",
    "\n",
    "**output**\n",
    "```c++\n",
    "10 + 15 = 25\n",
    "```\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "\n",
    "<p style=\"font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;\">Call by address</p>\n",
    "\n"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "```c++\n",
    "    #include<iostream>\n",
    "    using namespace std;\n",
    "    void fun(int *, int *); // call by address\n",
    "\n",
    "    int main()\n",
    "    {\n",
    "        cout << endl;\n",
    "\n",
    "        // call by address\n",
    "        int a = 10, b = 20;\n",
    "        fun(&a, &b);\n",
    "\n",
    "        cout << endl;\n",
    "        return 0;\n",
    "    }\n",
    "\n",
    "\n",
    "    void fun(int *num1, int *num2){\n",
    "        cout << *num1 << \" + \" << *num2 << \" = \" << *num1 + *num2 << endl;\n",
    "    }\n",
    "\n",
    "```\n",
    "<hr/>\n",
    "\n",
    "**output**\n",
    "```c++\n",
    "10 + 20 = 30\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "<p style=\"font-size: 40px; color: rgb(0, 175, 58); font-weight: bold;\">Call by reference</p>"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "```c++\n",
    "    #include<iostream>\n",
    "    using namespace std;\n",
    "\n",
    "    void function(int &, int &); // call by reference\n",
    "\n",
    "    int main()\n",
    "    {\n",
    "        cout << endl;\n",
    "\n",
    "        // call by reference\n",
    "        int m = 50, n = 40;\n",
    "        function(m, n);\n",
    "\n",
    "        cout << \"value of m: \" << m << \", \" << \"value of n: \" << n << endl;\n",
    "        cout << endl;\n",
    "        return 0;\n",
    "    }\n",
    "\n",
    "    void function(int &num1, int &num2){\n",
    "        cout << num1 << \" + \" << num2 << \" = \" << num1 + num2 << endl;\n",
    "        num1 = 23;\n",
    "        num2 = 32;\n",
    "    }\n",
    "```\n",
    "<hr/>\n",
    "\n",
    "**output**\n",
    "```c++\n",
    "50 + 40 = 90\n",
    "value of m: 23, value of n: 32\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "question: tell me here what is x in cin (call by value/call by address/call by reference)\n",
    "```c++\n",
    "    int x;\n",
    "    cin >> x;\n",
    "```\n",
    "\n",
    "answer: call by reference\n",
    "as we can assign/change the value of x.\n",
    "\n",
    "    call by value -> in call by value we can't change or update the value.\n",
    "    call by reference -> if it is call by reference then it looks like : cin >> &x."
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### **function overloading**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "- multiple function with same name\n",
    "\n",
    "```c++\n",
    "\n",
    "return_type function_name(arguments)\n",
    "            <---------------------->\n",
    "              signature of function\n",
    "\n",
    "\n",
    "for function overloading signature of function must be unique.\n",
    "\n",
    "```\n",
    "**Description of function overloading**\n",
    "- number of argument must be different or type of argument must be different\n",
    "- function selection (overload resolution) is perfomed by compiler -> also know as binding\n",
    "- function selection is based on number of argument or types of argument\n",
    "- same signature but different return type is not a function overloading.\n",
    "    - int fun(int a)\n",
    "    - void fun(int x)\n",
    "- binding is decided in compile time\n",
    "    - binding is which function will execute in function overloading\n",
    "\n",
    "\n",
    "**Example of function/method overloading**\n",
    "\n",
    "```c++\n",
    "    #include<iostream>\n",
    "    using namespace std;\n",
    "\n",
    "    // method overloading\n",
    "    int max(int, int, int, int);\n",
    "    int max(int, int, int);\n",
    "    int max(int, int);\n",
    "\n",
    "    int main()\n",
    "    {\n",
    "        cout << endl;\n",
    "\n",
    "        cout << \"Max of (1, 7, 8, 11) : \" << max(1,7,8,11) << endl;\n",
    "        cout << \"Max of (1, 8, 6) : \" << max(1,8,6) << endl;\n",
    "        cout << \"Max of (8, 6) : \" << max(8,6) << endl;\n",
    "\n",
    "        cout << endl;\n",
    "        return 0;\n",
    "    }\n",
    "\n",
    "    int max(int a, int b, int c , int d)\n",
    "    {\n",
    "        if(a > b){\n",
    "            if(a > c){\n",
    "                if(a > d) return a;\n",
    "                return d;\n",
    "            }\n",
    "            else{\n",
    "                if(c > d) return c;\n",
    "                return d;\n",
    "            }\n",
    "        }\n",
    "        else{\n",
    "            if(b > c){\n",
    "                if(b > d) return b;\n",
    "                return d;\n",
    "            }\n",
    "            else{\n",
    "                if(c > d) return c;\n",
    "                return d;\n",
    "            }\n",
    "        }\n",
    "    }\n",
    "\n",
    "    int max(int a, int b , int c)\n",
    "    {\n",
    "        return a > b ? a > c ? a : c : b > c ? b :c;\n",
    "    }\n",
    "\n",
    "    int max(int a, int b)\n",
    "    {\n",
    "        return a > b ? a : b;\n",
    "    }\n",
    "\n",
    "```"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "<img src=\"binding1.png\" style=\"width: 80vw; margin-left: 10vw; filter: saturate(0);\"/>"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "**Summary of binding process**\n",
    "\n",
    "- Identify candidate functions by name.\n",
    "- Filter to viable functions that match the argument list.\n",
    "- Select the best match based on exact matches and conversions.\n",
    "  - Exact matches (no conversion needed).\n",
    "  - type Promotions (e.g., int to double).\n",
    "  - Standard conversions (e.g., float to double).\n",
    "  - User-defined conversions (like conversion operators or constructor calls, which are less preferred).\n",
    "- Check for ambiguity; if ambiguous, report a compile-time error.\n",
    "```c++\n",
    "        int f(double);\n",
    "        void f(double, double=2.5); \n",
    "        //here compile will throw an error\n",
    "\n",
    "        int main()\n",
    "        {\n",
    "                f(3.6);\n",
    "        }\n",
    "```\n",
    "- Bind the function if a single, best match is found"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "<img src=\"binding.png\" style=\"width: 100vw; \"/>"
   ]
  }
 ],
 "metadata": {
  "language_info": {
   "name": "python"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}

