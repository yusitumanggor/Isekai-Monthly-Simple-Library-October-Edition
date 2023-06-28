#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
        time_t now = time(0);
        tm *ltm = localtime(&now);
        string phoneNum, action, borrowDate, name, id, major, bookName;
        int genre, days, book, date, month, year;
        float fine = 0;
        cout << "              Isekai's Monthly Library             " << endl;
        cout << "                 October Edition                   " << endl;
        cout << "===================================================" << endl;
        cout << "Insert your name: ";
        getline(cin, name);
        cout << "Insert your student ID: ";
        getline(cin, id);
        cout << "Insert your major: ";
        getline(cin, major);
        cout << "Insert Phone number: ";
        getline(cin, phoneNum);
        system("cls");
        cout << "              Isekai's Monthly Library             " << endl;
        cout << "                 October Edition                   " << endl;
        cout << "===================================================" << endl;
        cout << "1. Borrow                                          " << endl;
        cout << "2. Return                                          " << endl;
        cout << "===================================================" << endl;
        cout << "Choice: ";
        cin >> action;
        system("cls");
        if(action == "1"){
        cout << "                       Genre                       " << endl;
        cout << "===================================================" << endl;
        cout << "1. Fantasy" << endl;
        cout << "2. Kingdom" << endl;
        cout << "3. Horror" << endl;
        cout << "4. Romance" << endl;
        cout << "5. Thriller" << endl;
        cout << "6. Comedy" << endl;
        cout << "===================================================" << endl;
        cout << "Choose genre: ";
        cin >> genre;
        system("cls");
        switch(genre){
        case 1:
            cout << "                  Fantasy                          " << endl;
            cout << "===================================================" << endl;
            cout << "1. White Blood" << endl;
            cout << "2. Born From Death" << endl;
            cout << "3. Tower Of God" << endl;
            cout << "4. Hero Killer" << endl;
            cout << "5. Noblesse" << endl;
            cout << "===================================================" << endl;
            cout << "Choose Book: ";
            cin >> book;
            switch(book){
            case 1:
                bookName = "White Blood";
            break;
            case 2:
                bookName = "Born From Death";
            break;
            case 3:
                bookName = "Tower Of God";
            break;
            case 4:
                bookName = "Hero Killer";
            break;
            case 5:
                bookName = "Noblesse";
            break;
            default:
                system("cls");
            cout << "Invalid Input";
            return 0;
        }
        break;
        case 2:
        cout << "                       Kingdom                     " << endl;
        cout << "===================================================" << endl;
        cout << "1. I Raised A Beast" << endl;
        cout << "2. Prince Maker" << endl;
        cout << "3. Agatha" << endl;
        cout << "4. Infinite Sky" << endl;
        cout << "5. The Second Marriage" << endl;
        cout << "===================================================" << endl;
        cout << "Choose Book: ";
        cin >> book;
        switch(book){
        case 1:
            bookName = "I Raised A Beast";
            break;
        case 2:
            bookName = "Prince Maker";
            break;
        case 3:
            bookName = "Agatha";
            break;
        case 4:
            bookName = "Infinite Sky";
            break;
        case 5:
            bookName = "The Second Marriage";
            break;
        default:
            system("cls");
            cout << "Invalid Input";
            return 0;
        }
        break;
        case 3:
        cout << "                       Horror                      " << endl;
        cout << "===================================================" << endl;
        cout << "1. Half Ghost" << endl;
        cout << "2. 10 PM" << endl;
        cout << "3. The Call" << endl;
        cout << "4. Dead Life" << endl;
        cout << "5. Nightmare" << endl;
        cout << "===================================================" << endl;
        cout << "Choose Book: ";
        cin >> book;
        switch(book){
        case 1:
            bookName = "Half Ghost";
            break;
        case 2:
            bookName = "10 PM";
            break;
        case 3:
            bookName = "The Call";
            break;
        case 4:
            bookName = "Dead Life";
            break;
        case 5:
            bookName = "Nightmare";
            break;
        default:
            system("cls");
            cout << "Invalid Input";
            return 0;
        }

        break;
        case 4:
        cout << "                       Romance                     " << endl;
        cout << "===================================================" << endl;
        cout << "1. Touch Touch You" << endl;
        cout << "2. Wonderwall" << endl;
        cout << "3. iMarried" << endl;
        cout << "4. True Beauty" << endl;
        cout << "5. Love Lock" << endl;
        cout << "===================================================" << endl;
        cout << "Choose Book: ";
        cin >> book;
        switch(book){
        case 1:
            bookName = "Touch Touch You";
            break;
        case 2:
            bookName = "Wonderwall";
            break;
        case 3:
            bookName = "iMarried";
            break;
        case 4:
            bookName = "True Beauty";
            break;
        case 5:
            bookName = "Love Lock";
            break;
        default:
            system("cls");
            cout << "Invalid Input";
            return 0;
        }

        break;
        case 5:
        cout << "                     Thriller                      " << endl;
        cout << "===================================================" << endl;
        cout << "1. Diary Of Desire" << endl;
        cout << "2. The Predator" << endl;
        cout << "3. Bloody Gaze" << endl;
        cout << "4. Help Me" << endl;
        cout << "5. The Evil" << endl;
        cout << "===================================================" << endl;
        cout << "Choose Book: ";
        cin >> book;
        switch(book){
        case 1:
            bookName = "Diary Of Desire";
            break;
        case 2:
            bookName = "The Predator";
            break;
        case 3:
            bookName = "Bloody Gaze";
            break;
        case 4:
            bookName = "Help Me";
            break;
        case 5:
            bookName = "The Evil";
            break;
        default:
            system("cls");
            cout << "Invalid Input";
            return 0;
        }
        break;
        case 6:
        cout << "                       Comedy                      " << endl;
        cout << "===================================================" << endl;
        cout << "1. Bad Guy" << endl;
        cout << "2. Just Friends" << endl;
        cout << "3. Sickomik" << endl;
        cout << "4. The Holy Idol" << endl;
        cout << "5. Twin Connect" << endl;
        cout << "===================================================" << endl;
        cout << "Choose Book: ";
        cin >> book;
        switch(book){
        case 1:
            bookName = "Bad Guy";
            break;
        case 2:
            bookName = "Just Friends";
            break;
        case 3:
            bookName = "Sickomik";
            break;
        case 4:
            bookName = "The Holy Idol";
            break;
        case 5:
            bookName = "Twin Connect";
            break;
        default:
            system("cls");
            cout << "Invalid Input";
            return 0;
        }

}
        system("cls");
        cout << "               Borrow Information                  " << endl;
        cout << "===================================================" << endl;
        cout << "Borrower's Information : " << endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Major: " << major << endl;
        cout << "Phone Number: " << phoneNum << endl;
        cout << "Book: " << bookName << endl;
        cout << "Date: " << ltm->tm_mday << "/" << 1+ltm->tm_mon << "/" << 1900+ltm->tm_year << endl;
        cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
        cout << "Returning date: " << 5+ltm->tm_mday << " /" <<1+ltm-> tm_mon << "/" << 1900+ltm-> tm_year << endl;
        cout << "You are given 5 days to return the book            " << endl;
        cout << "Warning! Overdue returning will be charge" << endl;
        cout << "===================================================" << endl;
        } else if(action == "2") {
        cout << "              Isekai's Monthly Library             " << endl;
        cout << "                 October Edition                   " << endl;
        cout << "===================================================" << endl;
        cin.ignore();
        cout << "Insert Borrow Information Below" << endl;
        cout << "Insert Book Name: ";
        getline(cin, bookName);
        cout << "Insert Borrow Date (dd): ";
        cin >> date;
        if(date >= 5+ltm->tm_mday) {
        system("cls");
        cout << "                 Return Information                " << endl;
        cout << "===================================================" << endl;
        cout << "Borrower's Information : "<< endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Major: " << major << endl;
        cout << "Phone Number: " << phoneNum << endl;
        cout << "Book: " << bookName << endl;
        cout << "Date: " << ltm->tm_mday << "/" << 1+ltm->tm_mon << "/" << 1900+ltm->tm_year << endl;
        cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
        cout << "===================================================" << endl;
        cout << "         You are late! You'll be pay the charge            ";
        } else {
            system("cls");
        cout << "                 Return Information                " << endl;
        cout << "===================================================" << endl;
        cout << "Borrower's Information : " << endl;
        cout << "Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Major: " << major << endl;
        cout << "Phone Number: " << phoneNum << endl;
        cout << "Book: " << bookName << endl;
        cout << "Date: " << ltm->tm_mday << "/" << 1+ltm->tm_mon << "/" << 1900+ltm->tm_year << endl;
        cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
        cout << "===================================================" << endl;
        cout << "             Thank you for borrowing ^^            ";
            }
        } else {
            system("cls");
            cout << "Invalid Input";
            return 0;
        }

    return 0;
}


