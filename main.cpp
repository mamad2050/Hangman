#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;
int t=0;
int co=0;
string newblanks[20];
string explanations [20];
double newdif[20];
string newwords[20];
int newlength[20];
int z=0;
int c=0;
int r=0;
int C=0;
// defult words
string ready[20] = {"umbrella", "ferrari", "france", "southafrica", "russia", "expensive",
                        "zidane", "gasoline", "breakfast", "pride", "lawyer", "neighbour", "copper",
                        "japan", "restaurant", "google", "programmer", "football", "telegram", "church"} ;
// defult descriptions                        
string  dess[20]={
"We used that in rainy weather ?",
"A car company in italy ?",
"The fifa world cup 2018 champion ?",
"World cup 2010  host ?",
"The biggest country in world ?",
"Costing a lot of money ?",
"Head coach of real madrid ? ",
"A kind of fuel for car ?",
"The first meal in the day ?",
"The most abundant car model in iran :) ?",
"A person who practises or studies law ?",
"A person situated adjacently or nearby ? ",
"Is a chemical element with the symbol (Cu) ?",
"The host of olympic 2020 ? ",
"A place where people pay to sit and eat meals ?",
"The most powerful internet searcher ?",
"Is a person who creates computer software ?",
"The most popular sport in the world ?",
"The most popular messenger in iran ?",
"The place of worship of christians ?",};
//setcolor func
void setColor(unsigned short color) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}
// go to x,y func
void gotoxy(int column, int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;

    SetConsoleCursorPosition(
            GetStdHandle(STD_OUTPUT_HANDLE),
            coord
    );
}
string newdesc();
// caculate difficutly
int difficutly(string w, int length);
// menu avvalie
void firstmenu();
// ghaleb words list
void listofwords(string [], double []);
//publish word list
void wl();
//add words func

// start with difult words 
void start();
// func asliiiiiiiiiiii
int main() {
char ch;
    string words[20];
    string status[20];
    int fault;
    double difficulty;
    int gem;

    while (1) {
        firstmenu();
        gotoxy(65, 27);
        cout << "  * Select the option you want *:" << endl;
        
        int x;
        cin >> x;
        
        switch (x) {
        	
            case 1 :
                start();
                break;
                
            case 2 :
            	{
				
            	// add words 
            	system("cls");
            	int j=0;
                   for (int i=0 ; i < 20  ; i++ ) {
                   	if(co>i){
                   		i+=co;
					   }
                   	setColor(3);
    	cout<<"         Description  And Word  "<<"("<<i+1<<")"<<endl;
    	setColor(7);
    	cout<<"------------------------------------------"<<endl;
    	
    	cout<<"Description : ";
 	    explanations[i]=newdesc();
        cout<< "Word : " ;
		cin >> newwords[i];
		co++;
		cout<< "Word With Blank : ";
		cin>>newblanks[i];
        newlength[i] = newwords[i].length();
        newdif[i] = difficutly(newwords[i], newlength[i]);
        j++;
        z++;
        system("cls");
        cout<<"Press (+) for Continue and Press (-) for End :"<<endl;
        cin>>ch;
        system("cls");
        if(ch=='-'){
        	break;
		}
    }
//char c;
//cout<<"Press (#) To See the Added Words and Press (&) To Return To Main Menu :"<<endl;
//cin>>c;

//if(c=='#'){
setColor(3);
        cout<< "                                                                        New Words List "<<endl;
        setColor(7);
        cout<< "                                                        --------------------------------------------------"<<endl;
	for (int i = 0   ; i < j ; i++,C++) {
		cout<<"                                                        "<<i+1<<" ."<<endl;
    	cout<<"                                                              Description : "<< explanations [i] <<endl;
        cout<<"                                                              Word : "<< newwords[i]<<endl;
        //
         if (newdif[i] <= 10) {
            cout << "                                                              Status : ";
            setColor(6);   
            cout << "Easy" << endl;
            setColor(7);
        } else if (newdif[i] >= 20) {

            cout << "                                                              Status : ";
            setColor(4);
            cout << "Hard" << endl;
            setColor(7);
        } else if (newdif[i] > 10 && newdif[i] < 20) {

            cout << "                                                              Status : ";
            setColor(3);
            cout << "Medium" << endl;
            setColor(7);
        }

        //
		cout<<endl;
		cout<< "                                                        --------------------------------------------------"<<endl;
    }
        cout<<"                                                                 Press (&) To Back To Main Menu :"<<endl;    
//}
//if(ch=='&'){
//system("cls");
//firstmenu();	
//}
break;
}


    case 3:
            	system("cls");
    wl();
    break;

    case 4: 
        system("cls");
        
    return 0;
    break;
        }
      
cin>>ch;
if(ch=='e'){
	
break;	
}

//if(ch=='r'){
	system("cls");
	firstmenu();
//}

    }

    return 0;
}
 
