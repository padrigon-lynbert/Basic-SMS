#include <iostream>
#include <windows.h>
#define  cls system("cls")

#include "includes/project.cpp"
#include "includes/login.cpp"
#include "includes/funeral.cpp"
//#include "includes/Lessons.cpp"

using namespace std;

int main()
{
	login.Start();
	if(login.skip==0){goto c;}else {goto s;}
	
	c: cls; project::run(); 
	
	
	s: SetConsoleOutputCP(CP_UTF8); cls; end::funeral();// ; return 0; \U0001F340-leafClover \U0001F339-rose
}
	
	