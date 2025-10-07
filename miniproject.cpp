#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
class atm{
    private:
    long int account_no;
    string name;
    int PIN;
    double Balance;
    string mobile_no;

public:
void setdata(long int account_no_a,string name_a,int pin_a,double balance_a,string mobile_no_a){
    account_no=account_no_a;
    name=name_a;
    PIN=pin_a;
    Balance=balance_a;
    mobile_no=mobile_no_a;
}

long int getaccountno(){
    return account_no;
}
string getname(){
    return name;
}
int getPIN(){
    return PIN;
}

 int getBalance(){
    return Balance;
}
long int getmobileno(){
    return account_no;
}
void setmode(string mob_prev,string mob_new){
    if(mob_prev==mobile_no)
{
    mobile_no=mob_new;
    cout<<endl<<"succesfully updated mobile no";
    _getch();
}}
void cashwithdrawal(int amount_a){
    if(amount_a>0&& amount_a<balance){
        balance-=amount_a;
        cout<<endl<<"Please collect your cash";
        cout<<endl<<"Available balance"<<balance;
        _getch();
    
    }
    else{
        cout<<endl<<"Invalid input or insufficient balance";
        _getch();
    }
}
};
int main(){
    long int enteraccount_no,enter_pin;
int choice=0;
    system("cls");
    atm user1;
    user1.setdata(1234567,"sajan",1111,15000.90,"6361396395");
    do{
        system("cls");
        cout<<endl<<"***WELCOME TO ATM***";
         cout<<endl<<"Enter your account number:";
         cin>>enteraccount_no;
          cout<<endl<<"Enter PIN";
          cin>>enter_pin;
    }
          if((enteraccount_no==user1.getaccountno())&&(enter_pin==user1.getPIN())){
            do{
                int amount=0;
                string oldmobile_no,newmobile_no;
                system{"cls"};
                cout<<endl<<"***WELCOME TO ATM***"<<endl;
                 cout<<endl<<"Select options"<<endl;
                 cout<<endl<<"1.Check Balance"<<endl;
                 cout<<endl<<"2.Cash Withdrawal"<<endl;
                 cout<<endl<<"3.Show User Details"<<endl;
                 cout<<endl<<"4.Update Mobile No."<<endl;
                 cout<<endl<<"5.Exit"<<endl;
                 cin>>choice;
                 switch(choice){
                    case 1:
                    cout<<endl<<"Your bank balance is:"<<user1.getBalance();
                    _getch();
                    break;
                    case 2:
                    cout<<endl<<"Enter the amount:";
                    cin>>amount;
                    //user1.cashwithdraw(amount);
                    break;
                    case 3:
                    cout<<endl<<"***User Details are***";
                    cout<<endl<<"->Account_no"<<user1.getaccountno();
                    cout<<endl<<"->Name:"<<user1.getname();
                    cout<<endl<<"->Balance:"<<user1.getBalance();
                    cout<<endl<<"->Monile no.:"<<user1.getmobileno();
                    _getch();
                    break;
                    case 4:
                    cout<<endl<<"Enter old mobile number:";
                    cin>>oldmobile_no;
                    cout<<endl<<"Enter new mobile number";
                    cin>>newmobile_no;
                   // user1.setmobile(oldmobile_no,newmobile_no);
                    break;
                    case 5:
                    exit(0);
                    default:
                    cout<<endl<<"Enter valid data!!"

                 }
            }while(1)
        }
        