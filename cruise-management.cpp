// CRUISE MANAGEMENT SYSTEM 
using namespace std;

// HEADER FILES
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
#include<stdlib.h>
#include<iomanip.h>
#include<dos.h>

// classes 
class personal_details
{
private:
int trvlcode;        //travel code
int  age[20];
char name[20][20];
char add[50];                //address
char pno[15];                //phone no.
char sex[5];
char familyname[50];          //family name who going on trip
char passnum[10][10];        //passport no.
int num;                  //to calculate the no of persons below 3 years
int numppl;           //to calculate total no of people

public:
void input_info(int cd)
{
trvlcode=cd;
num=0;
clrscr();
cout<<"\n\n\t:::::::::::::::::::::: PERSONAL DETAILS ::::::::::::::::::::::\n";
cout<<"\t\t\t\t~~~~~~~~~~~~~~\n";
cout<<"\n\t\t* Please fill in the details:\n\n\n\t\t\t1.Family name: ";
gets(familyname);
cout<<"\n\t\t\t2.Address: ";
gets(add);
cout<<"\n\t\t\t3.Contact Number: ";
gets(pno);
do
{
cout<<"\n\n\n\t\tEnter The No of People Travelling: ";
cin>>numppl;
if(numppl<0&&numppl>100)
{
cout<<"Please enter the correct data(Max.=100 Min.=1)";
clrscr();
}
}while(numppl<0&&numppl>100);

clrscr();
if(numppl>0)
{
 cout<<"\n\t\tPlease Enter The Details of each Member/Members: "<<endl;
 cout<<"\t\t\n";
 for(int i=0;i<numppl;i++)
 {
  cout<<endl<<"\n\t\tMember "<<i+1;
  cout<<"\n\t\t~~~~~~~~";
  cout<<"\n\n\t\tFirst Name: ";
  gets(name[i]);
  cout<<"\n\t\tAge: ";
  cin>>age[i];
  cout<<"\n\t\tSex (M/F): ";
  cin>>sex[i];
  cout<<"\n\t\tPassport Number: ";
  gets(passnum[i]);
  if(age[i]>3)
  {
  num++;    //to calculate no of travellers below 3 yrs
  }
  }
  }
  }

void output_info()  //to display output details
{
clrscr();
cout<<"\n\n\t******************** PERSONAL DETAILS ********************"<<endl;
cout<<"\n\n\t\t\tFamily Name:\t "<<familyname<<endl;
cout<<"\t\t\tAddress:\t "<<add<<endl;
cout<<"\t\t\tPhone Number:\t "<<pno<<endl;
gotoxy(9,12);
cout<<"Name";
gotoxy(20,12);
cout<<"Age";
gotoxy(25,12);
cout<<"Sex";
gotoxy(30,12);
cout<<"Passport Number\n"<<endl;
for(int i=0;i<numppl;i++)
{
gotoxy(9,13+i);
puts(name[i]);
gotoxy(20,13+i);
cout<<age[i];
gotoxy(25,13+i);
cout<<sex[i];
gotoxy(30,13+i);
puts(passnum[i]);
}
getch();
}

int trcode()   //returning function,return trvl code
{
return trvlcode;
}

void famname()
{
cout<<familyname;
}

int count3() 	//count no travellers below 3 yrs
{
return num;
}
};
personal_details pd;

