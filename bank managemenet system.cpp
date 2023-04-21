#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class bank
{
    private:
    char name[100],add[400],y;
    float balance;
    public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();

};
void bank::open_account(){
    cout<<"enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<" \n enter your address ::";
    cin.ignore();
    cin.getline(add,400);
    cout<<" what type of account you want to open saving <s> or current <c>";
    cin>>y;
    cout<<"enter amount for deposite ::";
    cin>>balance;
    cout<<" your account is created \n ";
}
void bank :: deposite_money(){
    int a;
    cout<<"enter the amount to deposite ::";
    cin>>a;
    balance+=a;
    cout<<"current balance::"<<balance;
}
void bank :: display_account(){
    cout<<"your full name :: \t"<<name;
    cout<<"\n your address :: \t"<<add;
    cout<<"\n your account type :: \t"<<y;
    cout<<"\n your balance :: \t"<<balance;

}
void bank :: withdraw_money(){
    int amount;
    cout<<"enter the amount to withdraw :: \n";
    cin>>amount;
    balance-=amount;
    if(balance<0){
        cout<<"due to the low amount in your account \n";
        cout<<"fine of 100 been added to your acount per day \n";
        cout<<"still the account not get sufficent amount!! \n";
        balance-=100;
    }
    cout<<"current balance::"<<balance;
}
int main(){
int ch;
char x;
bank obj;
do
{
    /* code */


cout<<"_______________________________________________🙏🙏Welcome To KVB bank🙏🙏_______________________________________________\n";

cout<<endl;
cout<<"1) OPEN ACCOUNT🤑\n";
cout<<"2) DEPOSITE MONEY💰 \n";
cout<<"3) WITHDRAW MONEY💳 \n";
cout<<"4) DISPLAY ACCOUNT📖 \n";
cout<<"5) EXIT🙋\n";
cout<<"Select The Option From Above 👆 :\n";
cin>>ch;

switch(ch)
{
    case 1:
    cout<< "1) open account 🤑\n";
    obj.open_account();
    break;
    case 2:
    cout<<" 2) deposite money💰 \n";
    obj.deposite_money();
    break;
    case 3:
    cout<< " 3) withdraw money 💳\n";
    obj.withdraw_money();
    break;
    case 4:
    cout<<" 4) display account📖 \n";
    obj.display_account();
    break;
    case 5:
       if(ch==5){
        exit(1);
       }
    default:
    cout<<"\n this is not exist try again 😵‍💫 \n";
}
cout<<"\n Do You Want To Select Next Option Then Press :: Y \n";
cout<<"If You Want To Exit Press :: N \n";
x=getch();
if(x=='n' || x=='N')
exit(0);
}while(x=='y' || x=='Y');


getch();
return 0;
}




