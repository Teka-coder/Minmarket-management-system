﻿#include<iostream>//header file to see input out put stream
#include<stdlib.h>// to include some keywords from its library d/t for compiler to compiler
#include<fstream>// to see file that enter or writen
using namespace std;
char power,op,ch,cho,go,see;//to accpte character from user
string typ1;
string color,size;//to accpte some character group
int main()   //our main function begun
{
	void menu();  //another user defined function declaration
    void let();  //void function declaration
	cout<<"\n\n\t\t\t***GOOD MORNING***\n\n\t\t......this is our first Programming II project.\n\t\t__________________________________"<<endl;
	menu();  //our first user defined function called
cin>>power;
system("cls");   //in order to clear our screen
	switch (power)   //case option evaluater called swich case
	 {
		case '5':
		let(); //let() function called in case 5
		break;
		default:
		cout<<"\n\n\n\t\t\tShuting down.......O0o.\n\n\n\n"<<endl;
	}
return 0;
}
void menu()  {  //our first user defined function defined
	cout<<"\n\t\t\t[=>] Start ON by 5."<<endl;
	cout<<"\t\t\t[=>] Switch OFF by any key."<<endl;
}
void let() //second void function defined
{
	char fruits,dress,cosmotics;//chharacter variables we used in choice input
         int fruitqty; //variables to accepte integer quantity
         int dressqty;
         int cosmoqty;
double amtofsaleapp=0;//variables doing sumition in double data type initialized by 0
double amtofsaleora=0;
double amtofsaleavo=0;
double amtofsalestra=0;
double amtofsalebo=0;
double amtofsalejac=0;
double amtofsaletis=0;
double amtofsalelot=0;
double amtofsalespr=0;
double amtofsalevas=0;
double amtofsalesop=0;
double amtofsalesoc=0;
double total=0;
double debt=0;
int cata;
int x,y;
	struct fruit  {  //first structure declaration in user defined name fruit
	double banana;//member variable in variety data type
	double orange;
	double apple;
	double mango;
	};
	fruit fra={30,35,45,25};//initializing member variable
struct some { //second structure declaration
	double type;//member variables for 2nd structure
	double debt;
	char comm[100];//character array as member of staructure some to accepte size of 100cr comment
	double cash;//memner variable to accepte money from the customer
} som;
struct cosmotic {//3rd structure
	double lot;
	double vas;
	double spr;
	double soap;
};
cosmotic cos={100,75,150,50};//member variable initialization as price for the items
struct dresses {  //4th structure
	double trou;
	double tshirt;
	double half;
	double socks;
};
dresses dres={500,150,250,60};
ofstream myfile("Eyyoba.txt",ios::out|ios::app);//declaration of file(ofstream)
	if (myfile.is_open())  {//condition statment to check as file opend/closed
myfile<<"\n\t =====*=======*===*===\n";
myfile<<"\n *********UNIVERISITY OF GONDAR*********\n";
myfile<<"\t FACULTY OF INFORMATICS\n";
myfile<<"[Department Of Computer Science] \n";
myfile<<"=======*==***=======**==\n\n\n\n";
loop1:cout<<"\n *********UNIVERISITY OF GONDAR*********\n";
cout<<"\t FACULTY OF INFORMATICS\n";
cout<<"\t[Department Of Computer Science] \n";
cout<<"\t========================\n\n\n\n";
man://labeling to use for goto statment there are many like this
cout<<"***AVAILABLE MAIN OPERATION***\n";
cout<<"\t\t[1] Let's PURCHASE: \n\t\t[2] About US\n\t\t[3] To see an OPERATOR/info:\n\n";
cout<<"\nPRESS the NUMBER-KEY holds your choice above!\n\t\t=>";
	cin>>cata;
	system("cls");
	if(cata>3||cata<=0) //checking the condition
	{
	cout<<"\tYou press INVALID KEY select again below:-\n\n\n";
	goto man;// goto statment directing the excution unto the label man:
	}
		 if (cata==2)
	{
		cout<<"\t\t.....GROUP MEMBERS....\n\n\n";
		cout<<"NAME....................ID no\n";
		cout<<"Tekalegn Berako....................GUR/02641/11\n";
		cout<<"Israel Mekonen....................GUR/02743/11\n";
		cout<<"Isak Hayru....................GUR/02694/11\n";
		cout<<"Mintesnot Mengesha....................GUR/02710/11\n";
		cout<<"Sitota Aklilu....................GUR/02677/11\n";
		cout<<"Yeshiwas Etana....................GUR/02662/11\n";
		cout<<"Nathan Mebratu....................GUR/02674/\n";
		cout<<"Natnael Seti....................GUR/02716/11\n";
		cout<<"Natnael Melak....................GUR/02647/11\n";
		cout<<"Maryamawit Seifu.....................GUR/02648/11\n";
		cout<<"Meseret Adugna.....................GUR/02625/11\n";
		call:cout<<"\n\n\n\n\nPRESS 5 to go to MAIN MENU\nExit by 0\n\t";
		cin>>cho;
		system("cls");
		switch (cho) {
			case '5':
			goto man;
			break;
			case '0':
			exit(0);
			break;
			default:
			cout<<"Enter valid key"<<endl;
			goto call;
		}
	}
	else
	if(cata==3)
	{
		myfile<<"\n\n\nwe attemt to do this project as much possible as our performance allows us.That's why we couldn't able to do beyond our scope..........\n Thank you for Instructor___________for giving this chance since we have to know how a problems are solved in C++ programming language.\n\n\nFor more info.....WWW.tekayeberak475@gmail.com.....\n\n\n\n";
		cout<<"\t\tMINI-MARKETING\n\t *====*=====*=====*===*\nwe attemt to do this project as much possible as our performance allows us.That's why we couldn't able to do beyond our scope..........\n Thank you for Instructor________ for giving this chance cause we Develop our potential to ' how a problems are solved in C++ programming language'.mainly by using function,structure,file and so many others.\n\n\nFor more info.....WWW.tekayeberak475@gmail.com.....\n\n\n\n";
		rep:cout<<"\t\tPress 5 to go to main menu\n\t\tExit by 0\n\t";
		cin>>ch;
		system ("cls");
		switch (ch) {
			case '5':
			goto man;//directing multiple time
			break;
			case '0':
			exit(0);
			break;
			default:
			cout<<"Enter Valid key\t"<<endl;
			goto rep;
		}
	}
	else
if(cata==1)
{
	myfile<<"\n\n\n\n*********WEL-COME TO YES MINI MARKET********\n\n\t";
	cout<<"\n\n\n\n*********WEL-COME TO YES MINI MARKET********\n\n\t";
	fruits:
cout<<"\t\t.....Here are kinds of FRUIT in kg:.....\n\n";
cout<<"\t\t[1] banana.....................30birr\n\t\t[2] Orange....................35birr\n\t\t[3] Apple....................45birr\n\t\t[4] Mango.....................25birr\n";
cout<<"\n\nWhich of those you purchased for ?\nto pass un purchasing press another number key\n";
cin>>fruits;
system("cls");
cout<<"\t\tHOW much kg?\nIf you didn't buy anything you can enter 0\n\t";
cin>>fruitqty;
system("cls");
cout<<"\tTo CONTINUE press 5\n\tTo CHANGE your fruit choice press any key\n\n\n\n";
cout<<"warning:use only NUMBER KEY!\n\t";
      cin>>y;
      system("cls");
while (y!=5)
{
	goto fruits;//calling again
}
dress:
	cout<<"\t\t.........DRESSES.......\n\n";
cout<<"ENTER the KEY holds your DRESS choice!\n";
cout<<"\t\t[1] Jeans trouser.....................500birr\n\t\t[2] Mark T-shirt...................150birr\n\t\t[3] Quality halfs......................250birr\n\t\t[4] Brand Socks......................60birr\nTo pass un purchase press another number key\n ";
cin>>dress;
system("cls");
cout<<"What color?\nBut No price diffrence\nIf you didn't buy say no\n\t";
cin>>color;
system("cls");
cout<<"In What size?\nBut No price diffrence\nIf you didn't buy say No\n\t";
cin>>size;
system("cls");
cout<<"\t\tHOW much ?\nIf you didn't buy anything you can enter 0\n\t";
cin>>dressqty;
system("cls");
cout<<"\tTo CONTINUE press 5:\n\n\tTo CHANGE your dress choice:press any key:\n\n\n\n warning:use only NUMBER KEY!\n\t";
cin>>y;
system("cls");
while (y!=5)
{
	goto dress;//the excution direct back again
}
cosmotics:
	cout<<"\t\t.......COSMOTICS........ \n";
cout<<"ENTER the KEY holds your COSMOTICS preference\n";
cout<<"\t\t[1] Lotion.................100birr\n\t\t[2] Vasilin..................75birr\n\t\t[3] Hair Spray....................150birr\n\t\t[4] Soap..................50birr\nTo pass unpurchase press another number key\n";
cin>>cosmotics;
system("cls");
cout<<"\t\tWhat type?\nbut No price diffrence in their type,thats why we have sorted it alone\nSay No if you didn''t buy\n\t";
cin>>typ1;
system("cls");
cout<<"\t\tHOW much ?\nIf you didn't buy anything you can enter 0\n\t";
cin>>cosmoqty;
system("cls");
cout<<"\tTo CONTINUE press 5:\n\n\tto CHANGE your choice press any key\n\n\n\nwarning:use only NUMBER KEY!\n\t";
cin>>y;
system("cls");
while (y!=5)
{
	goto cosmotics;
}
cout<<" \n\tPROCESSED SUCCESFULLY!!! !!\t\t\n\n";
lep:cout<<"\n\n\tTo see your TOTAL & to PAY press 5\n\tto return back menu press 1:\n\tTo quit un purchase exit by 0\n\t";
cin>>go;
system("cls");
switch (go) {
	case '1':
	goto man;
	break;
	case '5':
	goto there;
	case '0':
	exit(0);// quiting the programming by using case 
	break;
	default:
	cout<<"ivalid key:"<<endl;
	goto lep;
}
there:
switch(fruits)// testing the input given by the customer option from fruit choice
{
	case '1':
/*myfile<<"You buy\t"<<fruitqty<<" banana................50.00birr X"<<fruitqty<<"="<<fruitqty*fra.banana<<"birr\n";*/
	cout<<"=>You buy "<<fruitqty<<"Kg Banana.....30.00birr X"<<fruitqty<<"="<<fruitqty*fra.banana<<"birr\n";
	amtofsaleapp=fruitqty*fra.banana;
	break;
	case '2':
	/*myfile<<"You buy\t"<<fruitqty<<" lotion.................75.00birr X"<<fruitqty<<"="<<fruitqty*fra.orange<<"birr\n";
*/
	cout<<"=>You buy "<<fruitqty<<"Kg Orange.....35.00birr X"<<fruitqty<<"="<<fruitqty*fra.orange<<"birr\n";
	amtofsaleora=fruitqty*fra.orange;
	break;
	case '3':
	/*myfile<<"You buy\t"<<fruitqty<<" vasilin....................100.00birr X "<<fruitqty<<"="<<fruitqty*fra.apple<<"birr\n";*/
	cout<<"=>You buy "<<fruitqty<<"Kg Apple.....45.00birr X "<<fruitqty<<"="<<fruitqty*fra.apple<<"birr\n";
	amtofsaleavo=fruitqty*fra.apple;
	break;
	case '4':
	/*myfile<<"you buy\t"<<fruitqty<<" spray.....................150.00birr X "<<fruitqty<<"="<<fruitqty*fra.mango<<"birr\n";*/
	cout<<"=>You buy "<<fruitqty<<"Kg Mango......25.00birr X "<<fruitqty<<"="<<fruitqty*fra.mango<<"birr\n";
	amtofsalestra=fruitqty*fra.mango;
	break;
	default:
	cout<<"=>At Fruit choice, "<<fruits<<" is UNKNOWN KEY ,so you buy No Fruit\n";
	break;
}
{
switch(dress) //testing the case given for dress choice
{
	case '1':
/*	myfile<<"You buy\t"<<dressqty<<" trouser............1000.00birr X "<<dressqty<<"="<<dressqty*cos.lot<<"birr\n";*/
	cout<<"=>You buy "<<color<<" colour"<<size<<" Size, "<<dressqty<<" Jeans trouser....500.00birr X "<<dressqty<<"="<<dressqty*dres.trou<<"birr\n";
	amtofsalebo=dressqty*dres.trou;
	break;
	case '2':
/*myfile<<"You buy\t"<<dressqty<<" rain t-shirt...........500.00birr X"<<dressqty<<"="<<dressqty*cos.vas<<"birr\n";
*/
	cout<<"=>You buy "<<color<<" colour"<<size<<" size, "<<dressqty<<" Mark T-shirt....150.00birr X"<<dressqty<<"="<<dressqty*dres.tshirt<<"birr\n";
	amtofsalejac=dressqty*dres.tshirt;
	break;
	case '3':
/*myfile<<"you buy\t"<<dressqty<<" half.............450.00birr X "<<dressqty<<"="<<dressqty*cos.spr<<"birr\n";*/
	cout<<"=>You buy "<<color<<" colour"<<size<<" size, "<<dressqty<<" Quality half.....250.00birr X "<<dressqty<<"="<<dressqty*dres.half<<"birr\n";
	amtofsaletis=dressqty*dres.half;
	break;
	case '4':
	cout<<"=>You buy "<<color<<" colour"<<size<<" size, "<<dressqty<<" Brand socks.....60.00birr X"<<dressqty<<"="<<dressqty*dres.socks<<"birr\n";
	amtofsalesoc=dressqty*dres.socks;
	break;
	default:
	cout<<"=>At dress choice "<<dress<<" is UNKNOWN KEY so, you buy No dress\n";
	break;
}
{
	switch(cosmotics)  //checking/comparing the cosmotics character option
	{
		case '1':
		/*myfile<<"you buy\t"<<cosmoqty<<" body lotion..........80.00birr X "<<cosmoqty<<"="<<cosmoqty*dres.trou<<"birr\n";*/
		cout<<"=>You buy "<<cosmoqty<<" "<<typ1<<" Body lotion....100.00birr X "<<cosmoqty<<"="<<cosmoqty*cos.lot<<"birr\n";
		amtofsalelot=cosmoqty*cos.lot;
		break;
		case '2':
		/*myfile<<"You buy\t"<<cosmoqty<<" hair spray..............75.00birr X "<<cosmoqty<<"="<<cosmoqty*dres.tshirt<<"birr\n";*/
		cout<<"=>You buy\t"<<cosmoqty<<" "<<typ1<<" Vasilin.....75.00birr X "<<cosmoqty<<"="<<cosmoqty*cos.vas<<"birr\n";
		amtofsalespr=cosmoqty*cos.vas;
		break;
		case '3':
	/*	myfile<<"You buy\t"<<cosmoqty<<" vaselin.............60.00birr X  "<<cosmoqty<<"="<<cosmoqty*dres.half<<"birr\n";*/
		cout<<"=>You buy "<<cosmoqty<<" "<<typ1<<" Hair spray.....150.00birr X  "<<cosmoqty<<"="<<cosmoqty*cos.spr<<"birr\n";
		amtofsalevas=cosmoqty*cos.spr;
		break;
		case '4':
		cout<<"=>you buy "<<cosmoqty<<" "<<typ1<<" Soap.....50.00birr X"<<cosmoqty<<"="<<cosmoqty*cos.soap<<"birr\n";
		amtofsalesop=cosmoqty*cos.soap;
		break;
		default:
		cout<<"=>At Cosmotics choice "<<cosmotics<<" is UNKNOWN KEY so, you buy No Cosmotics\n";
		break;
	}
	total=0;//whole total summation purchased
total+=amtofsaleapp+amtofsaleora+amtofsaleavo+amtofsalestra+amtofsalebo+amtofsalejac+amtofsaletis+amtofsalesoc+amtofsalelot+amtofsalespr+amtofsalevas+amtofsalesop;
/*	myfile<<"\n\n\nThe total amoun of birr debt is only= "<<total<<"birr\n";*/
	cout<<"\n\n\nThe TOTAL amoun of birr Debt is only= "<<total<<"birr\n\n";
	loop2:cout<<"=>In order to receive your goods you must Enter Exact or Above "<<total<<"birr"<<endl;
	cout<<"\t\tENTER YOUR CASH!\n\t\t";
	cin>>som.cash;
	system("cls");
	som.type=0;
	if (som.cash>=total) //chechkin whether the cash emtered satsfies to receive goods
	{
		som.type=som.cash-total;
/*myfile<<"\n\n\n//////////////////////////////////\n\t\t\t your return or residual is="<<som.type<<"birr.....you can get reciepte @ botom of the machine !!\n\n\n";
	myfile<<"ThankYou for markerting!!!.............come again\n///////////////////////////////®®®®®®®®®®\n\n\n";*/
cout<<"//////////////////////////////////\n\t\t\t your or residual is="<<som.type<<"birr.....you can get RECEIPTE @ Botom of the Machine !!\n\n\n";
	cout<<"THANkYOU for markerting!!!.............come again!!!\n///////////////////////////////®®®®®®®®®®\n\n\n";
	lap:cout<<"\t\tpress 5 to put COMMENT\n\t\tpress 1 to re operate!\n\t\tExit by 0\n\t";
	cin>>op;
	system("cls");
	switch (op) {
		case '5':
		goto loop;
		break;
		case '1':
		goto loop1;
		break;
		case '0':
		exit(0);
		break;
		default:
		cout<<"Enter valid option\n"<<endl;
		goto lap;
	}
loop:/*myfile<<"\t\tDEAR CUSTOMER Put your COMMENT here below......\n\n\n";
	myfile<<"\t\tUse dollar($)to terminate\n\n";
	cin.get(som.comm,100,'$');
	myfile<<"\n\n\tYou said..."<<som.comm<<"\t\t\tThankyou !...we will Improve it\n\n\n\n";*/
	cout<<"\t\tDEAR CUSTOMER Put your COMMENT here below......\n\n\n";
	cout<<"\t\tUse dollar($)to terminate\n\n";
	cin.get(som.comm,100,'$');
	cout<<"\n\n\tYou said..."<<som.comm<<"\n\t\t\tThankyou !...We will Improve it\n\n\n\n";
}
 if (som.cash<total)
	{
		som.debt=som.cash-total;
		/*myfile<<"\n\nyou are in DEBT with;\t<"<<som.debt<<"birr> sorry you are not allowed to recieve your goods untill you complete the debt!\n\n\n\n\tpress 3 to enter cash again\n\tpress 7 to re Operate!\npress 0 to put comment:\n\t";*/
		cout<<"\n\nyou are in DEBT with;\t<"<<som.debt<<"birr> sorry you are not allowed to recieve your goods untill you complete the debt!\n\n\n\n\t;";
	lab:cout<<"press 3 to enter cash again\n\tpress 7 to re Operate!\n\t";
		cin>>see;
		system("cls");
		switch (see) {
			case '3':
			goto loop2;
			break;
			case '7':
			goto loop1;
			break;
			default:
			cout<<"You press invalid key"<<endl;
			goto lab;
		}
	    }
        }
        }
}         //for if(cata==1)
myfile.close();  //file closed
}         //for ofstrem
cout<<"file closing......"<<endl;
}          //for let() function