// CLASS FOR TRAVEL DETAILS 
class travel_details
{
private:
int trvtcode;       //travel code of customer
int day;            //date of departure
int month;            //month of departure
int year;            //year of departure
int num1;               //count the total no of people
int bdg_pt;            //boarding point
int go_pt;              //destination point
int deck;
int cabin;
int pool;
int gym;
int sports;
int salon;
int spa;               //treatments
int theatre;             //movie theatre

public:
void travel_info(int cd)
{
pool=gym=theatre=sports=salon=0;

trvtcode=cd;
int i=1,opt;
clrscr();

cout<<endl;
cout<<"\n\n\t\t\t\t___TRAVEL DETAILS__";
cout<<"\n\t\t\t\t\\___________________/";
cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\t\tPlease enter the following details for your journey:";


cout<<"\n\n\n\t\t\tSelect Boarding point:"
    <<"\n\n\t\t\t1.Mumbai\n\n\t\t\t"
    <<"2.Cochin\n\n\t\t\t"
    <<"3.Chennai\n\n\t\t\t ";
cin>>bdg_pt;

clrscr();
cout<<"\n\n\t\t\t****** Select Destination ******\n\n\n";
cout<<"\t 1.New York\t\t6.Dubai\t\t\t11.Antananariv";
cout<<"\n\n\t 2.Miami\t\t7.Lisbon\t\t12.Cairo\n\n";
cout<<"\t 3.Rio De Janeiro\t8.London\t\t13.Perth";
cout<<"\n\n\t 4.Colombo\t\t9.Copenhagen\t\t14.Sydney";
cout<<"\n\n\t 5.Hong Kong\t\t10.Cape Town\t\t15.Wellington\n\n\n\n\n\t\t\t\t  ";
cin>>go_pt;

clrscr();
cout<<"\n\n\t Date of Departure ";
cout<<"\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
cout<<"\n\n\t\tEnter your preferred date of departure: ";
cin>>day;
gotoxy(59,7);   //to create a paricular format for entry
cout<<"/";
cin>>month;
gotoxy(62,7);
cout<<"/";
cin>>year;

clrscr();
cout<<"\n\n\t\t\tEnter The Choice OF Deck\n\n\t\t\t1.Top Deck\n\n\t\t\t2.Middle Decks\n\n\t\t\t3.Bottom Deck\n\n\t\t\t ";
cin>>deck;

clrscr();
cout<<"\n\n\t\t\tEnter The Choice Of Cabin\n\n\t\t\t1.AC\n\n\t\t\t2.Non AC\n\n\t\t\t ";
cin>>cabin;


do
{
clrscr();
cout<<"\n\t\t\tPlease do select the following facilities ";
cout<<"\n\n\n\t\t\t\t\ 1.Swimming Pool\n\t\t\t\t 2.Gymnasuim\n\t\t\t\t 3.Sports\n\t\t\t\t 4.Salon\n\t\t\t\t 5.Spa\n\t\t\t\t 6.Theatre\n\t\t\t\t 7.Back\n\n\t\t\t\t ";
cin>>opt;

switch(opt)
{
case 1:clrscr();
cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Swimming Pool\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>pool;
pool--;
break;

case 2:clrscr();
cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Gymnasium\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>gym;
gym--;
break;

case 3:clrscr();
cout<<"\n\n\t\tDo You Like To Avail The Sports Facilities Offered\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>sports;
sports--;
break;

case 4:clrscr();
cout<<"\n\n\t\tDo You Like To Avail The Facility Of Beauty Salon\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>salon;
salon--;
break;

case 5:clrscr();
cout<<"\n\n\tDo You Like To Avail The Facility Of Spa and Ayurvedic Treatment\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>spa;
spa--;
break;

case 6:clrscr();
cout<<"\n\n\t\tDo You Like To Avail The Facility Of Amphitheatre\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
cin>>theatre;
theatre--;
break;

case 7:i=0;
break;
  }
  }while(i==1);
  }

void travel_output()
{
clrscr();
cout<<"\n\n\t******************* TRAVEL DETAILS *********************";

cout<<"\n\n\t\tBoarding Point: ";
switch(bdg_pt)
{
case 1:cout<<"Mumbai\t";
       break;
case 2:cout<<"Cochin\t";
       break;
case 3:cout<<"Chennai\t";
}

cout<<"\n\n\t\tDestination: ";
switch(go_pt)
{
case 1:cout<<"New York";
       break;
case 2:cout<<"Miami";
       break;
case 3:cout<<"Rio De Janero";
       break;
case 4:cout<<"Colombo";
       break;
case 5:cout<<"Hong Kong";
       break;
case 6:cout<<"Dubai";
       break;
case 7:cout<<"Lisbon";
       break;
case 8:cout<<"London";
       break;
case 9:cout<<"Copenhagen";
       break;
case 10:cout<<"Cape Town";
	break;
case 11:cout<<"Antananriv";
	break;
case 12:cout<<"Cairo";
	break;
case 13:cout<<"Perth";
	break;
case 14:cout<<"Sydney";
	break;
case 15:cout<<"Willington";
	break;
}

cout<<"\n\n\t\tDate of departure: ";
cout<<day<<"/"<<month<<"/"<<year;

cout<<"\n\n\t\tDeck: ";
switch(deck)
{
 case 1:cout<<"Top Deck";
	break;
 case 2:cout<<"Middle Deck";
	break;
 case 3:cout<<"Bottom Deck";
	break;
}

cout<<"\n\n\t\tCabin: ";
switch(cabin)
{
case 1:cout<<"AC cabin";
       break;
case 2:cout<<"Non-AC cabin";
       break;
}

cout<<"\n\n\n\tFacilities availed for are:";
if(pool==1)
cout<<"\n\t\t\t\t    Swimming Pool";
if(gym==1)
cout<<"\n\t\t\t\t    Gymnasuim";
if(sports==1)
cout<<"\n\t\t\t\t    Sports Facilities";
if(spa==1)
cout<<"\n\t\t\t\t    Spa and Ayurvedic Treatment";
if(salon==1)
cout<<"\n\t\t\t\t    Beauty Salon";
if(theatre==1)
cout<<"\n\t\t\t\t    Theatre";
if(pool==0&&gym==0&&sports==0&&spa==0&&salon==0&&theatre==0)
cout<<"\n\t\t\t\t    NO facalities selected";
getch();
}

void calc_bill()   //function to calculate bill
{
long int gttl=0,hr,dcst,dck,cabn,swpool=5000,gm=2000; //dcst=total distance cost
long int spfts=7500,slon=6000,sp=20000,ttr=500; //dck=cost from dock

switch(go_pt)   //calculate destination cost
{
case 1:;
case 2:;
case 3:hr=30*24;
       dcst=250000;
       break;
case 4:;
case 5:;
case 6:hr=7*24;
       dcst=75000;
       break;
case 7:;
case 8:;
case 9:hr=24*24;
       dcst=130000;
       break;
case 10:;
case 11:;
case 12:hr=15*24;
	dcst=100000;
	break;
case 13:;
case 14:;
case 15:hr=12*24;
	dcst=120000;
	break;
}

switch(deck)  //calculate cost from dock
{
case 1:dck=7500;
       break;
case 2:dck=5000;
       break;
case 3:dck=1000;
       break;
}

switch(cabin)       //calculate cost of cabin
{
case 1:cabn=5000;
       break;
case 2:cabn=2000;
       break;
}

clrscr();
cout<<"\n\n\t\t:::::::::::::::::::::: BILL ::::::::::::::::::::::::::";
cout<<"\n\n\t\tBoarding point:\t\t ";
switch(bdg_pt)
{
case 1:cout<<"Mumbai\t";
       break;
case 2:cout<<"Cochin\t";
       break;
case 3:cout<<"Chennai\t";
       break;
}
cout<<"\n\n\t\tDestination:\t\t ";
switch(go_pt)
{
 case 1:cout<<"New York";
	   break;
 case 2:cout<<"Miami";
	   break;
 case 3:cout<<"Rio De Janero";
	   break;
 case 4:cout<<"Colombo";
	   break;
 case 5:cout<<"Hong Kong";
	   break;
 case 6:cout<<"Dubai";
	   break;
 case 7:cout<<"Lisbon";
	   break;
 case 8:cout<<"London";
	   break;
 case 9:cout<<"Copenhagen";
	   break;
 case 10:cout<<"Cape Town";
	   break;
 case 11:cout<<"Antananriv";
	   break;
 case 12:cout<<"Cairo";
	   break;
 case 13:cout<<"Perth";
	   break;
 case 14:cout<<"Sydney";
	  break;
 case 15:cout<<"Willington";
	 break;
  }
cout<<"\n\n\t\tDate of Departure: ";
cout<<day<<"/"<<month<<"/"<<year;

hr=hr/24;         //to calculate date of arrival
day=day+hr;
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
if(day>31)
{
month=month+1;
day=day%31;
}
}

if(month==4||month==6||month==9||month==11)
{
if(day>30)
{
month=month+1;
day=day%30;
}
}

if(month==2)
{
if(day>28)
{
month=month+1;
day=day%28;
}
if(day>29)
{
month=month+1;
day=day%29;
}
}

if(month==13)
{
month=1;
year++;
}

cout<<"\n\n\t\tDate of Arrival: ";
cout<<day<<"/"<<month<<"/"<<year;

cout<<"\n\n\t\tSubject\t\tCost(for 1)\tNo of ppl\tTotal";
cout<<"\n\n\t\tTravel\t\t"<<dcst<<"\t\t   "<<num1<<"\t\t"<<num1*dcst;
gttl+=num1*dcst;
cout<<"\n\t\tDeck\t\t"<<dck<<"\t\t   "<<num1<<"\t\t"<<dck*num1;
gttl+=dck*num1;
cout<<"\n\t\tCabin\t\t"<<cabn<<"\t\t   "<<num1<<"\t\t"<<cabn*num1;
gttl+=cabn*num1;
if(pool==1)
{
cout<<"\n\t\tSwimming Pool\t"<<swpool<<"\t\t   "<<num1<<"\t\t"<<swpool*num1;
gttl+=swpool*num1;
}
if(gym==1)
{
cout<<"\n\t\tGym\t\t"<<gm<<"\t\t   "<<num1<<"\t\t"<<gm*num1;
gttl+=gm*num1;
}
if(sports==1)
{
cout<<"\n\t\tSports\t\t"<<spfts<<"\t\t   "<<num1<<"\t\t"<<spfts*num1;
gttl+=spfts*num1;
}
if(salon==1)
{
cout<<"\n\t\tSalon\t\t"<<slon<<"\t\t   "<<num1<<"\t\t"<<slon*num1;
gttl+=slon*num1;
}
if(spa==1)
{
cout<<"\n\t\tSpa\t\t"<<sp<<"\t\t   "<<num1<<"\t\t"<<sp*num1;
gttl+=dcst*num1;
}
if(theatre==1)
{
cout<<"\n\t\tTheatre\t\t"<<ttr<<"\t\t   "<<num1<<"\t\t"<<ttr*num1;
gttl+=ttr*num1;
}

cout<<"\n\n\n\t\t\t Grand Total:Rs ";
if(gttl>100000)     //to provide comma's for grandtotal
{                            //as per according to international
cout<<gttl/100000<<",";
gttl=gttl%100000;
}
if(gttl>1000)
{
cout<<gttl/1000<<",";
gttl=gttl%1000;
}
cout<<gttl;
if(gttl<10)
cout<<"00";
cout<<" ";
cout<<"\n\n\t! All Travellers below the age of 3 have not been charged !";
getch();
}

