#include <iostream>

#include "GE5/w1.cpp"
#include "GE5/w2.cpp"
#include "GE5/w3.cpp"
#include "GE5/w4.cpp"
#include "GE5/w5.cpp"

#include "GE6/w1.cpp"
#include "GE6/w2.cpp"
#include "GE6/w3.cpp"
#include "GE6/w4.cpp"
#include "GE6/w5.cpp"

#include "GE7/w1.cpp"
#include "GE7/w2.cpp"
#include "GE7/w3.cpp"
#include "GE7/w4.cpp"
#include "GE7/w5.cpp"

#include "GE8/w1.cpp"
#include "GE8/w2.cpp"
#include "GE8/w3.cpp"
#include "GE8/w4.cpp"
#include "GE8/w5.cpp"

#include "MS101/w1.cpp"
#include "MS101/w2.cpp"
#include "MS101/w3.cpp"
#include "MS101/w4.cpp"
#include "MS101/w5.cpp"

#include "CP/w1.cpp"
#include "CP/w2.cpp"
#include "CP/w3.cpp"
#include "CP/w4.cpp"
#include "CP/w5.cpp"

#include "FILDIS/w1.cpp"
#include "FILDIS/w2.cpp"
#include "FILDIS/w3.cpp"
#include "FILDIS/w4.cpp"
#include "FILDIS/w5.cpp"

#include "NSTP/w1.cpp"
#include "NSTP/w2.cpp"
#include "NSTP/w3.cpp"
#include "NSTP/w4.cpp"
#include "NSTP/w5.cpp"

#include "PE/w1.cpp"
#include "PE/w2.cpp"
#include "PE/w3.cpp"
#include "PE/w4.cpp"
#include "PE/w5.cpp"

#define cls system("cls")

using namespace std;

class Lessons
	{
		private:
			string W[5]={"W1", "W2", "W3", "W4", "W5"};
		public:
		
        	void lessonsGE5()
        	{ start: cls; cout<<"\033[33m" << "path/lms/GE5/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': GE5w1(); break;
						case 'b':case 'B': GE5w2(); break;
						case 'c':case 'C': GE5w3(); break;
						case 'd':case 'D': GE5w4(); break;
						case 'e':case 'E': GE5w5(); break;
						default: goto start;
					}
			}
			void lessonsGE6() // ----------------    -----------------------	------------	-----------> <GE56> <----------
        	{ start: cls; cout<<"\033[33m" << "path/lms/GE6/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': GE6w1(); break;
						case 'b':case 'B': GE6w2(); break;
						case 'c':case 'C': GE6w3(); break;
						case 'd':case 'D': GE6w4(); break;
						case 'e':case 'E': GE6w5(); break;
						default: goto start;
					}
			}
			void lessonsGE7()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE7/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': GE7w1(); break;
						case 'b':case 'B': GE7w2(); break;
						case 'c':case 'C': GE7w3(); break;
						case 'd':case 'D': GE7w4(); break;
						case 'e':case 'E': GE7w5(); break;
						default: goto start;
					}
			}
			void lessonsGE8()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': GE8w1(); break;
						case 'b':case 'B': GE8w2(); break;
						case 'c':case 'C': GE8w3(); break;
						case 'd':case 'D': GE8w4(); break;
						case 'e':case 'E': GE8w5(); break;
						default: goto start;
					}
			}
			void lessonsMS101()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': MS101w1(); break;
						case 'b':case 'B': MS101w2(); break;
						case 'c':case 'C': MS101w3(); break;
						case 'd':case 'D': MS101w4(); break;
						case 'e':case 'E': MS101w5(); break;
						default: goto start;
					}
			}
			void lessonsCCS103()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': CPw1(); break;
						case 'b':case 'B': CPw2(); break;
						case 'c':case 'C': CPw3(); break;
						case 'd':case 'D': CPw4(); break;
						case 'e':case 'E': CPw5(); break;
						default: goto start;
					}
			}
			void lessonsFILDIS()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': Fw1(); break;
						case 'b':case 'B': Fw2(); break;
						case 'c':case 'C': Fw3(); break;
						case 'd':case 'D': Fw4(); break;
						case 'e':case 'E': Fw5(); break;
						default: goto start;
					}
			}
			void lessonsNSTP2()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': NSTPw1(); break;
						case 'b':case 'B': NSTPw2(); break;
						case 'c':case 'C': NSTPw3(); break;
						case 'd':case 'D': NSTPw4(); break;
						case 'e':case 'E': NSTPw5(); break;
						default: goto start;
					}
			}
			void lessonsPE2()
        	{
        		start: cls; cout<<"\033[33m" << "path/lms/GE8/lessons" <<"\033[0m" << "\n" <<endl;
				char c1;
	        		for (int j = 97; j < 102; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << W[b] << endl;
			        } cout<<"\n\t> "; cin>>c1; cls; 
			        
			        switch(c1)
			        {
			        	case 'a':case 'A': PEw1(); break;
						case 'b':case 'B': PEw2(); break;
						case 'c':case 'C': PEw3(); break;
						case 'd':case 'D': PEw4(); break;
						case 'e':case 'E': PEw5(); break;
						default: goto start;
					}
			}          
	}; Lessons L;