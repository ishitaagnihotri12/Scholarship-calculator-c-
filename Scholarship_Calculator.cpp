#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<fstream>
using namespace std;
void out();
long scholar;
class engg
{
  int phy;
  int che;
  int mth;
  int JEE;
  float avg;
 public:
 	void enter12th();
 	void enterjee();
 	void calc12th();
 	void calcjee();
}e1;

class sports
{ char ch;
   int n;
 public:
 	void ask();
}s1;

class arts
{ int n;
  char ans;
  public:
  	void calc()
  	{cout<<"\n\n\t Do you have any National or Regoinal Certificate ? \n\tPress - 'Y' or 'N': ";
  	 cin>>ans;
	 if(ans=='y'||ans=='Y')
	 {cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 30000 .\n\tAccording to scholarship scheme by Indian Govt. in the field of arts ! ";
	 scholar=30000;
	 }
	 else
	 {cout<<"\n\n\tSorry you are not eligible for the scholarship !";
	 }
	  }
}a1;

class masters
{float cgpa;
 public:
 	void get_cgpa()
 	{cout<<"\n\n\tEnter your CGPA from your last bachelor degree obtained (0-10) : ";
 	cin>>cgpa;
	 }
 	
 	void calc_cgpa()
 	{
	if(cgpa>=9.0)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 50000 !";
	scholar=50000;
	}
	else if(cgpa<9.0&&cgpa>=8.0)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 40000 !";
	scholar=40000;
	}
	else if(cgpa<8.0&&cgpa>=7.0)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 30000 !";
    scholar=30000;
	}
	else if(cgpa<7.0&&cgpa>6.5)
	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 25000 !";
	scholar=25000;
	}
	else if(cgpa<6.5&&cgpa>5.0)
	{cout<<"\n\n\tSorry you are not eligible for scholarship but you are eligible for admission !";
	scholar=0;
	}
	else
	{cout<<"\n\n\tSorry you are not eligible for admission !";
	}
	
	}

}m1;

class fashion
{int nift;
public:
	void calc_nift()
	{
		cout<<"\n\n\tEnter your score obtained (0-150) in All India NIFT test : ";
		cin>>nift;
		if(nift>=120)
		{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 30000 !";
		scholar=30000;
		}
		else if(nift<120&&nift>=90)
		{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 25000 !";
		scholar=25000;
		}
		else if(nift<90&&nift>=50)
		{cout<<"\n\n\tSorry you are not eligible for scholarship but you are eligible for admission!";
		scholar=0;
		}
		else
		{cout<<"\n\n\tSorry you are not eligible for admission !";
		}
	}
	
}f2;

class medical
{
	int pmt;
 public:
 	void calc_pmt()
 	{
	
	cout<<"\n\n\tEnter your marks obtained (0-300) in AIPMT test : ";
 	cin>>pmt;
 	if(pmt>=150)
 	{
    cout<<"\n\n\tCongractulation you are eligible for the scholarship of Rs. 50000 !";
    scholar=50000;
	}
	   else if(pmt>=120&&pmt<150)
	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 40000 !";
	scholar=40000;
	}
	else if(pmt<120&&pmt>=90)
	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 30000 !";
	scholar=30000;
	}
	else if(pmt<90&&pmt>=50)
	{cout<<"\n\n\tSorry you are not eligible for scholarship but you are eligible for admission!";
	scholar=0;
	}
	else
	{cout<<"\n\n\tSorry you are not eligible for admission !";
	}
    	
	 }
	
}m2;


void engg::enterjee()
{  cout<<"\n\n\tEnter your score in Jee mains : ";
   cin>>JEE;
}

void engg::calcjee()
{  if(JEE>120)
   {   scholar=50000;
    cout<<"\n\n\tCongractulation you are eligible for the scholarship of Rs. 50000 !";
   }
   else
    { scholar=0;
	  cout<<"\n\n\tSorry you are not eligible for the scholarship due to the cutoff value of JEE mains !";
    } 
}

void engg::enter12th()
{        
     	cout<<"\n\n\tEnter marks of physics : ";
 	    cin>>phy;
 	    cout<<"\n\n\tEnter marks of chemistry : ";
 	    cin>>che;
	    cout<<"\n\n\tEnter marks of maths : ";
	    cin>>mth;

	
	 }

