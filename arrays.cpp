#include <iostream>                             
#include <iomanip>                              
#include <windows.h>                            
using namespace std;
double total;
int avg; 
struct meyvar{
	float subjects[5][0];     
	double sb1=subjects[0][0];
	double sb2=subjects[1][0];
	double sb3=subjects[2][0];
	double sb4=subjects[3][0];
	double sb5=subjects[4][0];
};                          
HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
void placeCursor(HANDLE screen, int row, int col)
{                       
    COORD position;     
	position.Y = row;       
	position.X = col;    
    SetConsoleCursorPosition(screen, position);
}
void soomuujiyaha_1(HANDLE screen)
{
	placeCursor(screen, 3, 25);
	cout << "******* Enter Five subjects *******" << endl;
	placeCursor(screen, 5, 25);
	cout << "subject1: " << endl;
	placeCursor(screen, 7, 25);
	cout << "subject2: " << endl;
	placeCursor(screen, 9, 25);
	cout << "subject3: " << endl;
	placeCursor(screen, 11, 25);
	cout << "subject4: " << endl;
	placeCursor(screen, 13, 25);
	cout << "subject5: " << endl;
}
void Input(HANDLE screen, meyvar myy)
{
	placeCursor(screen, 5, 37);
	cin>>myy.sb1;
	placeCursor(screen, 7, 37);
	cin>>myy.sb2;
	placeCursor(screen, 9, 37);
	cin>>myy.sb3;
	placeCursor(screen, 11, 37);
	cin>>myy.sb4;
	placeCursor(screen, 13, 37);
	cin>>myy.sb5;
	total=myy.sb1+myy.sb2+myy.sb3+myy.sb4+myy.sb5;
	avg=total/5;
//to be smart add system("cls");
	cout<<"your Total is ";
	SetConsoleTextAttribute (screen, 23);
	cout<<total<<endl;
	SetConsoleTextAttribute (screen, 7);
	cout<<"your Avg is "<<setprecision(2);
	SetConsoleTextAttribute (screen, 23);
	cout<<avg<<endl;
	SetConsoleTextAttribute (screen, 7);
}
void x_soomujiye(HANDLE screen, meyvar myy)
{
	
	cout<<"Your Grade Letter Is: ";
	if(avg>=92 & avg<=100){
		SetConsoleTextAttribute (screen, 10);
		cout<<"A+";
		SetConsoleTextAttribute (screen, 7);
	} 
	else if(avg>=86 & avg<=91){
		SetConsoleTextAttribute (screen, 3);
    	cout<<"A";
    	SetConsoleTextAttribute (screen, 7);
	}
	else if(avg>=79 & avg<=85){
		SetConsoleTextAttribute (screen, 9);
    	cout<<"B+";
    	SetConsoleTextAttribute (screen, 7);
	}
    else if(avg>=70 & avg<=78){
    	SetConsoleTextAttribute (screen, 1);
    	cout<<"B";
    	SetConsoleTextAttribute (screen, 7);
	}
	else if(avg>=63 & avg<=69){
		SetConsoleTextAttribute (screen, 14);
    	cout<<"C+";
    	SetConsoleTextAttribute (screen, 7);
	}
	else if(avg>=56 & avg<=62){
		SetConsoleTextAttribute (screen, 6);
    	cout<<"C";
    	SetConsoleTextAttribute (screen, 7);
	}
	else if(avg>=50 & avg<=55){
		SetConsoleTextAttribute (screen, 112);
    	cout<<"D";
    	SetConsoleTextAttribute (screen, 7);
	}
	else if(avg>=0 & avg<=49){
		SetConsoleTextAttribute (screen, 4);
    	cout<<"F";
    	SetConsoleTextAttribute (screen, 7);
	}
	else {
		cout<<"Invalid!";
	}
	cout<<endl;
	cout<<"\nMarks         Grade"<<endl;
	cout<<"92-100           A+"<<endl;;
	cout<<"86-91            A"<<endl;
	cout<<"79-85            B+"<<endl;
	cout<<"70-78            B"<<endl;
	cout<<"63-69            C+"<<endl;
	cout<<"56-62            C"<<endl;
	cout<<"50-55            D"<<endl;
	cout<<"0-49             F"<<endl;
	
}

int main(){
	meyvar myy;
	soomuujiyaha_1(screen);
	Input(screen,myy);
	x_soomujiye(screen,myy);
}