int tcode() //return travel code from class2
{
return trvtcode;
}

int count(int d)
{
num1=d;
}
}td;


// FILE HANDLING 
void family_info(int a,int&flag)  //to enter personal data in file
{
flag=0;
clrscr();
ifstream f1;
f1.open("Personal details.dat",ios::in|ios::binary);
f1.read((char*)&pd,sizeof(pd));
while(f1.eof()==0)
{
if(pd.trcode()==a)
{
flag=1;
break;
}
f1.read((char*)&pd,sizeof(pd));
}

if(flag==1)
{
cout<<"\n\n\t\t ******* ";
pd.famname();
cout<<"'s FAMILY DATABASE *******";
cout<<"\n\n\t\t\t";
}
else
{
cout<<"\n\n\n\t\tERROR IN LOCATING FILE";
}
}

void edit_pinfo(int a)
{
ofstream f1;
ifstream f2;
f1.open("temp1.dat",ios::out|ios::app|ios::binary);
if(!f1)
{
cout<<"ERROR..............\nUNABLE TO OPEN FILE";
}

f2.open("Personal details.dat",ios::in|ios::binary);
if(!f2)
cout<<"ERROR..............\nUNABLE TO OPEN FILE";
f2.read((char*)&pd,sizeof(pd));
while(f2.eof()==0)
{
if(pd.trcode()==a)
{
clrscr();
cout<<"Please Enter The New Details Of The Record"<<endl;
pd.input_info(a);
f1.write((char*)&pd,sizeof(pd));
cout<<"\n\t\t\tMODIFICATION SUCCESFUL!!!!";
f2.read((char*)&pd,sizeof(pd));
break;
}
else
{
f1.write((char*)&pd,sizeof(pd));
f2.read((char*)&pd,sizeof(pd));
}
}
remove("Personal details.dat");
rename("temp1.dat","Personal details.dat");
f2.close();
f1.close();
getch();
}