// mohasebe difficutly kalame
int difficutly(string w, int length) {
    double dif = 0;
    int repeat[26] = {};
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int j = 0; j < length; ++j) {
        switch (w[j]) {
            case 'a' :
                repeat[0]++;
                break;
            case 'b' :
                repeat[1]++;
                break;
            case 'c' :
                repeat[2]++;
                break;
            case 'd' :
                repeat[3]++;
                break;
            case 'e' :
                repeat[4]++;
                break;
            case 'f' :
                repeat[5]++;
                break;
            case 'g' :
                repeat[6]++;
                break;
            case 'h' :
                repeat[7]++;
                break;
            case 'i' :
                repeat[8]++;
                break;
            case 'j' :
                repeat[9]++;
                break;
            case 'k' :
                repeat[10]++;
                break;
            case 'l' :
                repeat[11]++;
                break;
            case 'm' :
                repeat[12]++;
                break;
            case 'n' :
                repeat[13]++;
                break;
            case 'o' :
                repeat[14]++;
                break;
            case 'p' :
                repeat[15]++;
                break;
            case 'q' :
                repeat[16]++;
                break;
            case 'r' :
                repeat[17]++;
                break;
            case 's' :
                repeat[18]++;
                break;
            case 't' :
                repeat[19]++;
                break;
            case 'u' :
                repeat[20]++;
                break;
            case 'v' :
                repeat[21]++;
                break;
            case 'w' :
                repeat[22]++;
                break;
            case 'x' :
                repeat[23]++;
                break;
            case 'y' :
                repeat[24]++;
                break;
            case 'z' :
                repeat[25]++;
                break;
        }
    }
    // calculate different char in word
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        if (repeat[i] != 0) {
            count++;
        }
    }
    // letters separation
    char ch[count];
    int n[count];
    int g = 0;
    for (int k = 0; k < 26; ++k) {
        if (repeat[k] != 0) {
            ch[g] = alphabet[k];
            n[g] = repeat[k];
            g++;
        }
    }

//value of char
    int value[count];
    for (int l = 0; l < count; ++l) {
        if (ch[l] >= 'a' && ch[l] <= 'o') {
            value[l] = 1;
        } else {
            value[l] = 2;
        }
    }
//    cout << "char" << "     " << "repeat" << "       " << "value" << endl;
//    for (int m = 0; m < count; ++m) {
//        cout << ch[m] << "          " << n[m] << "            " << value[m] << endl;
//    }
//    cout << endl;

