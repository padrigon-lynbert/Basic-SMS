#include <iostream>
#include <iomanip>
#include "Lessons.cpp"

#define cls system("cls")

//calls <global> all 
using namespace std;
string subjects[11] = {"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"}, concept1[3] = {"Lessons", "Quiz", "Return"};
char subchoice; int pathout, quizTake[9], quizScore[9], totalScore;

namespace project
{
    void run(), GE5(), GE6(), GE7(), GE8(), MS101(), CCS103(), FILDIS(), NSTP2(), PE2();
}

//---------------------------------------------------------------------------------> lessons and quizzes 

namespace lessonsAndQuiz
{

	//lessons>
	
	void lesson()
	{
		switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
		{
            case 'a':case 'A': L.lessonsGE5(); break;
			case 'b':case 'B': L.lessonsGE6(); break;
			case 'c':case 'C': L.lessonsGE7(); break;
			case 'd':case 'D': L.lessonsGE8(); break;
			case 'e':case 'E': L.lessonsMS101(); break;
			case 'f':case 'F': L.lessonsCCS103(); break;
			case 'g':case 'G': L.lessonsFILDIS(); break;
			case 'h':case 'H': L.lessonsNSTP2(); break;
			case 'i':case 'I': L.lessonsPE2(); break;
        }
	}
	/*****************************************************************************<lessons-quiz-boundary>*******************************************************************************/
	class Quiz
	{
		private: 
		
		char arr[15], ARR[15];
		
		public:
		//call <global> namespace lessonsAndQuiz
		//void quizGE5(); quizGE6(), quizGE7(), quizGE8(), quizMS101(), quizCCS103(), quizFILDIS(), quizNSTP2(), quizPE2();
		//void Grades();
		
		void alg()
		{
			for(int a=0; a<=15; ++a)
			{
				switch((40+a)%4)
				{
					case 0: arr[a-1]='d'; ARR[a-1]='D'; break;
					case 1: arr[a-1]='a'; ARR[a-1]='A'; break;
					case 2: arr[a-1]='b'; ARR[a-1]='B'; break;
					case 3: arr[a-1]='c'; ARR[a-1]='C'; break;
				}
			}
		}
		
