#include<iostream>
using namespace std;

void m_pesa(){
        cout << "1. Send money\n";
        cout <<"2. Withdraw cash\n";
        cout <<"3. Buy Airtime\n";
        cout <<"4. Loans and Savings\n";
        cout << "5. Lipa na M_Pesa\n";
        cout <<"6. My Account\n";
        cout <<"7. Exit";
    }
void mShwari (){
    cout <<"1. Send to MShwari\n";
    cout <<"2. Withdraw from MShwari\n";
    cout <<"3. Lock savings account\n";
    cout <<"4. Loans at 7.5% for 30 days\n";
    cout <<"5. Check balance\n";
    cout<<"6. Exit\n";
}
void lipaNaMpesa(){
    cout << "1. Paybill Number\n";
    cout <<"2. Buy Goods and Services\n";
}

int main(){
   
    double balance = 550;
    int option;
     
    m_pesa();
    cout << "Enter option:";
    cin >> option;
    do{

        switch (option)
        {
        case 1:cout <<"Send money\n";
               double sendMoney;
               cout <<"Enter Amount you wish to send : ";
               cin >> sendMoney;
               if(sendMoney <= balance){
                       balance-= sendMoney;
                       cout <<"You have Succefully send : "<< sendMoney << endl;
               }
               else{
                    cout << "You have insufficient Amount : " << balance<<endl;
                    }
            break;
        case 2:cout <<"Withdraw Cash\n";
               double withdrawMoney;
               cout <<"Enter Amount you wish to send : ";
               cin >> withdrawMoney;
               if(withdrawMoney <= balance){
                       balance-= withdrawMoney;
                       cout <<"You have Succefully withdrawn : "<< withdrawMoney << endl;
               }
                else
                    cout<<"You have insufficient Amount : " << balance<<endl;
            break;
        case 3:cout <<"Buy Airtime\n";
               double buyAirTime;
               cout <<"Buy Airtime : ";
               cin >> buyAirTime;
               if(buyAirTime <= balance){
                       balance-= buyAirTime;
                       cout <<"You have Succefully bougth airtime of : "<< buyAirTime << endl;
               }else
                    cout<<"You have insufficient Amount : " << balance<<endl;
            break;
        case 4 :cout <<"Loans and Savings"<< endl;
                double balance2 = 400;
                int option2;
                
                mShwari();
                cout << "Enter Mshwari options :";
                cin >> option2;

                do{
                    switch(option2){
                        case 1: cout << "Send to Mshwari :" <<endl;
                            double sendToMshwari;
                            cout <<" enter amount from M_Pesa :"<<endl;
                            cin >>sendToMshwari;
                            if(sendToMshwari <=  balance){
                                balance -= sendToMshwari;//decreases Mpesa balance
                                balance2 += sendToMshwari;//increases Mshwari balance
                                cout <<"You have succefully send :"<<sendToMshwari<<endl;
                                cout << "Your Mshwari balance is now :"<<balance2<<endl;
                            }
                            else
                                cout <<"You have Insufficient amount in your Mpesa accont"<<endl;
                        break;

                        case 2: cout << "Withdraw from Mshwari :" <<endl;
                            double withdrawFromMshwari;
                            cout <<" enter amount you wish to withdraw from mShwari :"<<endl;
                            cin >>withdrawFromMshwari;
                            if(withdrawFromMshwari <=  balance2){
                                balance2 -= withdrawFromMshwari;//decreases mShwari balance
                                balance += withdrawFromMshwari;//increases Mpesa balance
                                cout <<"You have succefully withdrawn :"<<withdrawFromMshwari<<endl;
                                cout << "Your Mshwari balance is now :"<<balance2<<endl;
                            }
                            else
                                cout <<"You have Insufficient amount in your MShwari accont"<<endl;
                        break;

                        case 3: cout <<"Lock Savings account :"<<endl;
                              double months = 3;
                              if (months <= 3)
                                 cout << "You are only allowed to withdraw money if it's 3 months full or consult our customer care"<<endl;
                              else
                                cout<<"You have withdrawn from mshwari"<<endl;
                        break;

                        case 4: cout <<"we offer loans at 7.5% for 30 days"<<endl;
                                double loanLimit = 500;
                                cout <<"And your loan limit is"<<loanLimit<<endl;

                        break;

                        case 5: cout << "Your MShwari balance is :"<<balance2<<endl;
                        break;

                        default:cout <<"You have entered invalid choice !!!!"<<endl;
                        break;


                    }
                }
                while(option2 != 6);
        case 5: cout <<"Lipa na MPesa :"<<endl;
               int option3;

               lipaNaMpesa();
               cout <<" Enter the option : ";
               cin >> option3;
               
               do {
                   switch(option3){
                       double payBill;
                       double tillNumber;
                       case 1 :cout << "Enter pay Bill Number\n";
                          cin >> payBill;
                       break;

                       case 2: cout << "Enter Till Number\n";
                           cin >> tillNumber;
                       break;
                       default:"you have entered invalid choice\n";
                       break;
                      }

                   }
                   while(option3 != 3);

               
        case 6 : cout <<"Your balance is : "<< balance <<endl;
        default:cout<<"You have entered invalid choice !!!!!"<<endl;
            break;
        }

    }while (option != 7);
    
            
}