void engg::calc12th()
{
	avg=(phy+che+mth)/3;
	cout<<avg;
	cout<<"%";
	if(avg>=90)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 50000 !";
	scholar=50000;
	}
	else if(avg<90&&avg>80)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 40000 !";
	scholar=40000;
	}
	else if(avg<80&&avg>70)
	{cout<<"\n\n\tCongratulations you are eligible for scholarship of Rs. 30000 !";
    scholar=30000;
	}
	else if(avg<70&&avg>65)
	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 25000 !";
	scholar=25000;
	}
	else if(avg<65&&avg>50)
	{cout<<"\n\n\tSorry you are not eligible for scholarship but you are eligible for admission !";
	scholar=0;
	}
	else
	{cout<<"\n\n\tSorry you are not eligible for admission !";
	}
}

void sports::ask()
{cout<<"\n\n\tDo you have any National,SGFI,International certificate in the following games ?";
 cout<<"\n\n\t1.football \t2.cricket \t.hockey \n\t4.basketball \t5.valleyball \t6.atheletics";
 cout<<"\n\n\tIf Yes press 'Y' if No press 'N' ! ";
 cin>>ch;
  if(ch=='y'||ch=='Y') 
  { cout<<"\n\n\twhich certificate you have ?";
    cout<<"\n\n\t1.National \t2.SGFI \t3.International";
	cin>>n;
	switch(n) 
	{case 1:
		{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 30000 !";
	     scholar=30000;
		 break;
		 }
		
	 case 2:
	 	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 40000 !";
		 scholar=40000;
		 break;
		 }
	 case 3:
	 	{cout<<"\n\n\tCongractulations you are eligible for scholarship of Rs. 50000 !";
	 	scholar=50000;
		 break;
		 }
	 default:
	 	{cout<<"\n\n\Error !!!";
	 	 break;
		 }
	}
  }
  else if(ch=='n'&&ch=='N')
  {
  	cout<<"\n\n\tYou are not eligible sorry for the inconvenience !";
  }
  else
  { 
    cout<<"\n\n\tINVALID CHARACTER !";
  }
}

void out()
{system("cls");
system("color 75");
time_t tim;  
time(&tim);
cout <<"\t\t\t\t\t  \t\t\t\t\t"<<ctime(&tim);
cout<<"\n\n\n\t\t\t\t   *******************************\n\n";
 cout<<"\t\t\t\t*** ISHITA SCHOLARSHIP CALCULATOR ****\n";
 cout<<"\n\t\t\t\t   *******************************\n\n";
 cout<<"\n\n\n\tName of the Programer : Ishita Agnihotri.";
 _sleep(900);
 cout<<"\n\n\n\tInstitution           : Lovely Professional University."; 
 _sleep(900);
 cout<<"\n\n\n\tCourse & Stream       : B.Tech (C.S.E).";
 _sleep(900);
 exit(0);
}

