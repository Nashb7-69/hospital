#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <winbase.h>
#include <ctime>
using namespace std;

class Department
{
public:
    string doctors;
    string alternative;

    int active_time(int x, int y)
    {
        int bruh = x - y;
        if (bruh > 0)
        {
            cout << bruh;
        }
        else if (bruh < 0)
        {
            bruh = -bruh;
        }
        return bruh;
    }
};

int Mystical(int doctor);
int children(int doctor);
int Orthopedic(int doctor);
int Dental(int doctor);
// int Reservations(int chosen_doctor);

int main()
{

    cout << "\nwelcom to hamzah's hospitl system\n";
    cout << "\nChoose department \n"
         << " 1 for Mystical: \n ";
    cout << "2 for children section: \n";
    cout << " 3 for Orthopedic section: \n";
    cout << " 4 for Dental  section:  \n";
    int chosen_department;
    cin >> chosen_department;

    if (chosen_department == 1)
    {
        cout << "Choose a doctor\n"
             << " 1 for Dr. Smith\n "
             << "2 for Dr. Bob\n ";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2)
        {
            Mystical(chosen_doctor);
        }
        else
        {
            cout << "Invalid doctor choice." << endl;
        }
    }

    if (chosen_department == 2)
    {
        cout << "Choose a doctor\n "
             << "1 for dr.Sara \n"
             << "2 for Dr.Hesham \n: ";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2)
        {
            children(chosen_doctor);
            int result = children(chosen_doctor);
            //  while(result==1||result==2){
            //  if( result==1 ) {
            //  cout<<"u chose the first doc";

            //  }
            // }
        }
        else
        {
            cout << "Invalid doctor choice." << endl;
        }
    }

    if (chosen_department == 3)
    {
        cout << " chose a doctor\n "
             << "1 for Dr. Ali\n"
             << "2 for Dr. Hana \n";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2)
        {
            Orthopedic(chosen_doctor);
        }
        else
        {
            cout << "Invalid doctor choice." << endl;
        }
    }
    if (chosen_department == 4)
    {
        cout << " chose a doctor\n "
             << " 1 Dr. Muad \n"
             << "  2 for Dr.Wahdan\n ";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2)
        {
            Dental(chosen_doctor);
            //   int transactionID = Dental(chosen_doctor);

            // while (transactionID == -1) {
            //     cout << "User said 'no'. Restarting Dental function.\n";
            //     transactionID = Dental(chosen_doctor);
            // }

            // // Do something based on the transaction ID
            // Dental (chosen_doctor);
        }
        else
        {
            cout << "Invalid doctor choice." << endl;
        }
    }

    // while (transactionID == 0) {
    //     cout << "User said 'no'. Restarting Dental function.\n";
    //     transactionID = Dental(selectedDoctor);
    // }

    // // Do something based on the transaction ID
    // AnotherFunction(); // Call another function if the user said 'yes' in Dental

    // return 0;
    // Reservations(doctor);

    return 0;
}

int Mystical(int doctor)
{
    Department mysticalDepartment;

    mysticalDepartment.doctors = "Dr. Smith";
    mysticalDepartment.alternative = "Dr. Bob";

    if (doctor == 1)
    {
        // calling Sara's functions
        cout << "You have chosen " << mysticalDepartment.doctors << endl;
        cout << "from 7 to 15\n";
        cout << "active hours: "
             << " " << mysticalDepartment.active_time(6, 15) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 1;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }
    else if (doctor == 2)
    {
        cout << "You have chosen  " << mysticalDepartment.alternative << endl;
        cout << "from 15 to 24\n";
        cout << "active hours: "
             << " " << mysticalDepartment.active_time(15, 24) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 2;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }
}

int children(int doctor)
{
    Department children;
    children.doctors = "Dr.sara";
    children.alternative = "Dr.Hesham";

    if (doctor == 1)
    {
        cout << "You have chosen " << children.doctors << endl;
        cout << "from 7 to 15\n";
        cout << "active hours: "
             << " " << children.active_time(6, 15) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 1;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }

    else if (doctor == 2)
    {
        cout << "You have chosen  " << children.alternative << endl;
        cout << "from 15 to 24\n";
        cout << "active hours: "
             << " " << children.active_time(15, 24) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 2;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }
}

int Orthopedic(int doctor)
{

    Department Orthopedic;
    Orthopedic.doctors = "Dr. Ali";
    Orthopedic.alternative = "Dr. Hana";
    if (doctor == 1)
    {
        cout << "You have chosen  " << Orthopedic.doctors << endl;
        cout << "from 7 to 15\n";
        cout << "active hours: "
             << " " << Orthopedic.active_time(6, 15) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 1;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }

    else if (doctor == 2)
    {
        cout << "You have chosen " << Orthopedic.alternative << endl;
        cout << "from 15 to 24\n";
        cout << "active hours: "
             << " " << Orthopedic.active_time(15, 24) << "h" << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 2;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }
}

int Dental(int doctor)
{

    Department Dental;
    Dental.doctors = "Dr. Muad";
    Dental.alternative = "Dr. Wahdan";
    if (doctor == 1)
    {
        cout << "You have chosen . " << Dental.doctors << endl;
        cout << "from 7 to 15\n";
        cout << "active hours: "
             << " " << Dental.active_time(6, 15) << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";
            return 1;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }

    else if (doctor == 2)
    {
        cout << "You have chosen  " << Dental.alternative << endl;
        cout << "from 15 to 24\n";
        cout << "active hours: "
             << " " << Dental.active_time(15, 24) << endl;
        cout << "Medical examination fees is 3k ";
        cout << "are u sure u wana transfer 3k? ";
        cout << "\nPress y/Y for yes \n Press n/N for no : ";
        char ch;
        cin >> ch;
        if ((ch == 'y') || (ch == 'Y'))
        {
            cout << "\nTransfering...\n";
            Sleep(2000);
            system("cls");
            cout << "Your request has been sent successfully.\n";
            cout << "Please wait while we process your request.\n";
            Sleep(2000);
            system("cls");
            cout << "Thank you! Your payment of  3k has been recieved and your request will be processed within\n";
            srand(time(NULL));
            int num = rand() % 9 + 1;
            cout << "Transaction ID: " << num << endl;
            cout << "Thank you! Your request has been processed successfully.\n";

            return 2;
        }
        else if ((ch == 'n') || (ch == 'N'))
        {
            system("cls");
            cout << "returning u to the main page " << endl;
            Sleep(2000);
            system("cls");
            return main();
        };
    }
}

// int Reservations(int chosen_doctor){
// int result=Dental(chosen_doctor);

// }
