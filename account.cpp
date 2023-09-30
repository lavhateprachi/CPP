#include<iostream>
#include<string.h>
using namespace std;

//static int count;
class account
{
    private:
        char acc_type[20];
        char acc_name[20];
        int acc_no;
        double acc_balance;
        

    public:
    /*

        int setCount()
        {
            count=0;
        }
    
    */
        account(){

            strcpy(acc_type,"Saving");
            strcpy(acc_name,"Neha");
            acc_no=101;
            acc_balance=1000.00;
            
        }
        account(char *type,char *name,int acno){
            strcpy(acc_type,type);
            strcpy(acc_name,name);
            acc_no=acno;
            if(type == "Saving"){

                acc_balance=0;
            }
            if(type=="Current")
            {
                acc_balance=1000;
            }
        }


        void settype(char *type);
        void setname(char *name);
        void setnum(int num);
        void setbal(double bal);

        char* gettype();
        char* getname();
        int getnum();
        int getbal();

        void withdraw();
        void deposit();

        void saving()
        {
            acc_balance=0;
        }
        void current()
        {
            acc_balance=1000;
        }
        
        void Accept();
        void Display();

};

void account::settype(char *type)
{
    strcpy(acc_type,type);
    
}
void account::setname(char *name)
{
    strcpy(acc_name,name);
    
}
void account::setnum(int num)
{
    acc_no=num;
    
}
void account::setbal(double bal)
{
    acc_no=bal;
    
}
char* account::gettype()
{
    return acc_type;
}
char* account::getname()
{
    return acc_name;
}
int account::getnum()
{
    return acc_no;
}
int account::getbal()
{
    return acc_balance;
}

void account::withdraw()
{
    int acno;
    double wbal;
    cout<<"Enter Account Number To Withdraw: "<<endl;
    cin>>acno;
    cout<<"Enter withdrawal Amount: "<<endl;
    cin>>wbal;
    cout<<"Current Balance: "<<acc_balance<<endl;
    if(acc_no==acno)
    {
            if(wbal>acc_balance)
            {
                cout<<"Insufficient Balance...";

            }
            else
                acc_balance=acc_balance-wbal;
    }
    cout<<"Remaining Balance: "<<acc_balance<<endl;
}

void account::deposit()
{
    int acno;
    double wbal;
    cout<<"Enter Account Number To Withdraw: "<<endl;
    cin>>acno;
    cout<<"Enter withdrawal Amount: "<<endl;
    cin>>wbal;
    cout<<"Current Balance: "<<acc_balance<<endl;
    if(acc_no==acno)
    {
        acc_balance=acc_balance+wbal;
    }
    cout<<"Balance After Deposit: "<<acc_balance;
}

void account::Accept(void)
{
    cout<<"Enter AC Type: "<<endl;
    cin>>acc_type;
    cout<<"Enter Name: "<<endl;
    cin>>acc_name;
    cout<<"Enter AC Number: "<<endl;
    cin>>acc_no;
    cout<<"Enter AC Balance: "<<endl;
    cin>> acc_balance;

}

void account::Display()
{
    cout<<"Account Type: "<<acc_type<<endl;
    cout<<"Account Name: "<<acc_name<<endl;
    cout<<"Account Number: "<<acc_no<<endl;
    cout<<"Account Balance: "<<acc_balance<<endl;

}

account addAccount(){
    //3input
    account acc (stitic , name ,type);
    return acc;
}
int main()
{
    
    int x;

    while(x!=3)
    {
        cout<<"Enter Appropriate Number: "<<endl;
        cout<<"1.Saving Account"<<endl;
        cout<<"2.Current Account"<<endl;
        cout<<"3.Quit"<<endl;

        cin>>x;

        switch(x)
        {
            case 1:
                cout<<"Add User Account "<<endl;
                addAccount();
                break;
            case 2:
                cout<<"Deposit Amount: "<<endl;
                

            case 3:
                break;

            default:
                cout<<"Invalid Choice..."<<endl;
                break;



        }
        x++;
    }

}

