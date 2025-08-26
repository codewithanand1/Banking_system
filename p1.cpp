#include<iostream>
using namespace std;
class bank
{
    string accholdername;
    string accnumber;
    int amount;
    public:
    void setName(string n);
    void setacc(string a);
    void setamount(int a);
    void getdata();
    void deposite(int amt);
    void withdraw(int amt);
    void intrest(int t,int r);
};
void bank::intrest(int t,int r)
{  cout<<"amount:"<<amount<<endl;
    
    int intrest =amount +(amount*t*r)/100;
    cout<<" add simple intrest to amount :"<<intrest<<endl;
    amount=(amount*t*r)/100;
    cout<<"simple intrest:"<<amount<<endl;
}




void bank::withdraw(int amt)
{  if(amount>=amt){
    amount =amount-amt;
    cout<<"deposite succcessful:"<<amt<<endl;
    cout<<"total amount:"<<amount<<endl;
}
else{
    cout<<"insifficient balance:"<<endl;
    cout<<"total amout<<"<<amount<<endl;
}
}



void bank::deposite(int amt)
{
    amount=amount+amt;
    cout<<"deposite succcessful:"<<amt<<endl;
    cout<<"total amount:"<<amount<<endl;
}


void bank::setName(string n)
{
    accholdername=n;
}
void bank::setacc(string a)
{
    accnumber=a;
}
void bank::setamount(int a)
{
    amount=a;
}

void bank::getdata()
{
    cout<<"account holder name:"<<accholdername<<endl;
    cout<<"Amount:"<<amount<<endl;
    cout<<"acc number:"<<accnumber<<endl;
}
int main()
{  bank sbi;
    sbi.setName("kishan");
    sbi.setacc("sbi@123");
    sbi.setamount(1000);

    

    int ch;
    while(true)
    {
        cout<<"enter 1 to deposite:"<<endl;
        cout<<"enter 2 to withdraw:"<<endl;
        cout<<"enter 3 to  see your detail:"<<endl;
        cout<<"enter 4 to know simple intreast"<<endl;
        cout<<"enter any key to exist :"<<endl;
        cin>>ch;
        if(ch==1)
        {
           int amt;
           cout<<"enter to amount to deposit:"<<endl;
           cin>>amt;
           sbi.deposite(amt);

        }
        else if(ch==2)
        {
           int amt;
           cout<<"enter to amount to withdraw:"<<endl;
           cin>>amt;
           sbi.withdraw(amt);

        }
       else if(ch==3)
        {
           sbi.getdata();

        }
        else if(ch==4)
        {int r,t;
            cout<<"enter the time :"<<endl;
            cin>>t;
            cout<<"enter the rate:"<<endl;
            cin>>r;

            sbi.intrest(t,r);
        }
        else{
            break;
        }
    }

}