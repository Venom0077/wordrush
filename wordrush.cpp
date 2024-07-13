#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <thread>
#include "termcolor.hpp"
void level1();
void level2();
void level3();
void level4();
void level5();
void level6();
void level7();
void level8();
void level9();
void level10();
void delay(int milliseconds);
using namespace std;
void delay(int milliseconds){
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
int main() {
	int desired_column=50;
	int mm,sl;
    char b;
//    Main Menu
		system("Color F0" ); 
	menu:
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<< termcolor::bright_red<<setw(48)<<"WORD RUSH"<<termcolor::reset<<endl;
	cout<<endl;
	cout<<setw(53)<<"A Word Hunting Game"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<termcolor::bright_red<<"                                          #+                                  "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                                .        #+  #####>                                  "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                        .       #       #+   #+   #                                  "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                        #+     # #     #+    #+  #                                   "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                         #+   #   #   #+     ####+                                   "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                          #+ #     # #+      #   #+                                  "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                           #        #+       #    #+                                 "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                                             -     #+                                "<<termcolor::reset<<endl;
	cout<<termcolor::bright_red<<"                                                    +.                               "<<termcolor::reset<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                        1.PLAY                                       "<<endl;
	cout<<"  2.SCORES                                                                   3.ABOUT "<<endl;
	cout<<endl;
	cout<<"                                     4.DICTIONARY                                    "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cin>>mm;
	switch (mm){
			case 2:{
				string a;
				cout<<"Which Level's Score List You Want to See ? [1-10]"<<endl;
				cin>>sl;
				switch(sl){
					case 1:
						{
						ifstream scorel1;
						scorel1.open("level1score.txt",ios::in);
						while(!scorel1.eof()){
							getline(scorel1,a);
							cout<<a<<endl;
						}
						scorel1.close();
						cout<<endl;
						cout<<"Press [B] to go Back "<<endl;
						b1:
						cin>>b;
						if(b=='b'|| b=='B'){
						
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b1;
						break;}
						case 2:{	
						
						ifstream scorel2;
						scorel2.open("level2score.txt",ios::in);
						while(!scorel2.eof()){
							getline(scorel2,a);
							cout<<a<<endl;
						}
						scorel2.close();
						cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b2:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
							}	
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b2;
						break;
						}	
						case 3:{
							ifstream scorel3;
							scorel3.open("level3score.txt",ios::in);
							while(!scorel3.eof()){
								getline(scorel3,a);
								cout<<a<<endl;	
							}
							scorel3.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b3:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b3;
							break;
						}case 4:{
							ifstream scorel4;
							scorel4.open("level4score.txt",ios::in);
							while(!scorel4.eof()){
								getline(scorel4,a);
								cout<<a<<endl;
							}
							scorel4.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b4:
						cin>>b;
						if(b=='b'|| b=='B')
						{
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b4;
							break;
						}case 5:{
							ifstream scorel5;
							scorel5.open("level5score.txt",ios::in);
							while(!scorel5.eof()){
								getline(scorel5,a);
								cout<<a<<endl;
							}
							scorel5.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b5:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b5;
							break;
						}case 6:{
							ifstream scorel6;
							scorel6.open("level6score.txt",ios::in);
							while(!scorel6.eof()){
								getline(scorel6,a);
								cout<<a<<endl;
							}
							scorel6.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b6:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b6;
							break;
						}case 7:{
							ifstream scorel7;
							scorel7.open("level7score.txt",ios::in);
							while(!scorel7.eof()){
								getline(scorel7,a);
								cout<<a<<endl;
							}
							scorel7.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b7:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b7;
							break;
						}case 8:{
							ifstream scorel8;
							scorel8.open("level8score.txt",ios::in);
							while(!scorel8.eof()){
								getline(scorel8,a);
								cout<<a<<endl;
							}
							scorel8.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b8:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b8;
							break;
						}case 9:{
							ifstream scorel9;
							scorel9.open("level9score.txt",ios::in);
							while(!scorel9.eof()){
								getline(scorel9,a);
								cout<<a<<endl;
							}
							scorel9.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b9:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b9;
							break;
						}case 10:{
							ifstream scorel10;
							scorel10.open("level10score.txt",ios::in);
							while(!scorel10.eof()){
								getline(scorel10,a);
								cout<<a<<endl;
							}
							scorel10.close();
							cout<<endl;	
						cout<<"Press [B] to go Back "<<endl;
						b10:
						cin>>b;
						if(b=='b'|| b=='B'){
							system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b10;
							break;
						}
						default:
							cout<<"Invalid Selection, Please Select From 1 to 10"<<endl;
							break;					
				}
			break;}
				case 1:
					goto levelselection;
					break;
					case 3:{
						system("cls");
					
						cout<<"                              About Word Rush                                 "<<endl;
						cout<<"                            Version : 1.000.0                                 "<<endl;
						cout<<"                           Programming Language Used : C++                    "<<endl;
						cout<<"                            Creators : Muhammad Atif                          "<<endl;
						cout<<"                                       Fazeel Mushtaq                         "<<endl;
						cout<<"                                       Abdullah Irshad                        "<<endl;
						cout<<"                                       Abdullah Zafar                         "<<endl;
						cout<<"                                       Muneeb Ali                             "<<endl;
						cout<<"                                       Subtain Ali                            "<<endl;
						cout<<endl;	
						cout<<"                               Press [B] to go Back "<<endl;
						b11:
						cin>>b;
						if(b=='b'|| b=='B'){
						system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b11;
						break;
					}
					default:
						cout<<"Inavlid Selection, Please Select From 1-3 "<<endl;
						cout<<"           Press [B] to go Back "<<endl;
						b12:
						cin>>b;
						if(b=='b'|| b=='B'){
							system("cls");
							goto menu;
						}
						else 
							cout<<"Kindly Press B or b "<<endl;
							goto b12;
						break;
			}	
//    Level Select
levelselection:
	system("cls");
	cout<<endl;
	cout<<endl;
    cout<<termcolor::bright_red<<"------------------------------------Select level-------------------------------------"<<termcolor::reset<<endl;
    cout<<endl;
    cout<<"                              Level 1          Level 2                               "<<endl;
    cout<<"                              Level 3          Level 4                               "<<endl;
    cout<<"                              Level 5          Level 6                               "<<endl;
    cout<<"                              Level 7          Level 8                               "<<endl;
    cout<<"                              Level 9          Level 10                              "<<endl;
    cout<<endl;
    cout<<termcolor::bright_red<<"--------------------------------Press [B] to go Back---------------------------------"<<termcolor::reset<<endl;
    cout<<"                                                                                     "<<endl;
    ls:
	string input;
    cin>>input;
    cin.ignore();
    	if(input=="1")
    	level1();
    	else if(input=="2")
    	level2();
    	else if(input=="3")
    	level3();
    	else if(input=="4")
    	level4();
    	else if(input=="5")
    	level5();
    	else if(input=="6")
    	level6();
    	else if(input=="7")
    	level7();
    	else if(input=="8")
    	level8();
    	else if(input=="9")
    	level9();
    	else if(input=="10")
    	level10();
    	else if(input=="B"||input=="b"){
		system("cls");
    	goto menu;
		}
    	else 
    	cout<<"Invalid Level Selection, Please Select From 1 to 10 or Press [B] For Main Menu"<<endl;
    	goto ls;
    return 0; 
}
void level1() {
    int tries = 5,score=0;
    system("cls");
    cout<<termcolor::bright_red<<endl;
	cout<<endl;
	cout<<endl;	
	cout<<"                                [Wellcome to Level 1]                                "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are Two Words to Hunt:                                             "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          T                                          "<<endl;
	cout<<"                                       A     C                                       "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	string l1word1, l1word2;
	cout<<"                           Enter The Possible Words !                                "<<endl;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l1word1);
        if (l1word1 == "cat" || l1word1 == "act") {
    cout<<"                                      1. "<<l1word1<<endl;
    cout<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        cout<<endl;
        getline(cin, l1word2);
        if (l1word2 == "cat" || l1word2 == "act") {
            cout<<"                                      1. "<<l1word1<<endl;
            cout<<"                                      2. "<<l1word2<<endl;
            cout<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 1 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level :"<<score<<endl;
            break;
                
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		level1();
        		break;
        			case 'n':{
        				system("cls");
        				main();
        				break;
						}
		}
    }
    char ans1;
		char playername[100];
		cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 2                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level2();	
					break;
						case'r':
						case'R':
							system("cls");
							level1();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level1score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										break;					
			}
}
void level2(){
	int tries = 5,score=0;
	system("cls");
	cout<<endl;
	cout<<endl;	
	cout<<termcolor::bright_red<<endl;
	cout<<"                                 [Wellcome to Level 2]                               "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are Three Words to guess:                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          N                                          "<<endl;
	cout<<"                                       O     W                                       "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                             Enter The Possible Words !                              "<<endl;
	string l2word1, l2word2,l2word3;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l2word1);
        if (l2word1 == "won" || l2word1 == "now"|| l2word1=="own") {
            cout<<"                                      1. "<<l2word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l2word2);
        if (l2word2 == "won" || l2word2 == "now"|| l2word2=="own") {
            cout<<"                                      1. "<<l2word1<<endl;
            cout<<"                                      2. "<<l2word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l2word3);
        if (l2word3 == "won" || l2word3 == "now"|| l2word3=="own") {
            cout<<"                                      1. "<<l2word1<<endl;
            cout<<"                                      2. "<<l2word2<<endl;
            cout<<"                                      3. "<<l2word3<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 2 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 2 :"<<score<<endl;
            cout<<endl;
            break;
                
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		level2();
        			case 'n':
        			exit(EXIT_SUCCESS) ;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 3                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level3();
					break;
						case'r':
						case'R':
							system("cls");
							level2();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level2score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										break;		
			}
}
void level3(){
		int tries = 10,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 3]                                "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          D                                          "<<endl;
	cout<<"                                       R     P                                       "<<endl;
	cout<<"                                          I                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                           Enter The Possible Words !                                "<<endl;
	string l3word1, l3word2,l3word3,l3word4;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l3word1);
        if (l3word1 == "drip" || l3word1 == "rip"|| l3word1=="dip"||l3word1=="rid") {
            cout<<"                                      1. "<<l3word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l3word2);
        if (l3word2 == "drip" || l3word2 == "rip"|| l3word2=="dip"||l3word2=="rid") {
            cout<<"                                      1. "<<l3word1<<endl;
            cout<<"                                      2. "<<l3word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l3word3);
        if (l3word3 == "drip" || l3word3 == "rip"|| l3word3=="dip"||l3word3=="rid") {
            cout<<"                                      1. "<<l3word1<<endl;
            cout<<"                                      2. "<<l3word2<<endl;
            cout<<"                                      3. "<<l3word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l3word4);
        if (l3word4 == "drip" || l3word4 == "rip"|| l3word4=="dip"||l3word4=="rid") {
            cout<<"                                      1. "<<l3word1<<endl;
            cout<<"                                      2. "<<l3word2<<endl;
            cout<<"                                      3. "<<l3word3<<endl;
            cout<<"                                      4. "<<l3word4<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 3 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 3 :"<<score<<endl;
            cout<<endl;
            break;
                
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level3();
        			case 'n':
        			exit(EXIT_SUCCESS) ;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 4                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level4();
					break;
						case'r':
						case'R':
							system("cls");
							level3();
							break;
								case 'M':
								case 'm':							
								system("cls");	
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level3score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										break;		
			}
	
}
void level4(){
		int tries = 10,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                 [Wellcome to Level 4]                               "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          R                                          "<<endl;
	cout<<"                                       F     A                                       "<<endl;
	cout<<"                                          I                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l4word1, l4word2,l4word3,l4word4;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l4word1);
        if (l4word1 == "fir" || l4word1 == "fair"|| l4word1=="far"||l4word1=="air") {
            cout<<"                                      1. "<<l4word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l4word2);
        if (l4word2 == "fir" || l4word2 == "fair"|| l4word2=="far"||l4word2=="air") {
            cout<<"                                      1. "<<l4word1<<endl;
            cout<<"                                      2. "<<l4word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l4word3);
        if (l4word3 == "fir" || l4word3 == "fair"|| l4word3=="far"||l4word3=="air") {
            cout<<"                                      1. "<<l4word1<<endl;
            cout<<"                                      2. "<<l4word2<<endl;
            cout<<"                                      3. "<<l4word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l4word4);
        if (l4word4 == "fir" || l4word4 == "fair"|| l4word4=="far"||l4word4=="air") {
            cout<<"                                      1. "<<l4word1<<endl;
            cout<<"                                      2. "<<l4word2<<endl;
            cout<<"                                      3. "<<l4word3<<endl;
            cout<<"                                      4. "<<l4word4<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 4 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 4 :"<<score<<endl;
            cout<<endl;
            break;
                
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level4();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 5                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level5();
					break;
						case'r':
						case'R':
							system("cls");
							level4();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level4score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
}
void level5(){
				int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 5]                                "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          O                                          "<<endl;
	cout<<"                                       U     T                                       "<<endl;
	cout<<"                                          N                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l5word1, l5word2,l5word3,l5word4,l5word5;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l5word1);
        if (l5word1 == "unto"|| l5word1=="not"||l5word1=="nut"|| l5word1=="out"||l5word1=="ton") {
            cout<<"                                      1. "<<l5word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l5word2);
        if(l5word2 == "unto"|| l5word2=="not"||l5word2=="nut"|| l5word2=="out"||l5word2=="ton") {
            cout<<"                                      1. "<<l5word2<<endl;
            cout<<"                                      2. "<<l5word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l5word3);
        if(l5word3 == "unto"|| l5word3=="not"||l5word3=="nut"|| l5word3=="out"||l5word3=="ton") {
            cout<<"                                      1. "<<l5word1<<endl;
            cout<<"                                      2. "<<l5word2<<endl;
            cout<<"                                      3. "<<l5word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l5word4);
        if(l5word4 == "unto"|| l5word4=="not"||l5word4=="nut"|| l5word4=="out"||l5word4=="ton") {
            cout<<"                                      1. "<<l5word1<<endl;
            cout<<"                                      2. "<<l5word2<<endl;
            cout<<"                                      3. "<<l5word3<<endl;
            cout<<"                                      4. "<<l5word4<<endl;
            score=score+10;
            cout<<"Four Words are guessed Correctly, only two are remaining now."<<endl;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l5word5);
        if (l5word5 == "unto"|| l5word5=="not"||l5word5=="nut"|| l5word5=="out"||l5word5=="ton") {
            cout<<"                                      1. "<<l5word1<<endl;
            cout<<"                                      2. "<<l5word2<<endl;
            cout<<"                                      3. "<<l5word3<<endl;
            cout<<"                                      4. "<<l5word4<<endl;
            cout<<"                                      5. "<<l5word5<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 5 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 5 :"<<score<<endl;
            cout<<endl;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level5();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 6                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level6();
					break;
						case'r':
						case'R':
							system("cls");
							level5();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level5score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
}
void level6(){
	int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                 [Wellcome to Level 6]                               "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are SIX Words to guess:                                            "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          D                                          "<<endl;
	cout<<"                                       E     T                                       "<<endl;
	cout<<"                                          N                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l6word1,l6word2,l6word3,l6word4,l6word5,l6word6;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l6word1);
        if (l6word1 == "end" || l6word1 == "den"|| l6word1=="tend"||l6word1=="dent"|| l6word1=="net"||l6word1=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l6word2);
        if (l6word2 == "end" || l6word2 == "den"|| l6word2=="tend"||l6word2=="dent"|| l6word2=="net"||l6word2=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"                                      2. "<<l6word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l6word3);
        if (l6word3 == "end" || l6word3 == "den"|| l6word3=="tend"||l6word3=="dent"|| l6word3=="net"||l6word3=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"                                      2. "<<l6word2<<endl;
            cout<<"                                      3. "<<l6word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l6word4);
        if (l6word4 == "end" || l6word4 == "den"|| l6word4=="tend"||l6word4=="dent"|| l6word4=="net"||l6word4=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"                                      2. "<<l6word2<<endl;
            cout<<"                                      3. "<<l6word3<<endl;
            cout<<"                                      4. "<<l6word4<<endl;
            score=score+10;
            cout<<"Four Words are guessed Correctly, only two are remaining now."<<endl;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l6word5);
        if (l6word4 == "end" || l6word5 == "den"|| l6word5=="tend"||l6word5=="dent"|| l6word5=="net"||l6word5=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"                                      2. "<<l6word2<<endl;
            cout<<"                                      3. "<<l6word3<<endl;
            cout<<"                                      4. "<<l6word4<<endl;
            cout<<"                                      5. "<<l6word5<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l6word6);
        if (l6word6 == "end" || l6word6 == "den"|| l6word6=="tend"||l6word6=="dent"|| l6word6=="net"||l6word6=="ten") {
            cout<<"                                      1. "<<l6word1<<endl;
            cout<<"                                      2. "<<l6word2<<endl;
            cout<<"                                      3. "<<l6word3<<endl;
            cout<<"                                      4. "<<l6word4<<endl;
            cout<<"                                      5. "<<l6word5<<endl;
            cout<<"                                      6. "<<l6word6<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 6 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 6 :"<<score<<endl;
            cout<<endl;
            break;          
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level6();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 7                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level7();
					break;
						case'r':
						case'R':
							system("cls");
							level6();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level6score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
	
}
void level7(){
	int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 7]                                "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          N                                          "<<endl;
	cout<<"                                       R     B                                       "<<endl;
	cout<<"                                          A                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l7word1, l7word2,l7word3,l7word4,l7word5,l7word6;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l7word1);
        if (l7word1 == "nab" || l7word1 == "ban"|| l7word1=="bar"|| l7word1=="bran"||l7word1=="barn"||l7word1=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l7word2);
        if (l7word2 == "nab" || l7word2 == "ban"|| l7word2=="bar"|| l7word2=="bran"||l7word2=="barn"||l7word2=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"                                      2. "<<l7word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l7word3);
        if (l7word3 == "nab" || l7word3 == "ban"|| l7word3=="bar"|| l7word3=="bran"||l7word3=="barn"||l7word3=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"                                      2. "<<l7word2<<endl;
            cout<<"                                      3. "<<l7word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l7word4);
        if (l7word4 == "nab" || l7word4 == "ban"|| l7word4=="bar"|| l7word4=="bran"||l7word4=="barn"||l7word4=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"                                      2. "<<l7word2<<endl;
            cout<<"                                      3. "<<l7word3<<endl;
            cout<<"                                      4. "<<l7word4<<endl;
            score=score+10;
            cout<<"Four Words are guessed Correctly, only two are remaining now."<<endl;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l7word5);
        if(l7word5 == "nab" || l7word5 == "ban"|| l7word5=="bar"|| l7word5=="bran"||l7word5=="barn"||l7word5=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"                                      2. "<<l7word2<<endl;
            cout<<"                                      3. "<<l7word3<<endl;
            cout<<"                                      4. "<<l7word4<<endl;
            cout<<"                                      5. "<<l7word5<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l7word6);
        if (l7word6 == "nab" || l7word6 == "ban"|| l7word6=="bar"|| l7word6=="bran"||l7word6=="barn"||l7word6=="ran") {
            cout<<"                                      1. "<<l7word1<<endl;
            cout<<"                                      2. "<<l7word2<<endl;
            cout<<"                                      3. "<<l7word3<<endl;
            cout<<"                                      4. "<<l7word4<<endl;
            cout<<"                                      5. "<<l7word5<<endl;
            cout<<"                                      6. "<<l7word6<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 7 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 7 :"<<score<<endl;
            cout<<endl;
            break;          
        } else {
            cout<<"6. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level7();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 8                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level8();
					break;
						case'r':
						case'R':
							system("cls");
							level7();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level7score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
}
void level8(){
	int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 8]                                "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          D                                          "<<endl;
	cout<<"                                       R     U                                       "<<endl;
	cout<<"                                        G   E                                        "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l8word1, l8word2,l8word3,l8word4,l8word5,l8word6,l8word7,l8word8;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l8word1);
        if (l8word1 == "dug" || l8word1 == "drug"|| l8word1=="urge"|| l8word1=="urged"||l8word1=="due"||l8word1=="rug"||l8word1=="red"||l8word1=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word2);
        if (l8word2 == "dug" || l8word2 == "drug"|| l8word2=="urge"|| l8word2=="urged"||l8word2=="due"||l8word2=="rug"||l8word2=="red"||l8word2=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word3);
        if (l8word3 == "dug" || l8word3 == "drug"|| l8word3=="urge"|| l8word3=="urged"||l8word3=="due"||l8word3=="rug"||l8word3=="red"||l8word3=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word4);
        if (l8word4 == "dug" || l8word4 == "drug"|| l8word4=="urge"|| l8word4=="urged"||l8word4=="due"||l8word4=="rug"||l8word4=="red"||l8word4=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            cout<<"                                      4. "<<l8word4<<endl;
            score=score+10;
            cout<<"Four Words are guessed Correctly, only two are remaining now."<<endl;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word5);
        if(l8word5 == "dug" || l8word5 == "drug"|| l8word5=="urge"|| l8word5=="urged"||l8word5=="due"||l8word5=="rug"||l8word5=="red"||l8word5=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            cout<<"                                      4. "<<l8word4<<endl;
            cout<<"                                      5. "<<l8word5<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word6);
        if (l8word6 == "dug" || l8word6 == "drug"|| l8word6=="urge"|| l8word6=="urged"||l8word6=="due"||l8word6=="rug"||l8word6=="red"||l8word6=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            cout<<"                                      4. "<<l8word4<<endl;
            cout<<"                                      5. "<<l8word5<<endl;
            cout<<"                                      6. "<<l8word6<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"6. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word7);
        if (l8word7 == "dug" || l8word7 == "drug"|| l8word7=="urge"|| l8word7=="urged"||l8word7=="due"||l8word7=="rug"||l8word7=="red"||l8word7=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            cout<<"                                      4. "<<l8word4<<endl;
            cout<<"                                      5. "<<l8word5<<endl;
            cout<<"                                      6. "<<l8word6<<endl;
            cout<<"                                      7. "<<l8word7<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"7. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    } 
		while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l8word8);
        if (l8word8 == "dug" || l8word8 == "drug"|| l8word8=="urge"|| l8word8=="urged"||l8word8=="due"||l8word8=="rug"||l8word8=="red"||l8word8=="rude") {
            cout<<"                                      1. "<<l8word1<<endl;
            cout<<"                                      2. "<<l8word2<<endl;
            cout<<"                                      3. "<<l8word3<<endl;
            cout<<"                                      4. "<<l8word4<<endl;
            cout<<"                                      5. "<<l8word5<<endl;
            cout<<"                                      6. "<<l8word6<<endl;
            cout<<"                                      7. "<<l8word7<<endl;
            cout<<"                                      8. "<<l8word8<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 8 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 8 :"<<score<<endl;
            cout<<endl;
            break;           
        } else {
            cout<<"8. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level8();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    	cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 9                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level9();
					break;
						case'r':
						case'R':
							system("cls");
							level8();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level8score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
	
}
void level9(){
		int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 9]                               "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are TEN Words to guess:                                            "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          T                                          "<<endl;
	cout<<"                                       W     S                                       "<<endl;
	cout<<"                                        R   A                                        "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                              Enter The Possible Words !                             "<<endl;
	string l9word1,l9word2,l9word3,l9word4,l9word5,l9word6,l9word7,l9word8,l9word9,l9word10;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l9word1);
        if (l9word1 == "was" || l9word1 == "war"|| l9word1=="wars"||l9word1=="arts"|| l9word1=="saw"||l9word1=="straw"||l9word1=="star"||l9word1=="rat"||l9word1=="rats"||l9word1=="art"||l9word1=="sat"||l9word1=="raw"||l9word1=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word2);
        if (l9word2 == "was" || l9word2 == "war"|| l9word2=="wars"||l9word2=="arts"|| l9word2=="saw"||l9word2=="straw"||l9word2=="star"||l9word2=="rat"||l9word2=="rats"||l9word2=="art"||l9word2=="sat"||l9word2=="raw"||l9word2=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word3);
        if  (l9word3 == "was" || l9word3 == "war"|| l9word3=="wars"|| l9word3=="arts"||l9word3=="saw"||l9word3=="straw"||l9word3=="star"||l9word3=="rat"||l9word3=="rats"||l9word3=="art"||l9word3=="sat"||l9word3=="raw"||l9word3=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word4);
        if  (l9word4 == "was" || l9word4 == "war"|| l9word4=="wars"|| l9word4=="arts"||l9word4=="saw"||l9word4=="straw"||l9word4=="star"||l9word4=="rat"||l9word4=="rats"||l9word4=="art"||l9word4=="sat"||l9word4=="raw"||l9word4=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            score=score+10;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word5);
        if (l9word5 == "was" || l9word5 == "war"|| l9word5=="wars"|| l9word5=="arts"||l9word5=="saw"||l9word5=="straw"||l9word5=="star"||l9word5=="rat"||l9word5=="rats"||l9word5=="art"||l9word5=="sat"||l9word5=="raw"||l9word5=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word6);
        if (l9word6 == "was" || l9word6 == "war"|| l9word6=="wars"|| l9word6=="arts"||l9word6=="saw"||l9word6=="straw"||l9word6=="star"||l9word6=="rat"||l9word6=="rats"||l9word6=="art"||l9word6=="sat"||l9word6=="raw"||l9word6=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            cout<<"                                      6. "<<l9word6<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"6. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word7);
        if (l9word7 == "was" || l9word7 == "war"|| l9word7=="wars"||l9word7=="arts"|| l9word7=="saw"||l9word7=="straw"||l9word7=="star"||l9word7=="rat"||l9word7=="rats"||l9word7=="art"||l9word7=="sat"||l9word7=="raw"||l9word7=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            cout<<"                                      6. "<<l9word6<<endl;
            cout<<"                                      7. "<<l9word7<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"7. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    } 
		while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word8);
        if (l9word8 == "was" || l9word8 == "war"|| l9word8=="wars"||l9word8=="arts"|| l9word8=="saw"||l9word8=="straw"||l9word8=="star"||l9word8=="rat"||l9word8=="rats"||l9word8=="art"||l9word8=="sat"||l9word8=="raw"||l9word8=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            cout<<"                                      6. "<<l9word6<<endl;
            cout<<"                                      7. "<<l9word7<<endl;
            cout<<"                                      8. "<<l9word8<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"8. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word9);
        if (l9word9 == "was" || l9word9 == "war"|| l9word9=="wars"|| l9word9=="arts"||l9word9=="saw"||l9word9=="straw"||l9word9=="star"||l9word9=="rat"||l9word9=="rats"||l9word9=="art"||l9word9=="sat"||l9word9=="raw"||l9word9=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            cout<<"                                      6. "<<l9word6<<endl;
            cout<<"                                      7. "<<l9word7<<endl;
            cout<<"                                      8. "<<l9word8<<endl;
            cout<<"                                      9. "<<l9word9<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"9. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l9word10);
        if (l9word10 == "was" || l9word10 == "war"|| l9word10=="wars"|| l9word10=="arts"||l9word10=="saw"||l9word10=="straw"||l9word10=="star"||l9word10=="rat"||l9word10=="rats"||l9word10=="art"||l9word10=="sat"||l9word10=="raw"||l9word10=="swat") {
            cout<<"                                      1. "<<l9word1<<endl;
            cout<<"                                      2. "<<l9word2<<endl;
            cout<<"                                      3. "<<l9word3<<endl;
            cout<<"                                      4. "<<l9word4<<endl;
            cout<<"                                      5. "<<l9word5<<endl;
            cout<<"                                      6. "<<l9word6<<endl;
            cout<<"                                      7. "<<l9word7<<endl;
            cout<<"                                      8. "<<l9word8<<endl;
            cout<<"                                      9. "<<l9word9<<endl;
            cout<<"                                      10. "<<l9word10<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                Level 9 is Completed.                                "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 9 :"<<score<<endl;
            cout<<endl;
            break;           
        } else {
            cout<<"10. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level9();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
    char ans1;
		char playername[100];
    cout<<endl;
		cout<<"                                                                                     "<<endl;
    	cout<<"                            Type [N] to go to Level 10                                "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
				case'n':
				case'N':
					system("cls");
					level10();
					break;
						case'r':
						case'R':
							system("cls");
							level9();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level9score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout << "\rLoading.  " << flush;
        										delay(500);
       											cout << "\rLoading.. " << flush;
        										delay(500);
        										cout << "\rLoading... " << flush;
        										delay(500);
        										cout << "\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
	
}
void level10(){
	int tries = 5,score=0;
	system("cls");
	cout<<termcolor::bright_red<<endl;
	cout<<"                                [Wellcome to Level 10]                               "<<endl;
	cout<<endl;
	cout<<"      [ ! ] There are four Words to guess:                                           "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                          R                                          "<<endl;
	cout<<"                                       E     V                                       "<<endl;
	cout<<"                                       L     O                                       "<<endl;
	cout<<"                                          T                                          "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<"                                                                                     "<<endl;
	cout<<termcolor::reset<<endl;
	cout<<"                             Enter The Possible Words !                              "<<endl;
	string l10word1,l10word2,l10word3,l10word4,l10word5,l10word6,l10word7,l10word8,l10word9,l10word10,l10word11,l10word12;
    while (tries >0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        getline(cin, l10word1);
        if (l10word1 == "revolt" || l10word1 == "lover"|| l10word1=="overt"|| l10word1=="voter"||l10word1=="vote"||l10word1=="love"||l10word1=="ovel"||l10word1=="over"||l10word1=="role"||l10word1=="volt"||l10word1=="lot"||l10word1=="tore"||l10word1=="ore"||l10word1=="toe"||l10word1=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"Good ! Enter the next word."<<endl;
            score=score+10;
            break;
        } else {
            cout<<"1. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }

    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word2);
        if (l10word2 == "revolt" || l10word2 == "lover"|| l10word2=="overt"|| l10word2=="voter"||l10word2=="vote"||l10word2=="love"||l10word2=="ovel"||l10word2=="over"||l10word2=="role"||l10word2=="volt"||l10word2=="lot"||l10word2=="tore"||l10word2=="ore"||l10word2=="toe"||l10word2=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            score=score+10;  
			break;    
        } else {
            cout<<"2. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word3);
        if  (l10word3 == "revolt" || l10word3 == "lover"|| l10word3=="overt"|| l10word3=="voter"||l10word3=="vote"||l10word3=="love"||l10word3=="ovel"||l10word3=="over"||l10word3=="role"||l10word3=="volt"||l10word3=="lot"||l10word3=="tore"||l10word3=="ore"||l10word3=="toe"||l10word3=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"3. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word4);
        if  (l10word4 == "revolt" || l10word4 == "lover"|| l10word4=="overt"|| l10word4=="voter"||l10word4=="vote"||l10word4=="love"||l10word4=="ovel"||l10word4=="over"||l10word4=="role"||l10word4=="volt"||l10word4=="lot"||l10word4=="tore"||l10word4=="ore"||l10word4=="toe"||l10word4=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            score=score+10;
            cout<<"Four Words are guessed Correctly, only two are remaining now."<<endl;
            break;
        } else {
            cout<<"4. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word5);
        if (l10word5 == "revolt" || l10word5 == "lover"|| l10word5=="overt"|| l10word5=="voter"||l10word5=="vote"||l10word5=="love"||l10word5=="ovel"||l10word5=="over"||l10word5=="role"||l10word5=="volt"||l10word5=="lot"||l10word5=="tore"||l10word5=="ore"||l10word5=="toe"||l10word5=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"5. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word6);
        if(l10word6 == "revolt" || l10word6 == "lover"|| l10word6=="overt"|| l10word6=="voter"||l10word6=="vote"||l10word6=="love"||l10word6=="ovel"||l10word6=="over"||l10word6=="role"||l10word6=="volt"||l10word6=="lot"||l10word6=="tore"||l10word6=="ore"||l10word6=="toe"||l10word6=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"6. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word7);
        if (l10word7 == "revolt" || l10word7 == "lover"|| l10word7=="overt"|| l10word7=="voter"||l10word7=="vote"||l10word7=="love"||l10word7=="ovel"||l10word7=="over"||l10word7=="role"||l10word7=="volt"||l10word7=="lot"||l10word7=="tore"||l10word7=="ore"||l10word7=="toe"||l10word7=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"7. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    } 
		while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word8);
        if (l10word8 == "revolt" || l10word8 == "lover"|| l10word8=="overt"|| l10word8=="voter"||l10word8=="vote"||l10word8=="love"||l10word8=="ovel"||l10word8=="over"||l10word8=="role"||l10word8=="volt"||l10word8=="lot"||l10word8=="tore"||l10word8=="ore"||l10word8=="toe"||l10word8=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            cout<<"                                      8. "<<l10word8<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"8. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word9);
        if (l10word9 == "revolt" || l10word9 == "lover"|| l10word9=="overt"|| l10word9=="voter"||l10word9=="vote"||l10word9=="love"||l10word9=="ovel"||l10word9=="over"||l10word9=="role"||l10word9=="volt"||l10word9=="lot"||l10word9=="tore"||l10word9=="ore"||l10word9=="toe"||l10word9=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            cout<<"                                      8. "<<l10word8<<endl;
            cout<<"                                      9. "<<l10word9<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"9. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    	while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word10);
        if (l10word10 == "revolt" || l10word10 == "lover"|| l10word10=="overt"|| l10word10=="voter"||l10word10=="vote"||l10word10=="love"||l10word10=="ovel"||l10word10=="over"||l10word10=="role"||l10word10=="volt"||l10word10=="lot"||l10word10=="tore"||l10word10=="ore"||l10word10=="toe"||l10word10=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            cout<<"                                      8. "<<l10word8<<endl;
            cout<<"                                      9. "<<l10word9<<endl;
            cout<<"                                      10. "<<l10word10<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"10. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word11);
        if (l10word11 == "revolt" || l10word11 == "lover"|| l10word11=="overt"|| l10word11=="voter"||l10word11=="vote"||l10word11=="love"||l10word11=="ovel"||l10word11=="over"||l10word11=="role"||l10word11=="volt"||l10word11=="lot"||l10word11=="tore"||l10word11=="ore"||l10word11=="toe"||l10word11=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            cout<<"                                      8. "<<l10word8<<endl;
            cout<<"                                      9. "<<l10word9<<endl;
            cout<<"                                      10. "<<l10word10<<endl;
            cout<<"                                      11. "<<l10word11<<endl;
            score=score+10;
            break;           
        } else {
            cout<<"11. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
    while (tries > 0) {
        cout<<setw(80)<<"TRIES LEFT: "<<tries<<endl;
        cout<<setw(75)<<"Score: "<<score<<endl;
        cout<<"Enter Next Word."<<endl;
        getline(cin, l10word12);
        if (l10word12 == "revolt" || l10word12 == "lover"|| l10word12=="overt"|| l10word12=="voter"||l10word12=="vote"||l10word12=="love"||l10word12=="ovel"||l10word12=="over"||l10word12=="role"||l10word12=="volt"||l10word12=="lot"||l10word12=="tore"||l10word12=="ore"||l10word12=="toe"||l10word12=="let") {
            cout<<"                                      1. "<<l10word1<<endl;
            cout<<"                                      2. "<<l10word2<<endl;
            cout<<"                                      3. "<<l10word3<<endl;
            cout<<"                                      4. "<<l10word4<<endl;
            cout<<"                                      5. "<<l10word5<<endl;
            cout<<"                                      6. "<<l10word6<<endl;
            cout<<"                                      7. "<<l10word7<<endl;
            cout<<"                                      8. "<<l10word8<<endl;
            cout<<"                                      9. "<<l10word9<<endl;
            cout<<"                                      10. "<<l10word10<<endl;
            cout<<"                                      11. "<<l10word11<<endl;
            cout<<"                                      12. "<<l10word12<<endl;
            score=score+10;
            cout<<"                                                                                     "<<endl;
            cout<<termcolor::bright_blue<<"                                  Level 10 is Completed.                               "<<termcolor::reset<<endl;
            cout<<"                               Total Score in Level 10 :"<<score<<endl;
            cout<<termcolor::bright_blue<<"                         Congratulations On Completing the Game !                        "<<termcolor::reset<<endl;
            cout<<endl;
            cout<<endl;
            break;           
        } else {
            cout<<"12. Incorrect guess. Try different!"<<endl;
            tries--;
            score=score-2;
        }
    }
        if (tries == 0) {
    	char ans2;
		cout<<"                                                                                     "<<endl;
		cout<<"                         No tries left. The game ends here.                          "<<endl;
        cout<<"                          Do you want to Continue ? [Y/N]                            "<<endl;
		cin>>ans2;
		cin.ignore();
		switch(ans2){
        	case 'y':
        		system("cls");
        		level10();
        			case 'n':
        				exit(EXIT_SUCCESS);
        			break;
        			 default:
                cout << "Invalid option. Exiting the game." << endl;
                exit(EXIT_FAILURE);
                break;
		}
    }
	cout<<"                                                                                     "<<endl;
    cout<<"                           THANK YOU PLAYING WORD RUSH                               "<<endl;
    delay(500);
    cout<<setw(50)<<"CREDITS"<<endl;
    delay(500);
    cout<<"                              About Word Rush                                 "<<endl;
    delay(500);
	cout<<"                            Version : 1.000.0                                 "<<endl;
	delay(500);
	cout<<"                           Programming Language Used : C++                    "<<endl;
	delay(500);
	cout<<"                            Creators : Muhammad Atif                          "<<endl;
	delay(500);
	cout<<"                                       Fazeel Mushtaq                         "<<endl;
	delay(500);
	cout<<"                                       Abdullah Irshad                        "<<endl;
	delay(500);
	cout<<"                                       Abdullah Zafar                         "<<endl;
	delay(500);
	cout<<"                                       Muneeb Ali                             "<<endl;
	delay(500);
	cout<<"                                       Subtain Ali                            "<<endl;
    char ans1;
		char playername[100];
        cout<<endl;
		cout<<"                                                                                     "<<endl;
        cout<<"                         Type [R] to restart this Level"<<endl;
        cout<<"                          Type [M] to go to Main Menu"<<endl;
        cout<<"                    Type [E] to save score and Exit the Game "<<endl;
        cin>>ans1;
        cin.ignore();
			switch(ans1){
						case'r':
						case'R':
							level10();
							break;
								case'm':
								case'M':
									system("cls");
									main();
									break;	
										case'e':
										case'E':{
											cout<<"Enter Your Name "<<endl;
											cin.get(playername,100);
											ofstream svscore;
											svscore.open("level10score.txt",ios::app);
											svscore<<"Player Name: "<<playername<<"     "<<"Score: "<<score<<endl;
											svscore.close();
											cout<<setw(50)<<"Your Score is beaing Saved..."<<endl;
											delay(1000);
											cout<<setw(50)<<"Your Score has been Saved Successfully. "<<endl;
											for (int i = 0; i < 3; ++i) {
        										cout <<"\rLoading.  " << flush;
        										delay(500);
       											cout <<"\rLoading.. " << flush;
        										delay(500);
        										cout <<"\rLoading... " << flush;
        										delay(500);
        										cout <<"\r" << flush;
    											}
    											cout<<endl;
    										for (int i = 5; i >= 0; --i) {
        									cout <<"\rThe Game is Exiting in "<< i << flush;
        									delay(1000);
    											}
    										cout << "\r0" << flush;
											exit(EXIT_SUCCESS);	
										}
										default:
										cout<<"Please Select Valid Option !"<<endl;		
										exit(EXIT_FAILURE);								
			}
}
