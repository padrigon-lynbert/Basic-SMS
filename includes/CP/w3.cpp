#include <iostream>
using namespace std;
void CPw3()
{system("cls"); cout<<"\033[33m" << "path/lms/CCS103/lessons/W3" <<"\033[0m" << "\n" <<endl;

cout<<"Variable Scope in C++"
"\n\nA scope is a region of the program and broadly speaking there are three places, where variables can be declared -"

"\n\nInside a function or a block which is called local variables,"

"\n\nIn the definition of function parameters which is called formal parameters."

"\n\nOutside of all functions which is called global variables."


"\n\n\nLocal Variables"
"\nVariables that are declared inside a function or block are local variables. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own."


"\n\n\nGlobal Variables"
"\nGlobal variables are defined outside of all the functions, usually on top of the program. The global variables will hold their value throughout the life-time of your program."

"\n\nA global variable can be accessed by any function. That is, a global variable is available for use throughout your entire program after its declaration."


"\n\n\nMultiple Variables"

"\n\nC++ Variables, Literals and Constants"

"\n\nIn this tutorial, we will learn about variables, literals, and constants in C++ with the help of examples."

"\n\nC++ Variables"

"\n\nIn programming, a variable is a container (storage area) to hold data."

"\n\nTo indicate the storage area, each variable should be given a unique name (identifier)."


"\n\n\nRules for naming a variable"

"\n\nA variable name can only have alphabets, numbers and the underscore _."
"\nA variable name cannot begin with a number."
"\nVariable names cannot begin with an uppercase character."
"\nA variable name cannot be a keyword. For example, int is a keyword that is used to denote integers."
"\nA variable name can start with an underscore. However, it's not considered a good practice."

"\n\nNote: We should try to give meaningful names to variables. For example, first_name is a better variable name than fn."


"\n\n\nC++ Literals"

"\n\nLiterals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc."

"\n\nHere, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms."

"\n\nere's a list of different literals in C++ programming."

"\n\nIntegers, floating-point literals, characters, escape sequences, string literals"


"\n\n\nC++ Constants"

"\n\nIn C++, we can create variables whose value cannot be changed. For that, we use the const keyword. Here's an example:"

"\n\nconst int LIGHT_SPEED = 299792458;"

"\n\nLIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant."

"\n\nHere, we have used the keyword const to declare a constant named LIGHT_SPEED. If we try to change the value of LIGHT_SPEED, we will get an error."

"\n\nA constant can also be created using the #define preprocessor directive\n\n"<<endl;

	getchar(); getchar();
}