//claculate difficutly
    double l2 = length * length;
    double numerator = 0;
    for (int i = 0; i < count; ++i) {
        numerator += (n[i] * n[i] * value[i]);

    }

    double f = numerator / length;
    dif = (l2 * count * f) / 26;


    // cout << "difficutly :" << endl;
    return dif;

}
// menu avvaliee
void firstmenu() {
	system("cls");
    gotoxy(55, 15);
    setColor(4);
    cout << "  H        A        N        G        M        A        N" << endl;
    setColor(7);
    gotoxy(55, 16);
    
    cout << "___________________________________________________________" << endl;
    gotoxy(55, 17);
    cout << "|                   M A I N   M E N U                     |" << endl;
    gotoxy(55, 18);
    cout << "|_________________________________________________________|" << endl;
    gotoxy(55, 19);
    cout << "|                                                         |" << endl;
    gotoxy(55, 20);
    cout << "|                     1 .  START                          |" << endl;
    gotoxy(55, 21);
    cout << "|                     2 .  Add Words                      |" << endl;
    gotoxy(55, 22);
    cout << "|                     3 .  Words List                     |" << endl;
    gotoxy(55, 23);
    cout << "|                     4 .  Exit                           |" << endl;
    gotoxy(55, 24);
    cout << "|                                                         |" << endl;
    gotoxy(55, 25);
    cout << "|_________________________________________________________|" << endl;
}
// ghaleb words list
void listofwords(string readyw[], double diffic[], string description[]) {
  
    cout << endl;
    setColor(3);
    cout << "                                                            W  O  R  D  S     L  I  S  T"
         << endl;
      setColor(7);   
    cout<< "                                                  ___________________________________________________________"
        << endl;
        // defult words
    for (int i = 0; i < 20; ++i) {
        cout << "                                                     " << i + 1 << "-" << endl;
        cout << "                                                        Word : " << readyw[i] << endl;
        cout << "                                                        Description : " << description[i] << endl;
        if (diffic[i] <= 10) {
            cout << "                                                        Status : ";
            setColor(6);
            cout << "Easy" << endl;
            setColor(7);
        } else if (diffic[i] >= 20) {

            cout << "                                                        Status : ";
            setColor(4);
            cout << "Hard" << endl;
            setColor(7);
        } else if (diffic[i] > 10 && diffic[i] < 20) {

            cout << "                                                        Status : ";
            setColor(3);
            cout << "Medium" << endl;
            setColor(7);
        }

        cout << endl;

    }
     
	  // view new words
	 
	  
	
	 if(z>0){
	 	r=z;
	 	    for (int i = 0; i < z; ++i) {
        cout << "                                                     " << i + 21 << "-" << endl;
        cout << "                                                        Word : " << newwords[i] << endl;
        cout << "                                                        Description : " << explanations[i] << endl;
        if (newdif[i] <= 10) {
            cout << "                                                        Status : ";
            setColor(6);
            cout << "Easy" << endl;
            setColor(7);
        } else if (newdif[i] >= 20) {

            cout << "                                                        Status : ";
            setColor(4);
            cout << "Hard" << endl;
            setColor(7);
        } else if (newdif[i] > 10 && newdif[i] < 20) {

            cout << "                                                        Status : ";
            setColor(3);
            cout << "Medium" << endl;
            setColor(7);
        }

        cout << endl;

    }
        cout<< "                                                   ___________________________________________________________"
            << endl;
    cout << "                                                                 Press (&) To Back To Main Menu "
         << endl;
	 } 
	 
	 
	   if(z== 0){
	    cout<< "                                                   ___________________________________________________________"
            << endl;
        cout << "                                                                 Press (&) To Back To Main Menu "
         << endl;
	  }
	  
	  
	     
}
// publish word list
void wl() {
	  
    int le[20];
    double d[20];

    //ready descriptions for defult words
    string descript[20];
    for(int i=0 ;i<20 ;i++){
        descript[i]=dess[i];
 
        
    }
    // defult words
    string readywords[20] ;

    for (int i=0 ; i<20 ;i++ ){
        readywords[i]= ready[i];
      
        
    }

    for (int j = 0; j < 20; ++j) {
        le[j] = readywords[j].length();
    }
 
    for (int i = 0; i < 20; ++i) {
        d[i] = difficutly(readywords[i], le[i]);
    }
    
    listofwords(readywords, d, descript);

}
 // add word func
 
 
string newdesc(){
	
	string expl;
	cin.ignore();
    getline(cin,expl);
	return expl;
	
}

// start with difult words 

