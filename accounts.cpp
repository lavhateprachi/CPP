// create a class of account type
//class members shouls be private
//if its is a saving account default account blanace should be zero
//if current bank account then default accounbt should be
//withdraw operations should be there
#include <iostream>
using namespace std;
class Account
{
    string AccountType;
    string account_name;
    int account_num;
    float account_balance;
    static int count;
    public:
 
    void setter()
    {
        cout<<"enter the account type 'Savings' or 'Current' : "<<endl;
        cin>>AccountType;
        if((AccountType=="savings") || (AccountType=="Savings"))
        {
            account_balance=0;
        }
        else if(AccountType=="Current")
        {
            account_balance=1000;
        }
        cout<<"enter account holders name : "<<endl;
        cin>>account_name;
        account_num = Account::getCount();       
        Account::incCount();    
    }

    static int getCount(){
        return Account::count;
    } 

    static void incCount(){
        Account::count += 1;
    } 

    void getter()
    {
        cout<<"-----------------------------------------"<<endl;
        cout<<endl;
        // cout<<"account type is : "<<AccountType<<endl;
        
        cout<<"account holders name is : "<<account_name<<endl;
        
        cout<<"enter account number is: "<<account_num<<endl;
        
        cout<<"enter account balance is : "<<account_balance<<endl;
        
    }
    void withdraw(){
        int withdraw_ammount;
        cout<<"enter ammount to be withdrawn"<<endl;
        cin>>withdraw_ammount;
        if(withdraw_ammount>account_balance)
        {
            cout<<"Insufficient Balance"<<endl;
        }
        else
        {
            account_balance=account_balance-withdraw_ammount;
            cout << "Balance withdrawen : " << withdraw_ammount<<endl;
            cout<<"Current Balance : " << account_balance<<endl;
        }

    }

    void deposit(){
        int deposit_ammount;
        cout<<"enter ammount to be deposited"<<endl;
        cin>>deposit_ammount;

        account_balance+= deposit_ammount;
        cout<< "Ammount deposited is : " << deposit_ammount<<endl;
        cout << "Current account balance is : " << account_balance<<endl;
    }
};

int Account::count = 1;

int main()
{
    int option;
    char sw;
    do{
        Account acc1;
        do{
            cout << "Enter action to be performed : ";
            cout << "options :\n\t > 1 : create new account\n\t > 2 : deposite ammount in the account\n\t > 3 : withdraw ammount in the account\n\t > 4 : get account details\n\t : ";
            cin >> option;
        }while(option<1 || option>4);
        switch (option)
        {
        case 1:
            acc1.setter();
            break;
        case 2:
            acc1.deposit();
            break;
        case 3:
            acc1.withdraw();
            break;
        case 4:
            acc1.getter();
            break;
        }
        do{
            cout << "Do you want to quit the program?\n\t > 'q' : quit\n\t > 'r' : repeat\n\t : ";
            cin >> sw;
        }while (!(sw=='r'||sw=='q'));
    }while(sw=='r');
}