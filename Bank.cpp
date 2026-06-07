#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct Bank{
    int id;
    string name;
    string password;
    char PIN[7];
    double balance = 0;
};

Bank bank[50];
int acc = 0;
int choice;
int op;
int logged_in_user = -1;

void create_acc(){

    if(acc >= 50){
        cout << "\n\tLogin limit create less than 50 Account\n\n";
        return;
    }

    while(1){
        cout << "Enter user ID: "; cin >> bank[acc].id;
        cin.ignore();
        if(bank[acc].id < 0){
            cout << "\n\tPls Enter user ID than 0!\n\n";
            continue;
        }
        break;
    }
    cout << "Enter the Username: "; getline(cin, bank[acc].name); 
    cout << "Enter the Password: "; getline(cin, bank[acc].password);
    while(1){
        cout << "Enter Password PIN (6 letter): "; cin >> bank[acc].PIN;
        if(strlen(bank[acc].PIN) != 6){
            cout << "\n\tPls enter PIN 6 digits!\n\n";
            continue;
        }
        break;
    }
    cout << "\n==========================================================\n";
    cout << "\t" << bank[acc].name << ", Create Account Bank Successfully\n";
    cout << "\tID Bank: " << bank[acc].id << endl;
    cout << "\tPassword: " << bank[acc].password << endl;
    cout << "\tPIN: " << bank[acc].PIN << endl;
    cout << "==========================================================\n";
    acc++;
}

void login_acc(){

    int login_id;
    string login_password;
    char login_PIN[7];
    bool found = false;
    
    while(1){
        cout << "Enter user ID: "; cin >> login_id;
        cin.ignore();
        if(login_id < 0){
            cout << "\n\tPls enter ID bigger than 0!\n\n";
            continue;
        }
        break;
    }
    cout << "Enter the Password: "; cin >> login_password;

    while(1){
        cout << "Enter the password PIN: "; cin >> login_PIN;
        if(strlen(login_PIN) != 6){
            cout << "\n\tPls Enter the PIN 6 digits\n\n";
            continue;
        }
        break;
    }
    for(int i = 0; i < acc; i++){
        if(bank[i].id == login_id && bank[i].password == login_password && strcmp(bank[i].PIN, login_PIN) == 0){           
            cout << "\n==========================================================\n";
            cout << "\tLogin Account Bank Successfullt\n";
            cout << "\t:::::::::::::::::::::::::::::::\n";
            cout << "\tWelcome " << bank[i].name << endl;
            cout << "\t:::::::::::::::::::::::::::::::\n";
            cout << "\tID Account : " << bank[i].id << endl;
            cout << "\tPassword Account : " << bank[i].password << endl;
            cout << "\tPassword PIN : " << bank[i].PIN << endl;
            cout << "\tThe Current Balance : $" << fixed << setprecision(2) << bank[i].balance << endl;
            cout << "==========================================================\n";
            logged_in_user = i;
            found = true;
            break;            
        }
    }
    if(!found){
        cout << "\n\tLogin Fail\n";
    } 
}

void option(){

    if(logged_in_user == -1){
        cout << "\n\tNo user Loging Account!\n\n";
        return;
    }
    
    do{
        cout << "\n=========================================\n";
        cout << "\t:::::::: SYSTEM BANK :::::::::::\n";
        cout << "=========================================\n";
        cout << "\t1. Check Balance\n";
        cout << "\t2. Deposit Money\n";
        cout << "\t3. Withdraw Money\n";
        cout << "\t4. Veiw transcation\n";
        cout << "\t5. Exit\n";
        cout << "Enter Option (1-5): "; cin >> op;

        system("cls");
        switch(op){
            case 1:{
                cout << "\t================ Check Balance ==================\n";
                cout << "\tThe Current Balance : $" << fixed << setprecision(2) << bank[logged_in_user].balance;
                break;
            }
            case 2:{
                double amount;
                cout << "\t================ Deposit balance ==================\n";                                    cout << "\t::::::::::::: Option ::::::::::::::\n";
                cout << "\t1. Deposit $100\n";
                cout << "\t2. Deposit $200\n";
                cout << "\t3. Depsoit $350\n";
                cout << "\t4. Depsoit $400\n";
                cout << "Would you like to deposit: $"; cin >> amount;
                if(amount < 0){
                    cout << "\n\tInvaild Input\n\n";
                }
                else{
                    if(amount){
                        bank[logged_in_user].balance += amount;
                        cout << "\n\t---------------------------------------\n";
                        cout << "\tDeposit Successfully\n";
                        cout << "\tThe Balance have : $" << fixed << setprecision(2) << bank[logged_in_user].balance << endl;
                        cout << "\n\t---------------------------------------\n";
                    }
                break;
                }
            }
            case 3:{
                double amount;
                cout << "\t================ Withdraw Balance ==================\n";
                cout << "\tThe Current Balance : $" << fixed << setprecision(2) << bank[logged_in_user].balance << endl;                                    
                cout << "\t::::::::::::: Option ::::::::::::::\n";
                cout << "\t1. Withdraw $100\n";
                cout << "\t2. Withdraw $200\n";
                cout << "\t3. Withdraw $350\n";
                cout << "\t4. Withdraw $400\n";
                cout << "Would you like to Withdraw: $"; cin >> amount;
                if(amount < 0 ){
                    cout << "\n\tInvaild Input\n";
                    break;
                }else if(amount > bank[logged_in_user].balance){
                    cout << "\n\tCan't Withdraw money\n";
                    break;
                }
                else{
                    if(amount < bank[logged_in_user].balance){
                        bank[logged_in_user].balance -= amount;
                        cout << "\n\t---------------------------------------\n";
                        cout << "\tDeposit Successfully\n";
                        cout << "\tThe Balance have : $" << fixed << setprecision(2) << bank[logged_in_user].balance << endl;
                        cout << "\n\t---------------------------------------\n";
                    }
                }
                break;
            }
            case 4:{
                cout << "\t================ Transcation infor ==================\n";
                cout << "\n\t---------------------------------------\n";
                cout << "\tId : " << bank[logged_in_user].id << endl;
                cout << "\tName : " << bank[logged_in_user].name << endl;
                cout << "\tThe Current Balance : $" << fixed << setprecision(2) << bank[logged_in_user].balance << endl;
                cout << "\n\t---------------------------------------\n";
                break;
            }
            case 5:{
                cout << "\n\tLogout Account\n\n";
                logged_in_user = -1;
                break;
            }
            default:
            cout << "\n\tInvalid Input Option\n";
        }
    }while(op != 5);
}

int main(){

    system("cls");
    do{  
        cout << "\n=========================================\n";
        cout << "\t:::::::: SYSTEM BANK :::::::::::\n";
        cout << "=========================================\n";
        cout << "\t1. Create Account\n";
        cout << "\t2. Login Account\n";
        cout << "\t3. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your Choice (1-3): "; cin >> choice;
        cin.ignore();

        system("cls");
    
        switch(choice){
            case 1:{
                cout << "\n=================== Create Account =====================\n";
                create_acc();
                break;
            }
            case 2:{
                cout << "\n=================== Login Account =====================\n";
                login_acc();
                if(logged_in_user != -1){
                    option();
                }
                break;
            }
            case 3:{
                cout << "\n\t:::::::::: Goodbye for using ::::::::::::\n\n";
                break;
            }
            default:
            cout << "\n\tInvaild Input\n\n)";
        }
    }while(choice != 3);

    return 0;
}