main()
{ofstream f1;
int i;
 f1.open("project copy.txt",ios::app);
 system("mode 110");
 system("color 1A");
 
       cout<<"\n\n\n\t\t Loader running...";
       _sleep(500);
       cout<<"\n\n\n\t\t Loading resources and streams...";
       _sleep(500);
       cout<<"\n\n\n\t\t Preparing to run...";
       _sleep(500);
       cout<<"\n\n\n\t\t Please wait...";
       _sleep(1000);
       cout<<"\n\n\n\t\t Enjoy the program...";
        _sleep(500);
 int choice,n,board;
 char stream[40]="\nScholarship Field : ";
 char rep,name[20],sname[20];
 g1:
    time_t tim;  
    time(&tim); 
 system("cls");
 system("color 74");
 cout <<"\t\t\t\t\t  \t\t\t\t\t"<<ctime(&tim);
 cout<<"\n\n\n\t\t\t\t   *******************************\n\n";
 cout<<"\t\t\t\t   *** SCHOLARSHIP CALCULATOR ***\n";
 cout<<"\n\t\t\t\t   *******************************\n\n";
 cout<<"\n\n\n\tEnter the name of the Candidate : ";
 fflush(stdin);
 gets(name);
 f1<<"\n\nName of the student : "<<name<<"\n";
 system("cls");
 cout <<"\t\t\t\t\t  \t\t\t\t\t"<<ctime(&tim);
  cout<<"\n\n\n\t\t\t\t   *******************************\n\n";
 cout<<"\t\t\t\t   *** SCHOLARSHIP CALCULATOR ***\n";
 cout<<"\n\t\t\t\t   *******************************\n\n";
 cout<<"\n\n\tplease select your Board Of Education : ";
 cout<<"\n\t1.CBSE \t\t2.ICSE\n\t3.DELHI Board\t4.Others\n\t5.Exit\n\t";
 cin>>board;
 f1<<"Board of Education : ";
  switch(board)
  {
  	case 1:
  		{cout<<"\n\tCBSE board.\n\n";
  		f1<<"CBSE board.";
		  break;
		  }
	case 2:
		{cout<<"\n\tICSE board.\n";
  		f1<<"ICSE board.";
		  break;
		}
	case 3:
		{cout<<"\n\tDelhi board.\n\n";
  		f1<<"Delhi board.";
		break;
		}
	case 4:
		{cout<<"\n\tOther board.\n\n";
  		f1<<"Other board.";
		  break;		 
		}
    case 5:
	   {cout<<"\n\tProgram is Exiting...";
	    _sleep(100);
	    out();
			   }		
  }
  
system("cls");
system("color 34");
cout <<"\t\t\t\t\t  \t\t\t\t\t"<<ctime(&tim);
 cout<<"\n\n\n\t\t\t\t   *******************************\n\n";
 cout<<"\t\t\t\t*** SCHOLARSHIP CALCULATOR ****\n";
 cout<<"\n\t\t\t\t   *******************************\n\n";
 cout<<"\n\tEnter the course field in which you want to take admission :-";
 cout<<"\n\t1.Engineering\t\t2.Sports\t\t3.Arts\n\t4.Masters\t\t5.Fashion Designing\t6.Medical \n\n\t7.Exit.\n\t";
 cin>>choice;
 fflush(stdin);
 f1<<"\n Scholarship amount : ";
 system("cls");
 system("color 30");
 cout <<"\t\t\t\t\t  \t\t\t\t\t"<<ctime(&tim);
 cout<<"\n\n\n\t\t\t\t   *******************************\n\n";
 cout<<"\t\t\t\t*** SCHOLARSHIP CALCULATOR ****\n";
 cout<<"\n\t\t\t\t   *******************************\n\n";
 
 switch(choice)
 {case 1:
 	{strcat(stream,"Engineering.");
	 cout<<"\n\tYou are taking admission on the basis of ?\n\t\t1.12th standard\n\t\t2.JEE Mains \n\t\t";
     cin>>n;
     if(n==1)
	 {e1.enter12th();
 	 e1.calc12th();
 	 f1<<scholar;
 	 f1<<stream;
     }
     else if(n==2)
     {e1.enterjee();
     e1.calcjee();
	 f1<<scholar;
	 f1<<stream;
	 }
	 else
	 cout<<"\ninvalid input !";
 	 break;
	 }
  case 2:
  	{strcat(stream,"Sports.");
	  s1.ask();
  	f1<<scholar;
  	f1<<stream;
  	break;
	  }
  case 3:
  	{
	  strcat(stream,"Arts.");
	  a1.calc();
  	f1<<scholar;
  	f1<<stream;
  	break;
	  }
  case 4:
  	{strcat(stream,"Masters.");
	  m1.get_cgpa();
  	 m1.calc_cgpa();
  	 f1<<scholar;
  	 f1<<stream;
  	 break;
	  }
  case 5:
  	{strcat(stream,"Fashion designing.");
	  f2.calc_nift();
	  f1<<scholar;
	  f1<<stream;
	  break;
	  }
  case 6:
  	{strcat(stream,"Medical.");
	  m2.calc_pmt();
  	f1<<scholar;
  	f1<<stream;
	  break;
	  }
  case 7:
  	{cout<<"\n\tProgram is Exiting...";
	    _sleep(100);
	    out();
			   }
 default:
 	cout<<"\n\n\tsorry wrong choice !";
 	 }
 cout<<"\n\n\n\tYou want to Use Again ? \n\tPress 'Y' for yes and 'N' for no :";
 cin>>rep;
 if(rep=='y'||rep=='Y')
 {goto g1;
 }
 else
 {
 cout<<"\n\tThankYou ! For using the Calculator !\n\n\tHave a Nice Day";
 f1.close();
 out();
 }

 getch();
}