void edit_tinfo(int a)  //function to edit travel details
{
ofstream f1;
ifstream f2;
f1.open("temp.dat",ios::out|ios::app|ios::binary);
if(!f1)
cout<<"ERROR..............\nUNABLE TO OPEN FILE";

f2.open("Travel details.dat",ios::in|ios::binary);
if(!f2)
cout<<"ERROR..............\nUNABLE TO OPEN FILE";


f2.read((char*)&td,sizeof(td));
while(f2.eof()==0)
{
if(td.tcode()==a)
{
clrscr();
cout<<"Please Enter the New details of the record"<<endl;
td.travel_info(a);
f1.write((char*)&td,sizeof(td));
cout<<"\n\t\t\tModification Succesful!!!";
f2.read((char*)&td,sizeof(td));
}
else
{
f1.write((char*)&td,sizeof(td));
f2.read((char*)&td,sizeof(td));
}
}
remove("Travel details.dat");
rename("temp.dat","Travel details");
f2.close();
f1.close();
}

void deletion(int a)  //delete func() to remove data
{
ofstream f1;
ifstream f2;
f1.open("temp.dat",ios::out|ios::binary);
if(!f1)
cout<<"Error While Opening File";

f2.open("Personal details.dat",ios::in|ios::binary);
if(!f2)
cout<<"Error While Opening File";

f2.read((char*)&pd,sizeof(pd));
while(f2.eof()==0)
{
if(pd.trcode()!=a)
{
f1.write((char*)&pd,sizeof(pd));
}
f2.read((char*)&pd,sizeof(pd));
}
remove("Personal details.dat");
rename("temp.dat","Personal details.dat");
f2.close();
f1.close();

ofstream f3;
ifstream f4;

f3.open("temp1.dat",ios::out|ios::binary);
if(!f1)
cout<<"\nError While Opening File";

f4.open("Travel details.dat",ios::in|ios::binary);
if(!f4)
cout<<"\nError While Opening File";

f4.read((char*)&td,sizeof(td));
while(f4.eof()==0)
{
if(td.tcode()!=a)
{
f3.write((char*)&td,sizeof(td));
}
f4.read((char*)&td,sizeof(td));
}
remove("Travel details.dat");
rename("temp1.dat","Travel details.dat");
cout<<"\n\n\t\tDeletion Completed!";
getch();
}