void start(){
	system("cls");
    string word;
    string ww;
    char ch;
    string  descript[20];
 
    for(int i=0 ;i<20 ;i++){
        descript[i]=dess[i];
         
    }
    // defult words
    string readywords[20] ;
    for(int i=0 ; i<20 ;i++){
        readywords[i]=ready[i];      
    }

    string test [20]={"-mb-----","f--r---","-r--c-","-ou---f--ca","-u--i-a","-x---s---","z-----",
                      "--so-i--","b---k--s-","-r---","--wy--","n----b---","-op---","-a---",
                      "r----u--n-","-o---e","p------m-r","-o----l-","-e--g---","c---c-"};

    double dif[20];
    int le[20];
    for (int j = 0; j < 20; ++j) {
        le[j] = readywords[j].length();
    }
    for (int i = 0; i <20 ; ++i) {
        dif[i]= difficutly(readywords[i], le[i]);
    }
    int lvl=1;
    int f=0;
    int Gem=5;
    int s=0;
    
    int sumFault;
    int Fault = 0;
    //    play with defult words  : 
    int foul=0;
    int step_errors = 0;
    int a=0;
   	int sp = 0;
  	int b=0;
  	
	   
    for (int s=0;s<21;s++){
    t=0;
    	//
    
		//
        system("cls");
        a=0;
        foul=0;
        //////
        /////////
        /////////
        ww=readywords[s];
        int l= ww.length();
        char word[l];
        for(int i=0 ; i<l ;i++){
        word[i]=ww[i];
        /////
        //////
        ////////
        }





        // sum of fault
        if(dif[s]<=10){
        	sumFault=3;
		}
		else if(dif[s]>10 && dif[s]<20){
        	sumFault=5;
		}
		 else if(dif[s]>=20){
        	sumFault=7;
		}
		// 
        cout<<endl;
        if(s==20){
            break;
        }
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;  
        cout<<"                                                     Level : "<< lvl <<"             "<<"Gem : "<<Gem<<"     ";
        setColor(4);cout<<"    Max Of Fault : "<< sumFault<<endl;setColor(7);
        lvl++;
        cout<<"                                                     _______________________________________________________"<<endl;
        cout<<"                                                     Word : "<< test[s]<<endl;
        cout<<"                                                     Description : "<<descript[s]<<endl;
        cout<<"                                                     Status : ";
        if (dif[s] <= 10) {

            setColor(6);
            cout << "Easy" << endl;
            setColor(7);
        } else if (dif[s] >= 20) {


            setColor(4);
            cout << "Hard" << endl;
            setColor(7);
        } else if (dif[s] > 10 && dif[s] < 20) {


            setColor(9);
            cout << "Medium" << endl;
            setColor(7);
        }
        cout << endl;
        cout<<"                                                                        Whats your Guess ?"<<endl<<endl;
        
        cout<<"                                                        you can press (?) and get 4 gem for get a tip : "<<endl<<endl;
        cout<<"                                                                       ";
        

		


            char h;
if(sumFault==foul){
	system("cls");
	setColor(4);
	gotoxy(70,16);
	cout<<"G  A  M  E    O  V  E  R " <<endl;
	setColor(7);
	cout<<endl<<endl;
	cout<<"                                                                  Press (&) To Return To Main Menu ";
	cout<<endl; 
	cin>>h;
	if(h=='&'){
	system("cls");
	main();	
	}

}

    //}
//////////////////////////////////////////////////
    t=0;
 for(int k=0 ; t!=ww.length() ; k++){
   	k=0;

    ch =getch();
	          
	 if (ch == word[k] ||ch == word[k+1] ||ch == word[k+2] ||ch == word[k+3] ||
	 ch ==word[k+4]  || ch == word[k+5] ||ch == word[k+6] ||ch == word[k+7]  || 
	 ch== word [k+8] || ch == word[k+9] ||ch == word[k+10] ||ch == word[k+11]  || 
	 ch== word [k+12]|| ch == word[k+13] ||ch == word[k+14] ) {
                setColor(2);
                 t++;

//         cin>>ch;
         char* p = strchr (word, ch);
         int position = p - word+1 ;
         strcpy(&word[position-1],&word[position]);
// cout<<"the result string is :";
//         puts(word); 
                   cout << ch<<" ";
                setColor(7);

            }
// get a tip

			else if (ch=='?' && Gem>=4){

			Gem -= 4 ;
			setColor(2);
			t++;
            cout << word[k]<<" ";

		    char* p = strchr (word, word[k]);
		    
            int position = p - word+1 ;
         
            strcpy(&word[position-1],&word[position]);
            
                setColor(7);
			}
			
			else if(Gem<4 && ch=='?'){
				k--;	
			}
		else  if (ch != word[k] && ch != word[k+1] && ch != word[k+2] &&ch != word[k+3] &&
	 ch != word[k+4] &&ch != word[k+5] &&ch != word[k+6] &&ch != word[k+7]  && 
	 ch!= word [k+8] &&ch != word[k+9] &&ch != word[k+10] &&ch != word[k+11]  && 
	 ch!= word [k+12]&&ch != word[k+13] &&ch != word[k+14] ) {
                setColor(4);
                cout << ch<<" ";
                f++;
                a++;
                foul++;
                setColor(7);
                
            }
            	
			
 char h;
if(sumFault==foul){
	system("cls");
	setColor(4);
	gotoxy(70,16);
	cout<<"G  A  M  E    O  V  E  R " <<endl;
	setColor(7);
	cout<<endl<<endl;
	cout<<"                                                                  Press (&) To Return To Main Menu ";
	cout<<endl; 
	cin>>h;
	if(h=='&'){
	system("cls");
	main();	
	}

}

	 	}
	 	
        Gem+=5;
        if(a>0){
        step_errors++;	
		}
     c= step_errors;
    }

    	//play with new words
if (z>0){
	int u=21;
	t=0;
        int f;
        int newfoul;
        string nw; 
for(int k=0 ; k != z ; k++){
	
	    nw = newwords[k];
        int ll = nw.length();
        
	    char w[ll];
	for(int i=0 ; i<ll ;i++){
        w[i]=nw[i];
        
        }

  		system("cls");
  		b=0;
  		newfoul=0;
  		
  		// sum fault new words
  		if(newdif[k]<=10){
        	sumFault=3;
		}
		else if(newdif[k]>10 && newdif[k]<20){
        	sumFault=5;
		}
		 else if(newdif[k]>=20){
        	sumFault=7;
		}
  		//
        cout<<endl;
  		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;       

        cout<<"                                                     Level : "<< u <<"             "<<"Gem : "<<Gem<<"     ";
        setColor(4);cout<<"  Max Of Fault : "<< sumFault<<endl;setColor(7);
//        lvl++;
u++;
            if(lvl==21+z){
    	break;
}
        cout<<"                                                     _______________________________________________________"<<endl;
        cout<<"                                                     Word : "<< newblanks[k] <<endl;
        cout<<"                                                     Description : "<<explanations[k]<<endl;
        cout<<"                                                     Status : ";
        if (newdif[k] <= 10) {

            setColor(6);
            cout << "Easy" << endl;
            setColor(7);
        } 
		
		else if (newdif[k] >= 20) {


            setColor(4);
            cout << "Hard" << endl;
            setColor(7);
        } else if (newdif[k] > 10 && newdif[k] < 20) {


            setColor(9);
            cout << "Medium" << endl;
            setColor(7);
        }
        cout << endl;
        cout<<"                                                                         Whats your Guess ?"<<endl;
          cout<<"                                                        you can press (?) and get 4 gem for get a tip : "<<endl<<endl;
        cout<<"                                                                       ";
        t=0;
        for (int k = 0;  t!= nw.length() ; ++k) {

 	k=0;

    ch =getch();
	          
	 if (ch == w[k] ||ch == w[k+1] ||ch == w[k+2] ||ch == w[k+3] ||
	 ch ==w[k+4]  || ch == w[k+5] ||ch == w[k+6] ||ch == w[k+7]  || 
	 ch== w [k+8] || ch == w[k+9] ||ch == word[k+10] ||ch == w[k+11]  || 
	 ch== w [k+12]|| ch == word[k+13] ||ch == w[k+14] ) {
                setColor(2);
                 t++;

//         cin>>ch;
         char* p = strchr (w, ch);
         int position = p - w+1 ;
         strcpy(&w[position-1],&w[position]);
// cout<<"the result string is :";
//         puts(word); 
                   cout << ch<<" ";
                setColor(7);

            }




			else if (ch=='?' && Gem>=4){
//			setColor(2);
//			cout<<word[k]<<" ";
			Gem -= 4 ;
			setColor(2);
			t++;
            cout << w[k]<<" ";
//             word[k-1];
		    char* p = strchr (w, w[k]);
		    
            int position = p - w+1 ;
         
            strcpy(&w[position-1],&w[position]);
            
                setColor(7);
			}
			
			else if(Gem<4 && ch=='?'){
				k--;	
			}
			//check wrong char
		else  if (ch != w[k] && ch != w[k+1] && ch != w[k+2] &&ch != w[k+3] &&
	 ch != w[k+4] &&ch != w[k+5] &&ch != w[k+6] &&ch != w[k+7]  && 
	 ch!= w [k+8] &&ch != w[k+9] &&ch != w[k+10] &&ch != w[k+11]  && 
	 ch!= w [k+12]&&ch != w[k+13] &&ch != w[k+14] ) {
                setColor(4);
                cout << ch<<" ";
                f++;
                a++;
                foul++;
                setColor(7);
                
            }

// if lose 
            char q;
if(sumFault==newfoul){
	system("cls");
	setColor(4);
	gotoxy(70,16);
	cout<<"G  A  M  E    O  V  E  R " <<endl;
	setColor(7);
	cout<<endl<<endl;
	cout<<"                                                                  Press (&) To Return To Main Menu ";
	cout<<endl; 
	cin>>q;
	if(q=='&'){
	system("cls");
	main();	
	}

}
        }
        Gem+=5;  
         if(b>0){
        sp++;	
		}////
        
    }//
   
	system("cls");	
	  }
  
// karnameeee 

 if(z>0){
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	 setColor(3);
    cout<<"                                                            _______________________________________"<<endl;
    cout<<"                                                            |        F  I  N  I  S  H  E  D       |" <<endl;
    cout<<"                                                            ---------------------------------------"<<endl;
    cout<<endl;
    setColor(8);
    cout<<"                                                             Level : "<<20+z  <<endl;
    setColor(6);
    cout<<"                                                             The Number Of Gem Used : "<< 105+ (z*5) - Gem <<endl;
    cout<<"                                                             Gems : "<< Gem <<endl;
    setColor(4);
    cout<<"                                                             Errors : "<<f<<endl;
    setColor(4);
    cout<<"                                                             Number Of Error Steps : "<< c + sp <<endl;
    setColor(2);
    cout<<"                                                             Number Of No Error Steps : "<< (20+z) - (c+sp)<<endl;
    setColor(3);cout<<endl;
    cout<<"                                                            ---------------------------------------"<<endl;
    setColor(7);
    cout<<"                                                                Press (&) To Back To Main Menu : "<<endl;
  }   
 else if( r== 0){
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		 setColor(3);
    cout<<"                                                            _______________________________________"<<endl;
    cout<<"                                                            |        F  I  N  I  S  H  E  D       |" <<endl;
    cout<<"                                                            ---------------------------------------"<<endl;
    cout<<endl;
    setColor(8);
    cout<<"                                                             Level : "<<lvl-1  <<endl;
    setColor(6);
    cout<<"                                                             The Number Of Gem Used : "<< 105 - Gem <<endl;
    
    cout<<"                                                             Gems : "<< Gem<<endl;
    setColor(4);
    cout<<"                                                             Errors : "<<f<<endl;
    setColor(4);
    cout<<"                                                             Number Of Error Steps : "<< step_errors  <<endl;
    setColor(2);
    cout<<"                                                             Number Of No Error Steps : "<< 20 - step_errors <<endl;
    setColor(3);cout<<endl;
    cout<<"                                                            ---------------------------------------"<<endl;
    setColor(7);
    cout<<"                                                               Press (&) To Back To Main Menu : "<<endl;
	
}
 
    //       break;
}