		void quiz()
		{cls;
            switch(subchoice)
					{	
						case 'a':case 'A': 
						{
							if(quizTake[0]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz GE5\n\nScore: "<<quizScore[0]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'b':case 'B': 
						{
							if(quizTake[1]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz GE6\n\nScore: "<<quizScore[1]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'c':case 'C': 
						{
							if(quizTake[2]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz GE7\n\nScore: "<<quizScore[2]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'd':case 'D': 
						{
							if(quizTake[3]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz GE8\n\nScore: "<<quizScore[3]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'e':case 'E': 
						{
							if(quizTake[4]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz	MS101\n\nScore: "<<quizScore[4]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'f':case 'F': 
						{
							if(quizTake[5]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz CCS103\n\nScore: "<<quizScore[5]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'g':case 'G': 
						{
							if(quizTake[6]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz FILDIS\n\nScore: "<<quizScore[6]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'h':case 'H': 
						{
							if(quizTake[7]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz NSTP2\n\nScore: "<<quizScore[7]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
						case 'i':case 'I': 
						{
							if(quizTake[8]==0)
							{
								break;
							}else
							{
								cls; cout<<"Quiz PE2\n\nScore: "<<quizScore[8]<<"/15"<<endl; getchar(); getchar(); goto j1;
							}
						}
					}
			
			char choice; cout<<"Do you want to continue the the Quiz? " << "\033[33m" <<" [y/n]?" << " \033[0m " << "\n\n\t> "; cin>> choice; 
			
				if(choice=='y'||choice=='Y')
				{
					switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
					{
		                case 'a':case 'A': quizGE5(); break;
						case 'b':case 'B': quizGE6(); break;
						case 'c':case 'C': quizGE7(); break;
						case 'd':case 'D': quizGE8(); break;
						case 'e':case 'E': quizMS101(); break;
						case 'f':case 'F': quizCCS103(); break;
						case 'g':case 'G': quizFILDIS(); break;
						case 'h':case 'H': quizNSTP2(); break;
						case 'i':case 'I': quizPE2(); break;
		            }
		            
				}else if(choice=='n'||choice=='N')
				{
					goto j1;
				}else
				{
					goto j1;
				}
				
				goto j1;
			
			home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        }
			
				 cout << "\n\n\t> "; cin >> subchoice; j1:
	
		        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
					{
		                case 'a':case 'A': cls; cout <<"\033[33m" << "path: LMS/GE5/" <<"\033[0m" <<"\n\n"; break;
						case 'b':case 'B': cls; cout <<"\033[33m" << "path: LMS/GE6/" <<"\033[0m" <<"\n\n"; break;
						case 'c':case 'C': cls; cout <<"\033[33m" << "path: LMS/GE7/" <<"\033[0m" <<"\n\n"; break;
						case 'd':case 'D': cls; cout <<"\033[33m" << "path: LMS/GE8/" <<"\033[0m" <<"\n\n"; break;
						case 'e':case 'E': cls; cout <<"\033[33m" << "path: LMS/MS101/" <<"\033[0m" <<"\n\n"; break;
						case 'f':case 'F': cls; cout <<"\033[33m" << "path: LMS/CCS103/" <<"\033[0m" <<"\n\n"; break;
						case 'g':case 'G': cls; cout <<"\033[33m" << "path: LMS/FILDIS/" <<"\033[0m" <<"\n\n"; break;
						case 'h':case 'H': cls; cout <<"\033[33m" << "path: LMS/NSTP2/" <<"\033[0m" <<"\n\n"; break;
						case 'i':case 'I': cls; cout <<"\033[33m" << "path: LMS/PE2" <<"\033[0m" <<"\n\n"; break; //project::PE2(); break;
						case 'j':case 'J': cls; Grades(); goto home;
						case 'k':case 'K': exit(0);
						default: goto home;
		            } 
		               
					j2: 
	            		char c1, c2; 
            	
			            	for (int i = 97; i < 100; ++i)
					        {
					            char a = i;
					            int b = i - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
					        }
							
			            	cout<<"\n\n\t> "; cin>>c1; 
	            		
			            		switch(c1)
								{
									case'a':case'A': lesson(); break;
									case'b':case'B': quiz(); break;
									case'c':case'C': goto home;
									default: goto j1;
								} goto j1; //end
		} //----------------------------------------------------------------------------------------------------------------> <end> quiz()
		
		void quizGE5() 
		{
			cls; alg(); char test[15];
			
			string questions [15] 
			= {
				" These are new languages that are developed when there are individuals who speak different languages need to communicate but they do not share a common language.", //1
				" These are languages developed from a pidgin that become the mother tongue of a community.",
				" These are languages that are spoken in a particular area of a country.",
				" A variety used as a marker of identity that is generally with a standard variety by the members of a particular minority ethnic group.",
				" This is mainly used as a second language in former colonies with multilingual populations.", //5
				" A private speech style; that is, it only occurs between or among close family members or individuals because the language use may not be shared in public.",
				" A speech style that is used among peers and friends; the language used is generally jargon, slang, or vernacular.",
				" A speech style that is standard because this is the one used by professionals in the field",
				" Used in formal settings, but in contrast to consultative, this speech style is one-way; no slang words are allowed.",
				" A speech style that remains unchanged. Ex. The preamble to the Constitution or the Lord?s prayer.", //10
				" The person who sends ideas to another person.",
				" The idea, feeling, suggestion, guidelines, orders, or content intended to be communicated.",
				" The person who acquires and responds to the message given.",
				" The response of the receiver. The response indicates the completion of the communication process.",
				" It is the process of turning thoughts into communication. Moreover, it is the change of conscious thought generally into words, symbols, diagrams, and actions."
			};
			
				string cluster1[4] //1-2
				={
					"Pidgin", "Creole", "Universal Language", "Programming Language and Translators"
				};
				
				string cluster2[4] //3-5
				={
					"Indegenized Variety", "Minority Dialect", "Regional Dialect", "Universal Language."
				};
				
				string cluster3[4] //6-9
				={
					"Formal", "Intimate", "Casual", "Intimate"
				};
				
				string cluster4[4] //10
				={
					"Shrek", "Frozen", "Cinderella", "Snow White"
				};
				
				string cluster5[4] //11-14
				={
					"Receiver", "Feedback", "Sender", "Message"
				};
				
				string cluster6[4] //15
				={
					"Decoding", "Debuging", "Encoding", "Compiling"
				};
				
					for(int i=0; i<2; i++) //1-2
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
					        } 
							
								cout<<"\n\t> "; cin>>test[i]; cls; 
								
					}
					for(int i=2; i<5; i++) //3-5
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=5; i<9; i++) //6-9
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=9; i<10; i++) //10
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=10; i<14; i++) //11-14
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=14; i<15; i++) //15
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
			
						for(int i=0; i<15; ++i)
								{
									if(test[i]==arr[i]||test[i]==ARR[i])
									{
										totalScore+=1; quizScore[0]+=1;
									}
								}
									quizTake[0]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[0]<<"/15"<<endl; getchar(); getchar(); cls; 
					
		} //-------------------------------------------------------------------------------------------------------------> <end> quizGE5()
		void quizGE6()
		{
			cls; alg(); char test[15];
			
			
			string questions[15] 
			= {
				" It represents objects or events in the real world, usually looking easily recognizable.",
				" Instead of directly portraying something recognizable something random to express emotion, feeling, or abstract concepts.",
				" The natural environment has always been the source and popular subjects used by the artist.",
				" Either the graceful movements or the brute strength of certain specie(s) continued to attract and inspire painters and sculptors.",
				" Throughout the ages, sculptors carved the bust or figures of great men, and many painters drew the portraits of outstanding leaders to show their admiration and respect.",
				" Religious and mythical characters are also the favorite subjects of many artists.",
				" Several artists make as subjects people doing ordinary activities.",
				" The literal statement or the narrative content in the work that can be directly apprehended because the objects presented are easily recognized.",
				" It refers to the special meaning that a certain object or color has a particular culture or group of people.",
				" Any personal meaning consciously or unconsciously conveyed by the artist by using a private symbolism that stems from his association with something.",
				" Is the method of applying paint, pigment, color, or other media to a solid surface (support base).",
				" Is making 2D or 3D representative or abstract forms, especially by carving stone or wood or casting metal or plaster.",
				" Is the art, application, and skill of creating images by recording light or other electromagnetic radiation through an image sensor or light-sensitive materials.",
				" Is a form of visual art. It is when a person uses various drawing instruments to mark on paper or another 2D medium.",
				" Ranges from vocal and instrumental music, dance, and theatre to pantomime, sung verse, and beyond"
			};
			
			string cluster1 [4] //1-2
			= {
				"Objective Art", "Non-Objective Art", "Reality", "Imagination"
			};
			
			string cluster2 [4] //3-6
			= {
				"History", "Mythologies, Legends, and Folklores", "Nature", "Animals"
			};
			
			string cluster3 [4] //7-10
			= {
				"Conventional", "Subjective", "Eveyday Life", "Factual"
			};
				
			string cluster4 [4] //11-14
			= {
				"Photography", "Drawing", "Painting", "Sculpture"
			};
			
			string cluster5 [4]
			= {
				"Beat", "Entertainment", "Performing Arts", "Physical Activity"
			};
			
			for(int i=0; i<2; i++) //1-2
			{
				cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
					
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
			        } cout<<"\n\t> "; cin>>test[i]; cls; 
			}
			for(int i=2; i<6; i++) //3-6
			{
				cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
					
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
			        } cout<<"\n\t> "; cin>>test[i]; cls; 
			}
			for(int i=6; i<10; i++) //7-10
			{
				cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
					
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
			        } cout<<"\n\t> "; cin>>test[i]; cls; 
			}
			for(int i=10; i<14; i++) //11-14
			{
				cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
					
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
			        } cout<<"\n\t> "; cin>>test[i]; cls; 
			}
			for(int i=14; i<15; i++)
			{
				cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
					
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
			        } cout<<"\n\t> "; cin>>test[i]; cls; 
			}
	
			for(int i=0; i<15; ++i)
					{
						if(test[i]==arr[i]||test[i]==ARR[i])
						{
							totalScore+=1; quizScore[1]+=1;
						}
					}
					quizTake[1]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[1]<<"/15"<<endl; getchar(); getchar(); cls;
					 
		} //----------------------------------------------------------------------------------------------------------------> <end> quizGE6()
		void quizGE7()
		{
			cls; alg(); char test[15];
				
				string questions[15] 
			= {
					" In the 17th century, natural philosophers had moved away from much of the Aristotelian tradition, but it was still an important intellectual framework at that time.",
					" In what is called as the scientific revolution, many creative minds contributed to it.",
					" This involved the radical displacement of the earth to an orbit around the sun.",
					" This is as opposed to animal dissections, which was practiced for centuries.",
					" It helped deepen the understating of sciences, such as the mechanical calculator, refracting and reflecting telescopes, steam digester etc.",
					" As mentioned earlier, the man who arguably began this revolution was the Polish astronomer Nicolaus Copernicus.",
					" His theory of evolution by the means of natural selection is his broadest and most notable influence.",
					" Freud also developed what he thought of as the three agencies of the human personality: the id, ego, and superego.",
					" Maya shaman/priests worked out remarkable systems of mathematics and cosmology. Three kinds of calendars were devised by them.",
					" Erlitou saw an increase in bronze metallurgy and urbanization and was a rapidly growing regional center with palatial complexes that provide evidence for social stratification.",	
					" The Black Death aka The Destruction of Medieval Society and _______.",
					" It is the mass disruption to medieval society, which was caused by the plague, that set the progress of science and discovery back.",
					" The advances of many of philosophers and scholars were _______.",
					" These knowledge would not reemerge until the _______.",
					" This period made sophisticated observations and theories that were sadly superseded by works of later scientists. Finally, the removal of divine intervention from the process of explaining natural phenomena was sought out by many of the scholastic philosophers."
			};
			
			string cluster1 [4] //1-4
			= {
				"Scientific Revolution", "New Ideas", "Heliocentic Model", "Human Anatomy"
			};
			string cluster2 [4] //5
			= {
				"Tools", "Critical Thinking", "Good Leadership", "Human Power"
			};
			string cluster3 [4] //6-8
			= {
				"Aristotle", "The Thinker: Nicolaus Copernicus", "Charles Darwin", "Sigmund Freud"
			};
			string cluster4 [4] //9-10
			= {
				"Mesoamerica", "Asia", "Africa", "Ancient Greece"
			};
			string cluster5 [4] //11-14
			= {
				"forgotten", "Renaissance", "Scholasticism", "The Black Death"
			};
			string cluster6 [4] //
			= {
				"Ice Age", "Mesopotamian Period", "Late-Middle Age", "Dark Age"
			};
			
				for(int i=0; i<4; i++) //1-4
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=4; i<5; i++) //5
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=5; i<8; i++) //6-8
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=8; i<10; i++) //9-10
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=10; i<14; i++) //11-14
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=14; i<15; i++) //11-14
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}