void main()
{
clrscr();
long int code=0;
for(int i=0;i<20;i++)
{
clrscr();
cout<<"\n\n\n\n\n";
cout<<"              **      :::::::  !!!!!!!!           \n";
cout<<"           _____  **      ::       !!    !!         _____  \n";
cout<<"                **      ::       !!    !!                \n";
cout<<"              ******  :::::::  !!!!!!!!            \n";
cout<<"\n\n\n\n\n";
  gotoxy(1+i,15);
  cout<<"	      ~	__  ~ __  ~ __                  \n";
  gotoxy(1+i,16);
  cout<<"	       |==|  |==|  |==|                 \n";
  gotoxy(1+i,17);
  cout<<"	     __|__|__|__|__|__|_                \n";
  gotoxy(1+i,18);
  cout<<"	  __|___________________|___            \n";
  gotoxy(1+i,19);
  cout<<"       __|__[]__[]__[]__[]__[]__[]__|___       \n";
  gotoxy(1+i,20);
  cout<<"      |................................/ \n";
  gotoxy(1+i,21);
  cout<<"      \\.............................../ \n";  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<" ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
  cout<<"  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~\n";
  cout<<"    ~    ~     ~    ~    ~    ~    ~    ~    ~     ~   ~   ~   ~   ~  ~ \n";
  cout<<"     ~    ~      ~    ~     ~    ~    ~      ~    ~   ~   ~   ~   ~   ~ \n";
  delay(400);cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n";
cout<<"  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  \n";
cout<<"~   ~    ~     ~    ~    ~    ~    ~    ~    ~   ~   ~   ~   ~   ~   ~   ~  ~\n";
cout<<"~    ~    ~      ~    ~     ~    ~    ~       ~     ~   ~   ~   ~    ~   ~   \n";

}
int opt,opt1,opt2,opt3,opt4,acceptcode,flag;

ifstream fl;
fl.open("INITIAL.dat",ios::in|ios::binary); //initialisation of code
if(!fl)
cout<<"\nError";
fl.read((char*)&code,sizeof(code));
fl.close();

home:
{
clrscr();
cout<<"\n\n\t\t\n";
cout<<"\t\t ....WELCOME TO THE CRUISE DATABASE SYSTEM....\n";
cout<<"\t\t\n\n\n";
cout<<"\t\t         \n";
cout<<"\t\t MAIN MENU \n";
cout<<"\t\t         \n\n";
cout<<"\n\t\t\tPlease select a kind of user:";
cout<<"\n\n\t\t\t\t1.New User"
    <<"\n\n\t\t\t\t2.Existing User"
    <<"\n\n\t\t\t\t3.Exit";
cout<<"\n\n\t\t\t\t ";
cin>>opt;
}

do
{
switch(opt)
{
case 1:clrscr();
cout<<"\n\n\n\t\t\t\t    NEW USER\n";
cout<<"\t\t\t\t    ********\n\n";
cout<<"\n\n\t\t\tChoose the option you want to enter:";
cout<<"\n\n\t\t\t\t1.Personal Details\n\n\t\t\t\t2.Back\n\n\t\t\t\t ";
cin>>opt1;
  do
  {
  switch(opt1)
  {
  case 1:code++;
       ofstream fil;
       fil.open("INITIAL.dat",ios::app|ios::out|ios::binary); //storing code value
       if(!fil)
       cout<<"\nERROR........Unable to locate file";
       fil.put(code);
       fil.close();

       ofstream f1,f2;
       cout<<"Please Enter Personal Detail\n";
       f1.open("Personal details.dat",ios::out|ios::app|ios::binary);
       if(!f1)
	{
       cout<<"\n\n\t\tERROR.........\nUnable to locate file";
	goto home;
	}
       pd.input_info(code);
       f1.write((char*)&pd,sizeof(pd));
       f1.close();
       f2.open("Travel details.dat",ios::out|ios::app|ios::binary);
       if(!f2)
	{
       cout<<"\n\n\t\tERROR.........\nUnable to locate file";
	goto home;
	}
       td.travel_info(code);
       f2.write((char*)&td,sizeof(td));
       f2.close();
       clrscr();
       cout<<"\n\n\n\n!!!!!Your Details Have Been Registered."
	   <<"Please Make A Note Of This Code: "<<code;
       cout<<"\n\n* For modifications,"
	   <<"Please visit 'existing user' section in the main screen";
	getch();
	goto home;
	break;

       case 2:goto home;
	     break;
       }
       }while(opt1!=2);
       break;

case 2:clrscr();
       cout<<"\n\n\t\t\t***** EXISTING USER *****\n\n\t\t"
       <<"Please Enter The Travel Code That Was Given To You\n\n\t\t\t ";
       cin>>acceptcode;
       if(acceptcode>code)
       {
       cout<<"\nNo such record has been created!";
       getch();
       goto home;
       }
       family_info(acceptcode,flag);
       cout<<endl<<endl<<"\t\t\t\tCode no:"<<acceptcode;
	     getch();
	     if(flag==1)
	     {
	     menu:
	     {
	     clrscr();
	     cout<<"\n\n\t\t\t@@@@@@@@@ Information Centre @@@@@@@@@";
	     cout<<"\n\t\t\t\t  ~~~~~~~~~~~~~~~~~";
	     cout<<"\n\n\tPlease select the type of "
		 <<"operation that you would like to perform:";
	     cout<<"\n\n\t\t\t1.View Personal Details"
		 <<"\n\n\t\t\t2.View Travel Details"
		 <<"\n\n\t\t\t3.Edit Details"
		 <<"\n\n\t\t\t4.Compute Bill"
		 <<"\n\n\t\t\t5.Back\n\n\t\t\t ";
	     cin>>opt2;
	      }
	     switch(opt2)
	     {
	     case 1:clrscr();
	     ifstream f3;
	     f3.open("Personal details.dat",ios::in|ios::binary);
	     if(!f3)
	      {
	     cout<<"\n\n\t\tERROR.....\nUnable to locate file";
	      goto home;
	      }
	     f3.read((char*)&pd,sizeof(pd));
	     while(f3.eof()==0)
	     {
	     if(pd.trcode()==acceptcode)
	     {
	     pd.output_info();
	     getch();
	     goto menu;
	     break;
	     }
	     f3.read((char*)&pd,sizeof(pd));
	     }

	     f3.close();
	     break;
       case 2:clrscr();
       ifstream f4;
       f4.open("Travel details.dat",ios::in|ios::binary);
       if(!f4)
       {
       cout<<"\n\n\t\tERROR..........\n\t\tUnable to locate file";
	goto home;
	}
       f4.read((char*)&td,sizeof(td));
       while(f4.eof()==0)
       {
       if(td.tcode()==acceptcode)
       {
       td.travel_output();
       getch();
       goto menu;
       break;
       }
       f4.read((char*)&td,sizeof(td));
       }
       f4.close();
       break;
       case 3:clrscr();
       cout<<"\n\n\n\t Edit Details ";
       cout<<"\n\n\t\tPlease select from among the editing options: ";
       cout<<"\n\n\t\t\t\t1.Modify"
	   <<"\n\n\t\t\t\t2.Delete"
	   <<"\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
       cin>>opt3;
       switch(opt3)
       {
  case 1:clrscr();
       cout<<"\n\n\t\t Modificaton \n";
       cout<<"\t\t                   ~~~~~~~~~~~";
       cout<<"\n\n\tChoose The Type Of Details You Want To Modify:"
	   <<"\n\n\t\t\t1.Personal Details"
	   <<"\n\n\t\t\t2.Travel Details"
	   <<"\n\n\t\t\t3.Back\n\n\t\t\t ";
	   cin>>opt4;
	   switch(opt4)
	   {
	   case 1:clrscr();
		  edit_pinfo(acceptcode);
		  goto menu;
		  break;
	   case 2:clrscr();
		  edit_tinfo(acceptcode);
		  break;
	   case 3:goto home;
		  break;
	   }
	   goto menu;
	   break;
   case 2:deletion(acceptcode);
       break;
   case 3:goto home;
       break;
	   }
	   break;
       case 4:clrscr();
       ifstream f8,f9;
       f8.open("Personal details.dat",ios::in|ios::binary);
       f8.read((char*)&pd,sizeof(pd));
       while(f8.eof()==0)
       {
       if(pd.trcode()==acceptcode)
	{
	break;
	}
	f8.read((char*)&pd,sizeof(pd));
	}
	f8.close();
	f9.open("Travel details.dat",ios::in|ios::binary);
	f9.read((char*)&td,sizeof(td));
	while(f9.eof()==0)
	{
	if(td.tcode()==acceptcode)
	break;
	f9.read((char*)&td,sizeof(td));
	}
	f9.close();
	td.count(pd.count3());
	td.calc_bill();
	goto menu;
	break;
       case 5:goto home;
       break;
	}
       }
       break;

case 3:
       clrscr();
       cout<<"\n\n";
       cout<<"	         _/_/_/_/_/  _/                            _/            \n";
       cout<<"	            _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
       cout<<"	           _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
       cout<<"	          _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
       cout<<"	         _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
       cout<<"                                                                  \n";
       cout<<"                                                                  \n";
       cout<<"                                                                  \n";
       cout<<"		         _/     _/                                       \n";
       cout<<"		          _/  _/    _/_/    _/    _/                     \n";
       cout<<"		            _/    _/    _/  _/    _/                     \n";
       cout<<"		            _/    _/    _/  _/    _/                     \n";
       cout<<"		           _/      _/_/      _/_/_/                     \n\n";
       cout<<"\t    |===|						~~\n";
       cout<<"   	   _|   |____________________________________________|| ||___	";
       cout<<"\t\t    |_|_|_|_\__()____()____()______()______()_____()__||_||__/"<<endl;
       cout<<"\t    `.==---------|_|----|_|-----|_|----|_|-----------------/"<<endl;
       cout<<"\t      `.__________________________________________________/"<<endl;
       cout<<"..........oOoOo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       cout<<".........oOoOo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       cout<<".........oooo~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
       delay(500);
       }
	}while(opt!=3);


       exit(0);
       clrscr();
}
