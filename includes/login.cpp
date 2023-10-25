#include <iostream>
#include <windows.h>
#define cls system("cls")
using namespace std;

class login
{
	private:
		string prompt1[3]={"Login", "Register", "Exit"};
		char v[1];
		
	public:
		
		int a = 1;
		string username[4] = {"admin"};
		string password[4] = {"admin"};
		string usr;
		string pwd;
		bool pass=false;
		string name;
		int skip = 0;
	
				void Login()
				{	
					cls; cout<<"username: "; cin>> usr;
					cout<<"Password: "; cin>>pwd;
					
					for(int i=0; i<=a; ++i)
					{
							if(usr == username[i] && pwd == password[i])
						{
							pass = true; username[i]=name; break;
						}
					}
				}
				
				void Reg()
				{ 
				
					if(a<3)
					{
						a+=1;
						cout<<"\n\tusername: "; cin >> username[a];
						cout<<"\n\tpassword: "; cin >> password[a];
						name = username[a];	
					}else
					{
						cls; cout<<"Limit reached!"; getchar(); getchar(); exit(1);
					}
				}
				
				void load()
					{
						system("color A"); cls; printf("\e[?251]");
						SetConsoleCP(437); SetConsoleOutputCP(437); int b=177, bb=219;
				
						cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLoading";
						//cout<<"\n";
				
						cout<<(char)b; cout<<"\r \t\t\t\t\t\t";
				
							for (int i = 0; i < 25; i++)
							{
								cout<<(char)bb;
								Sleep(10);
							}
							
							system("color B"); Sleep(150); system("color"); /*system("Pause");*/
							
					}
				void load2()
					{
						system("color 0e"); cls; printf("\e[?251]");
						SetConsoleCP(437); SetConsoleOutputCP(437); int b=177, bb=219;
				
						cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t    LMS ni Lynbert";
						//cout<<"\n";
				
						cout<<(char)b; cout<<"\r \t\t\t\t\t\t"; Sleep(500);
				
							for (int i = 0; i < 25; i++)
							{
								cout<<(char)bb;
								Sleep(150);
							}
							
							system("color A");
							
							Sleep(1000); system("color"); /*system("Pause");*/
							
					}
						
		void Start()
		{	 	load2(); start: cls;
				for(int i=0; i<1; i++) 
				{
						
					for (int j = 97; j < 100; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << prompt1[b] << endl;
			        } 
				}cout<<"\n\t> "; cin>>v[0]; cls;
			
				switch(v[0])
				{
					case 'a':case 'A': Login(); break;
					case 'b':case 'B': Reg(); cls; goto start;
					case 'c':case 'C': skip=1; return;
					default: goto start;
				}
				
				if(pass==true)
				{
					load(); return;
				}
				else
				{ int b;
					if(b>3)
					{
						cls; cout<<"Limit reached!"; exit(1);
					}else
					{b+=1;
						cls; cout<<"\033[31m Login Failed! \033[0m"; getchar(); getchar(); cls; goto start; 
					}
				}
				
				
		}
		
	//to run start();	
}; login login;
            