					for(int i=0; i<15; ++i)
							{
								if(test[i]==arr[i]||test[i]==ARR[i])
								{
									totalScore+=1; quizScore[2]+=1;
								}
							}
								quizTake[2]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[2]<<"/15"<<endl; getchar(); getchar(); cls;
		} //-------------------------------------------------------------------------------------------------------------------> <end> quizGE7()
		void quizGE8()
		{
			cls; alg(); char test[15];

			string questions[15] 
			= {
				" Filipinos are open to others, feel the same as others, respect others with dignity and deal with them as fellow humans.",
				" Filipinos genuinely value and love their family.",
				" Filipinos are cheerful and fun-loving in life through bad and good times.",
				" Filipinos can adapt and adjust to any circumstance and environment, both physical and social.",
				
				" Filipinos view the world in terms of personal relationships. Filipinos deal with their objective task and emotional involvement in a similar way. They tend to interpret certain actions personally.",
				" Excessive concern for the family creates an in-group to which the Filipino is fiercely loyal, which is detrimental to the common welfare.",
				" The Filipino's lack of discipline is shown in their casual and relaxed attitude toward time and space, lack of precision and compulsiveness, poor time management, and procrastination.",
				" Filipinos are generally passive and lack initiative.",
				
				" Filipinos use this characteristic to raise their standard of living into a higher state of living.",
				" Filipinos are lesser patriotic compare to other Asian people, and they prefer everything that is foreign such as made in the USA or made in China products.",

				" Law regulates and controls ______ human conduct. It is not concerned with inner motives. A person may have an evil intention in his or her mind, but the law does not care about it.",
				" Law is _______ in a particular society. All individuals are equally subjected to it. It does not change from man to man.",
				" Political laws are _______ because a regular organ that formulates the law exists in every state.",
				" Law is _______ by a determinate political authority. It enjoys the sanction of the state. A punishment generally follows the disobedience of the law.",
				" Law falls within the purview of a subject known as _________."
			};
			
			
			string cluster1 [4] //1-4
			= {
				" Pakikipagkapwa-Tao/Fellowship ", "Family Orientation", " Joy and Humor", "Flexibility, Adaptability, and Creativity"
			};
			
			string cluster2 [4] //5-8
			= {
				"Extreme Personalism", "Extreme Family Centeredness", "Lack of Discipline", "Passivity and Lack of Initiative"
			};
			string cluster3 [4] //9-10
			= {
				"Hard Work and Industry", "olonial Mentality", "Extreme Family Centeredness", "Lack of Discipline"
			};
		
			string cluster4 [4] //11-14
			= {
				"precise and definite", "framed and enforced", "external", "universal"
			};
			
			string cluster5 [4] //
			= {
				"religion", "obedience", "jurisprudence", "subjectivity"
			};
			
				for(int i=0; i<4; i++) //1-4
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=4; i<8; i++) //5-8
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=8; i<10; i++) //9-10
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=10; i<14; i++) //11-14
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=14; i<15; i++) //
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
			
					for(int i=0; i<15; ++i)
							{
								if(test[i]==arr[i]||test[i]==ARR[i])
								{
									totalScore+=1; quizScore[3]+=1;
								}
							}
								quizTake[3]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[3]<<"/15"<<endl; getchar(); getchar(); cls; cls;	 
		} //---------------------------------------------------------------------------------------------------------------> <end> quizGE8()
		void quizMS101()
		{
			cls; alg(); char test[15];
				
			string questions[15] 
			= {
				
				" In a relationship, all 1.______ are 2.______,",
				" But not all 3.______ are 4.______.",
				" Function, Relationship with same domain and range.",	
				" Function, every elements are used.",
				" Function, all domain are used.",
				" Function, all range are used.",
				" The number of elements in a set.",
				" Is a bool and a declarative sentence.",
				
				" What is the value of log base 2 of 32?",
				" If x = 5 and y = 2, what is the value of 2x - y?",
				" What is the value of 7 to the power of 3?",
				" What is the value of 4!",
				
				" What is the difference between 23 and 16?"
			};
					
			string cluster1 [4] //1-2
			= {
				"Functions", "Relations", "Cardinality", "Proposition"
			};
			string cluster2 [4] //3-4
			= {
				"Proposition", "Cardinality", "Relations", "Functions"
			};
			string cluster3 [4] //5-8
			= {
				"Reflexive", "Bijective", "Surjective", "Injective" 
			};
			string cluster4 [4] //9-10
			= {
				"Cardinality", "Proposition", "Relationds", "Functions"
			};
			string cluster5 [4] //11-14
			= {
				"343", "24", "5", "8"
			};
			string cluster6 [4] //
			= {
				"One is bigger and one is Lower", "they're ASCII values", "7", "There's no difference, they're both numbers"
			};
				//1-2
				cout<<"In a relationship, all " <<"\033[33m"<< "1.______" <<"\033[0m"<< " are 2.______,\n"<<endl;   
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
			        } cout<<"\n\t> "; cin>>test[0]; cls;
			        
			    cout<<"In a relationship, all 1.______ are " <<"\033[33m"<< "2.______" <<"\033[0m"<< ",\n" <<endl;  
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
			        } cout<<"\n\t> "; cin>>test[1]; cls;
			        
			        //3-4
				cout<<"But not all " <<"\033[33m"<< "3.______" <<"\033[0m"<< " are 4.______.\n"<<endl;   
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
			        } cout<<"\n\t> "; cin>>test[2]; cls;
			        
			    cout<<"But not all 3.______ are " <<"\033[33m"<< "4.______" <<"\033[0m"<< ",\n" <<endl;  
					for (int j = 97; j < 101; ++j)
			        {
			            char a = j;
			            int b = j - 97;
			            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
			        } cout<<"\n\t> "; cin>>test[3]; cls;

				for(int i=4; i<8; i++) //5-8
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i-2]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=8; i<10; i++) //9-10
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i-2]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=10; i<14; i++) //11-14
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i-2]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
				for(int i=14; i<15; i++) //
				{
					cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i-2]<<"\n\n";
						
						for (int j = 97; j < 101; ++j)
				        {
				            char a = j;
				            int b = j - 97;
				            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
				        } cout<<"\n\t> "; cin>>test[i]; cls; 
				}
			
					for(int i=0; i<15; ++i)
							{
								if(test[i]==arr[i]||test[i]==ARR[i])
								{
									totalScore+=1; quizScore[4]+=1;
								}
							}
								quizTake[4]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[4]<<"/15"<<endl; getchar(); getchar();
		} //-----------------------------------------------------------------------------------------------------------------------> <end> quiz MS101()
		void quizCCS103()
		{
			cls; alg(); char test[15];
					
			string questions[15] 
			= {
				" A named storage location that hold a value or data.",
				" A reusable block of code that perform a specific task.",
				" Convert a code into a machine's language before the execution.",
				" The reason why first line is run first is because it executes the code line by line.",
				
				" A control flow statement that executes a block of code repeatedly until a certain condition is met.",
				" Functions call themselves.",
				" A programming paradigm that uses objects as the basic building blocks of programs.",	
				" A blueprint for creating objects that defines a set of attributes and methods.",
				
				" What is the difference between = and == in programming?",
				
				" A collection of similar data types stored in contiguous memory locations.",
				
				" What is the process of converting source code into machine code called?",
				" What is the term for the practice of combining different software components to create a larger system?",
				" What is the term for the practice of breaking down a complex problem into smaller, more manageable subproblems?",
				" What is the term for a system of organizing and accessing data stored in a computer?",
				
				" What is the term for the process of testing a program using real-world data to identify errors or bugs?"
			};
			
				string cluster1 [4] //1-4
				= {
					"Variable", "Function", "Compiler", "Interpreter"
				};
				string cluster2 [4] //5-8
				= {
					"loop", "Recursion", "Object-oriented", "Class"
				};
				string cluster3 [4] //9
				= {
					" The = operator is used for assignment, while the == operator is used for comparison.",
					" The == operator is used for assignment, while the = operator is used for comparison.",
					" Theres no real difference since they both equate into +=.",
					" Theres no real difference but they are not used with each other because what you can use depends on what programming language you are using."
				};
				string cluster4 [4] //10
				= {
					"Function", "Array", "Algorithm", "Class"
				};
				
				string cluster5 [4] //11-14
				= {	
					"Decomposition", "Database", "Compilation", "Integration"
				};
				string cluster6 [4] //
				= {	
					"Compiling", "Debugging", "Validation", "Seeking"
				};
				
					for(int i=0; i<4; i++) //1-4
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=4; i<8; i++) //5-8
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=8; i<9; i++) //9
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=9; i<10; i++) //10
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=10; i<14; i++) //11-14
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=14; i<15; i++) //
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					
						for(int i=0; i<15; ++i)
						{
							if(test[i]==arr[i]||test[i]==ARR[i])
							{
								totalScore+=1; quizScore[5]+=1;
							}
						}
							quizTake[5]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[5]<<"/15"<<endl; getchar(); getchar(); cls;	 
		} //-------------------------------------------------------------------------------------------------------------------> <end> quizCCSS103
		void quizFILDIS()
		{
			cls; alg(); char test[15];
		
				string questions[15] 
				= {
					" Marahil kung walag pananaliksik ay atrasado pa rin ang ating pamumuhay sa kasalukuyan.",
					" Mga Pagsusuring nakakaangat ng estado ng isang samahan na may layuning magsilbi ng may kapalit.",
					" Mahalaga makapagtatag ng matibay na pundasyon ng karunungan sa isip ng mga mag-aaral sa pamamagitan ng pagtuklas ng mga pamamaraang lalong makapagpapaunawa sa mga mag-aaral ng kanilang lektura.",
					" Sa larangang ito ay walang hanggang ang pagtuklas ng mga kaparaanan sa nagpapatatag ng ekonomiya at kalagayang pampulitika sa bansa.",
					
					" Abnormal Glow Discharge.",
					" Aperture.",		
					" Auction",
					" Acronym",
				
					" BAE",
				
					" LMK",
					
					" Ayon kay Dr. Ernesto Constantino at Pamela Costantino mayroong 100 na _______ sa Pilipinas",
					" inusugan pa ito ng _______ nang ipasa ang House Bill 4701: \"Act Prescribing English as Medium of Instruction in the Philippines School\"Ã‚Â",
					" Languages are indeed essential to the identity of group and individual and to their peaceful coexistence",
					" Samakatuwid ang kamalayang ________ ay karugtong ng kamalayan ng iba sa lipunan.",
					
					" ARGUMENTO 10: "
				};
			
				string cluster1 [4] //1-4
				= {
					"Pananaliksik sa Agham at Teknolohiya", "ananaliksik sa Negosyo at Industriya", "Pananaliksik sa Edukasyon", "Pananaliksik sa Politika"
				};
				string cluster2 [4] //5-8
				= {
					"Palyadong ilaw", "Gwang", "Isubasta", "Kahulugan"
				};
				string cluster3 [4] //9
				= {
					"Before Anyone Else", "Bilateral Auction Eerie", "Beverage Audit Exertion", "Bravado Airtime Entertainment"
				};
				string cluster4 [4] //10
				= {
					"printer \"Laser Machine K-19\" ", "Let Me Know", "London Medicinal Kramps", "LeMonK medicine camp"
				};
				string cluster5 [4] //11-14
				= {
					"Ayon sa UN: ", "indibidwal", "Wika", "kongreso"
				};string cluster6 [4] //
				= {
					"WALANG KABULUHANG MGA RASON", 
					"MGA HINDI SUPORTADO NA MGA ARGUMENTO", 
					"MABABA PA RIN ANG AVERAGE SCORE NG MGA ESTUDYANTE SA FILIPINO SA NATIONAL ACHIEVEMENT TEST (NAT)", 
					"HINDI ITO MAGAGAMIT UPANG PATAASIN ANG EKONOMIYA NG BANSA"
				};
				
					for(int i=0; i<4; i++) //1-4
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=4; i<8; i++) //5-8
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=8; i<9; i++) //9
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=9; i<10; i++) //10
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=10; i<14; i++) //11-14
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=14; i<15; i++) //
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					
						for(int i=0; i<15; ++i)
						{
							if(test[i]==arr[i]||test[i]==ARR[i])
							{
								totalScore+=1; quizScore[6]+=1;
							}
						}
							quizTake[6]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[6]<<"/15"<<endl; getchar(); getchar(); cls;
		} //-------------------------------------------------------------------------------------------------------------------> <end> quizFILDIS()
		void quizNSTP2()
		{
			cls; alg(); char test[15];
				
				string questions[15] 
				= {
					" Is the election of any head of state whose official title is president.",
					" Is an election in which all or most members of a given political body are up for election.",
					" Is an election in which voters in a jurisdiction select candidates for a subsequent.",
					" Is a decision-making process by which a population chooses an individual to hold formal office.",
					" Take place to select office-holders in local government, such as mayors and councillors.",
					" Co-option-is an election where members of a committee (or similar group) vote in order to fill a vacancy on that committee or group.",
					" Democratic tool related to elections in which the electorate votes for or against a specific proposal, law or policy rather than for a general or a particular candidate or party.",
					" Supporters for a campaign can be either formally organized or loosely affiliated, and frequently utilize campaign advertising.",
					" Section 1.",
					" What is COPAR?",
					" What is PCPD?",
					" Used during calamity",
					" Use of modern technology",
					" Behavior, attitude and social change"
				};
			
					string cluster1 [4] //1-4
					= {
						
						"Presidential Election", "General Election", "Primary Election", "By-Election"
					};
					string cluster2 [4] //5-6
					= {
						"Local Election", "Co-option", "Primary Election", "General Electioin"
					};
					string cluster3 [4] //7-9
					= {
						"Election Campaigns", "Formal Office", "Referendum", "Electoral System"
					};
					string cluster4 [4] //10
					= {
						"10-Words Title", "Short Title", "The Measuerment Policy", "Unfair Election Act"
					};
					string cluster5 [4] //11-12
					= {
						"Pupulation Center of Philippines's Development'",
						"Community Organizing, Preparation and Action Reserve",
						"Community Organizing Participatory Action Research",
						"Philippine Center for Population and Development"
					};
					string cluster6 [4] //13-15
					= {
						" Used during calamity",
						" Use of modern technology",
						" Behavior, attitude and social change",
						" Emergency-type Approach"
					};
					
						for(int i=0; i<4; i++) //1-4
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
						for(int i=4; i<6; i++) //5-6
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=6; i<9; i++) //7-9
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=9; i<10; i++) //10
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=10; i<12; i++) //11-12
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					for(int i=12; i<15; i++) //13-15
					{
						cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
							
							for (int j = 97; j < 101; ++j)
					        {
					            char a = j;
					            int b = j - 97;
					            cout << "\033[33m" << a << "." << "\033[0m" << cluster6[b] << endl;
					        } cout<<"\n\t> "; cin>>test[i]; cls; 
					}
					
							for(int i=0; i<15; ++i)
							{
								if(test[i]==arr[i]||test[i]==ARR[i])
								{
									totalScore+=1; quizScore[7]+=1;
								}
							}
									quizTake[7]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[7]<<"/15"<<endl; getchar(); getchar(); cls;
		} //------------------------------------------------------------------------------------------------------------------> <end> quizNSTP()
		void quizPE2() //<>
		{
			cls; alg(); char test[15];
				
				string questions[15] 
				= {
					" The best description of Itik-Itik is that the steps mimic the way a duck walks.",
					" The dance movements imitate the movement of the tikling bird.",
					" Performed on top of a narrow bench.",	
					" Dancers carefully balance three half-filled glasses of rice wine on their heads and hands as they gracefully spin and roll on the ground.",
					" Depicts a fight over coconut meat, a highly-prized food.",
					" The malong is a tubular garment, and the dance essentially shows the many ways it can be worn.",
					" Made for flirting! Dancers make a number of flirtatious movements as they hide behind fans or handkerchiefs and peek out at one another.",
					" Also known as the Dance of the Doves.",
					" It means \"assortment\".",
					" It is a formal series of close-step-close movements with a couple facing each other in a courtship configuration.",
					" Beat-the underlying pulse of a rhythm.",
					" Tempo-rate of speed of a movement.",
					" Pitch-lowness or highness of a tone.",
					" Accent-emphasis on certain beats.",
					" The regular recurrence of beats which divides a musical design into measure."
				};
				
					string cluster1 [4] //1-4
					= {
						"The itik-itik", "The Tinikling", "The Sayaw sa bangko", "The Binasuan"
					};
					string cluster2 [4] //5-8
					= {
						"The Maglalatik", "The Cappa Malong-Malong", "The CariÃƒÆ’Ã‚Â±osa", "The Pantomina"
					};
					string cluster3 [4] //9-10
					= {
						"The Surtido", "The Magkasuyo", "The Habanera Botolena", "La Jota MincadeÃƒÆ’Ã‚Â±a"
					};
					string cluster4 [4] //11-14
					= {
						"Pitch", "Accent", "Beat", "Tempo"
					};
					string cluster5 [4] //
					= {
						"Count", "Bar", "Meter", "Pre-measured note"
					};
					
						for(int i=0; i<4; i++) //1-4
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster1[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
						for(int i=4; i<8; i++) //5-8
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster2[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
						for(int i=8; i<10; i++) //9-10
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster3[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
						for(int i=10; i<14; i++) //11-14
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster4[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
						for(int i=14; i<15; i++) //
						{
							cout<< "\033[33m" << i+1 << "." << "\033[0m" <<questions[i]<<"\n\n";
								
								for (int j = 97; j < 101; ++j)
						        {
						            char a = j;
						            int b = j - 97;
						            cout << "\033[33m" << a << "." << "\033[0m" << cluster5[b] << endl;
						        } cout<<"\n\t> "; cin>>test[i]; cls; 
						}
					
					
								for(int i=0; i<15; ++i)
								{
									if(test[i]==arr[i]||test[i]==ARR[i])
									{
										totalScore+=1; quizScore[8]+=1;
									}
								}
									quizTake[8]=1; cout<<"Quiz GE5\n\nScore: "<<quizScore[8]<<"/15"<<endl; getchar(); getchar(); cls;
		} //----------------------------------------------------------------------------------------------------------------------> <end> quizPE2()
		
		void Grades() 
		{
			
			//string ehem[9]={"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2"};
			// "" << a << "." << ""
					cout<< "\033[33m" <<"Path: lms/grades/" << "\033[0m" << "\n"<<endl;
					
					for(int i=0; i<=8; ++i)
					{
						if(i==4)
						{
							cout<<subjects[i]<<": "<<setw(12)<<quizScore[i]<<"/15"<<endl;
						}else if(i==5||i==6)
						{
							cout<<subjects[i]<<": "<<setw(11)<<quizScore[i]<<"/15"<<endl;
						}else if(i==7)
						{
							cout<<subjects[i]<<": "<<setw(12)<<quizScore[i]<<"/15"<<endl;
						}else
						{
							cout<<subjects[i]<<": "<<setw(14)<<quizScore[i]<<"/15"<<endl;
						}
						
						
					}
					float aveave = (totalScore/9.0)*10.0; //90;
    			
					
					if(aveave<75)
					{
						cout<< "\n\tAverage: " << "\033[31m" << fixed << setprecision(2) << aveave << "\033[0m" << ":"<< "\033[31m" <<" Failed" << "\033[0m"; //red
					}else if(aveave>74 && aveave<90)
					{
						cout<< "\n\tAverage: " << "\033[34m" << fixed << setprecision(2) << aveave << "\033[0m" << ":"<< "\033[34m" <<" Passed" << "\033[0m"; //blue
					}else
					{
						cout<< "\n\tAverage: " << "\033[32m" << fixed << setprecision(2) << aveave << "\033[0m" << ":"<< "\033[32m" <<" Excellent" << "\033[0m"; //green
					}

					getchar(); getchar(); cls;
			
		} // --------------------------------------------------------------------------------------------------------------> <end> void Grades()
	}; Quiz Q; //-----------------------------<class>----------------------------<class>------------------------<class>---------------> <end> class Quiz Q
	
} //--------------------------------------> namespace lesssonsAndQuiz namespace <------------------------------------------------//


	//-------------------------------------------------------------------------------> main function
																					
/*int main()
{
    system("cls");
    project::run();
    return 0;
}*/
	//-------------------------------------------------------------------------------> project namespace
namespace project
{
    using namespace std;

    // mention voids
    void GE5(), GE6(), GE7(), GE8(), MS101(), CCS103(), FILDIS(), NSTP2(), PE2();

    void run()
    {
       if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        }
	        cout << "\n\n\t> "; cin >> subchoice;
		}
        j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{
                case 'a':case 'A': cls; cout <<"\033[33m" << "path: LMS/GE5" <<"\033[0m" <<"\n\n"; break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
    } // ------------------------------------------------------------------------------------------------------------------> <end> project::run()
    
    // global in project namespace
  			//<none here>
  			
    void GE5()	//-------------------------------------------------------------------------------------------------------------> GE5
    { //calls
    	
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        }
	        cout << "\n\n\t> "; cin >> subchoice;
		}
        j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{
                case 'a':case 'A': cls; cout <<"\033[33m" << "path: LMS/GE5" <<"\033[0m" <<"\n\n"; break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
					
				
    } //-------------------------------------------------------------------------------------------------------------------------> <end> GE5()
    
    void GE6()
    {cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': cls; cout <<"\033[33m" << "path: LMS/GE6" <<"\033[0m" <<"\n\n"; break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	} //-------------------------------------------------------------------------------------------> <end> GE6()
	
	void GE7()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': cls; cout <<"\033[33m" << "path: LMS/GE7" <<"\033[0m" <<"\n\n"; break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	} //----------------------------------------------------------------------------------------------------> <end> GE7()
	
	void GE8()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': cls; cout <<"\033[33m" << "path: LMS/GE8" <<"\033[0m" <<"\n\n"; break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
	
	void MS101()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': cls; cout <<"\033[33m" << "path: LMS/MS101" <<"\033[0m" <<"\n\n"; break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
	
	void CCS103()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': cls; cout <<"\033[33m" << "path: LMS/CCS103" <<"\033[0m" <<"\n\n"; break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
	
	void FILDIS()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': cls; cout <<"\033[33m" << "path: LMS/FILDIS" <<"\033[0m" <<"\n\n"; break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
	
	void NSTP2()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': cls; cout <<"\033[33m" << "path: LMS/NSTP2" <<"\033[0m" <<"\n\n"; break;
				case 'i':case 'I': PE2(); break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
	
	void PE2()
    {
    	cls;
    	if(pathout == 0)
    	{
    		home: cls; cout<<"\033[33m" << "path/lms" <<"\033[0m" << "\n" <<endl;
    
	        for (int i = 97; i < 108; ++i)
	        {
	            char a = i;
	            int b = i - 97;
	            cout << "\033[33m" << a << "." << "\033[0m" << subjects[b] << endl;
	            pathout += 1;
	        } cout << "\n\n\t> "; cin >> subchoice;
		}
		
         j1:
        	switch(subchoice) //"GE5", "GE6", "GE7", "GE8", "MS101", "CCS103", "FILDIS", "NSTP2", "PE2", "Grades", "Exit"
			{//change
                case 'a':case 'A': GE5(); break;
				case 'b':case 'B': GE6(); break;
				case 'c':case 'C': GE7(); break;
				case 'd':case 'D': GE8(); break;
				case 'e':case 'E': MS101(); break;
				case 'f':case 'F': CCS103(); break;
				case 'g':case 'G': FILDIS(); break;
				case 'h':case 'H': NSTP2(); break;
				case 'i':case 'I': cls; cout <<"\033[33m" << "path: LMS/PE2" <<"\033[0m" <<"\n\n"; break;
				case 'j':case 'J': cls; lessonsAndQuiz::Q.Grades(); goto home;
				case 'k':case'K': return; //back to main
				default: goto home;
            }
            
            	char c1, c2; 
            	
            	for (int i = 97; i < 100; ++i)
		        {
		            char a = i;
		            int b = i - 97;
		            cout << "\033[33m" << a << "." << "\033[0m" << concept1[b] << endl;
		        }
				
            	cout<<"\n\n\t> "; cin>>c1; 
            		
            		switch(c1)
					{
						case'a':case'A': lessonsAndQuiz::lesson(); break;
						case'b':case'B': cls; lessonsAndQuiz::Q.quiz(); break;
						case'c':case'C': goto home;
						default: goto j1;
					} goto j1;
	}
		
	//**************************************************************************************************************************************************************...
	
}