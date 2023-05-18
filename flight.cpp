#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>

using namespace std;
void mainMenu();
class Management{
public:
    Management(){
        mainMenu();
    }
};

class detail{
    public:
    static string name,gender;
    int phoneno;
    int age;
    string add;
    static int cid;
    char arr[100];

    void information(){
        cout<<"Enter coustomer id : \n";
        cin>>cid;
        cout<<"Enter name : \n";
        cin>>name;
        cout<<"Enter your Age : \n";
        cin>>age;
        cout<<"Enter your gender : \n";
        cin>>gender;
        cout<<"Enter your address : \n";
        cin>>add;
        cout<<"enter your phone number : \n";
        cin>>phoneno;
        cout<<"\n ";
        cout<<"Your details is saved with us [-_-] \n";

    }
};
int detail::cid;
string detail::name;
string detail::gender;

class registeration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flight(){
            string flightn[]={"Dubai ","Canada ","USA "};
            for(int i=0;i<3;i++){
                cout<<(i+1)<<".flight to "<<flightn[i]<<endl;

            }
            cout<<"\t\t---Welcome to Asim airlines--- \n\n";
            cout<<"Press the number of country which you want to book the flight : \n";
            cin>>choice;

            switch(choice){
                case 1:{
                    cout<<"\n|Welcome to Dubai emirates|\n";
                    cout<<"Your comfort is our priority,Enjoy the journey\n";
                    cout<<"\nFollowing are the flights\n";
                    cout<<"1.DUB -498"<<endl;
                    cout<<"08-01-2023  8:00AM  10hrs  Rs.14000"<<endl;
                    cout<<"2.DUB -658"<<endl;
                    cout<<"09-01-2023  1:00PM  11hrs  Rs.10000"<<endl;
                    cout<<"3.DUB -564"<<endl;
                    cout<<"10-01-2023  6:00PM  9hrs  Rs.9000"<<endl;
                    cout<<"\t\nselect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=14000;
                        cout<<"\nYou haved successfuly bookes the flight DUB-498"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\nYou haved successfuly bookes the flight DUB-658"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=9000;
                        cout<<"\nYou haved successfuly bookes the flight DUB-564"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"\nInvlaid input ,shifting to the previous menu"<<endl;
                        flight();
                    }
                    cout<<"Press any key to go back to tha main menu:"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                case 2:{
                    cout<<"\n|Welcome to Canadian Airlines| \n";
                    cout<<"Your comfort is our priority,Enjoy the journey\n";
                    cout<<"\nFollowing are the flights\n";
                    cout<<"1.CA -398"<<endl;
                    cout<<"08-01-2023  8:00AM  19hrs  Rs.30000"<<endl;
                    cout<<"2.CA -258"<<endl;
                    cout<<"09-01-2023  1:00PM  17hrs  Rs.24000"<<endl;
                    cout<<"3.CA -164"<<endl;
                    cout<<"10-01-2023  6:00PM  16hrs  Rs.20000"<<endl;
                    cout<<"\t\nselect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=30000;
                        cout<<"\nYou haved successfuly bookes the flight CA-398"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=24000;
                        cout<<"\nYou haved successfuly bookes the flight CA-258"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=20000;
                        cout<<"\nYou haved successfuly bookes the flight CA-164"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"\nInvlaid input ,shifting to the previous menu"<<endl;
                        flight();
                    }
                    cout<<"Press any key to go back to tha main menu:"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                case 3:{
                    cout<<"\n|Welcome to US Airways| \n";
                    cout<<"Your comfort is our priority,Enjoy the journey\n\n";
                    cout<<"\nFollowing are the flights\n\n:";
                    cout<<"1.US -698"<<endl;
                    cout<<"08-01-2023  8:00AM  19hrs  Rs.45000"<<endl;
                    cout<<"2.US -758"<<endl;
                    cout<<"09-01-2023  1:00PM  17hrs  Rs.40000"<<endl;
                    cout<<"3.US -864"<<endl;
                    cout<<"10-01-2023  6:00PM  16hrs  Rs.35000"<<endl;
                    cout<<"\t\nselect the flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=45000;
                        cout<<"\nYou haved successfuly bookes the flight US-698"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=40000;
                        cout<<"\nYou haved successfuly bookes the flight US-758"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=35000;
                        cout<<"\nYou haved successfuly bookes the flight US-864"<<endl;
                        cout<<"YOu can go back to  menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invlaid input ,shifting to the previous menu"<<endl;
                        flight();
                    }
                    cout<<"\nPress any key to go back to tha main menu:"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                default:{
                    cout<<"Invlaid input ,shifting to the previous menu"<<endl;
                        flight();
                        break;
                }
            }
        }
};

float registeration::charges;
int registeration::choice;

class ticket : public registeration,detail{
    public:
    void bill(){
        string destination="";
        ofstream outf("datarecords.txt",ios::app);
        {
            outf<<"\t______Asim Airlines______\n";
            outf<<"\\nt Ticket \n";
            outf<<"  \n";
            outf<<"Customer ID :"<<detail::cid<<endl;
            outf<<"Customer Name : "<<detail::name<<endl;
            outf<<"Customer Gender : "<<detail::gender<<endl;
            outf<<"\tDescription :\n";
            
            if(registeration::choice==1){
                destination="Dubai ";
            }
            else if(registeration::choice==2){
                destination="Canada ";
            }
            else if(registeration::choice==3){
                destination="USA ";
            }

            outf<<"\tDestination\t"<<destination<<endl;
            outf<<"\tFlight cost :\t"<<registeration::charges<<endl;

        }
        outf.close();
    }
    void dispbill(){
        ifstream ifs("datarecords.txt");
        {
            if(!ifs){
                cout<<"File error\n";
            }
            while(!ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
    }
};




void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t_______Asim Airlines________\n";
    cout<<"\t\t                  \n";
    cout<<"\t Main Menu \n";
    cout<<"\t\t                  "<<endl;
    cout<<"\t press 1 to add the customer details "<<endl;
    cout<<"\t press 2 for flight registeration "<<endl;
    cout<<"\t press 3 for ticket and charges "<<endl;
    cout<<"\t press 4 for exit "<<endl;
    cout<<"\t                                "<<endl;
    cout<<" \nEnter your choice "<<endl;
    cin>>lchoice;

detail d;
registeration r;
ticket t;
switch(lchoice){

    case 1:{
        cout<<"\tCustomer "<<endl;
        d.information();
        cout<<"\npress any key toh go back to main menu \n";
        cin>>back;
        if(back==1){
            mainMenu();
        }
        else{
            mainMenu();
        }
        break;
    }

    case 2:{
        cout<<"book a flight using a system \n";
        r.flight();
        break;
    }

    case 3:{
        cout<<"Get your ticket \n";
        t.bill();

        cout<<"your ticket is printed,you can collect it \n";
        cout<<"press 1 to display your ticket: \n";
        cin>>back;

        if(back==1){
            t.dispbill();
            cout<<"press any key to go to back menu \n";
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        else{
            mainMenu();
        }
        break;
    }

    case 4:{
        cout<<"\t [Thank you] \n";
        break;
    }
    default:{
        cout<<"invalid input try agian";
        mainMenu();
        break;
    }

}
}

int main(){
    system("cls");
    Management mobj;

    return 0;
}