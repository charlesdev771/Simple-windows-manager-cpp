#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int create_display(); // Prototypes of functions
void shutdown();
void create_paste();
void delete_paste();
void goodbye();


int main()
{

    int menu_option = create_display();

    switch(menu_option) {

        case 0:
            goodbye();
            break;

        case 1:
            shutdown();
            break;

        case 2:
            create_paste();
            break;

        case 3:
            delete_paste();
            break;

        default:
            create_display();
            break;

    }


    return 0;
} //END MAIN function


int create_display()
{
    int choice;

    system("cls");
    cout << "######################==######################" << endl;
    cout << "############WELCOME TO CPP MANAGER############" << endl;
    cout << "######################==######################" << endl;

    cout << "1) Shutdown PC " << endl;
    cout << "2) CREATE PASTE " << endl;
    cout << "3) DELETE PASTE " << endl;
    cout << "0) EXIT " << endl;

    cin >> choice;

    if(choice < 0 || choice > 3) {

        create_display();
    }

    return choice;

}


void shutdown()
{
    system("shutdown -s -t 00");
}


void create_paste()
{
    system("mkdir novaPasta");
}


void delete_paste()
{
     system("rmdir novaPasta");
}


void goodbye()
{
    cout << "Goodbye...";
}

