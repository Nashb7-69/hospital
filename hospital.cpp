#include <iostream>
#include <string>
using namespace std;

class Department {
public:
    string doctors;
    string alternative;

    int active_time(int x,int y) {
        int bruh = x-y;
        if (bruh > 0) {
            cout << bruh;
        } else if (bruh < 0) {
            bruh = -bruh;
        }
        return bruh;
    }
};

int Mystical(int doctor);
int children(int doctor);
int Orthopedic (int doctor);
int Dental (int doctor);


int main() {
    cout << "Choose department \n"<<" (1 for Mystical):\n ";
    cout<<  "(2 for children section)\n";
    cout<<  "(3 for Orthopedic section)\n";
    cout<<  "(4 for Dental  section)\n";
    int chosen_department;
    cin >> chosen_department;

    if (chosen_department == 1) {
        cout << "Choose a doctor (1 for Dr. Smith, 2 for Dr. Bob): ";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2) {
            Mystical(chosen_doctor);
        } else {
            cout << "Invalid doctor choice." << endl;
        }
    }




 if (chosen_department == 2) {
        cout << "Choose a doctor (1 for dr.sara 2 for Dr.hesham): ";
        int chosen_doctor;
        cin >> chosen_doctor;

        if (chosen_doctor == 1 || chosen_doctor == 2) {
          children(chosen_doctor);
        } else {
            cout << "Invalid doctor choice." << endl;
        }
 }

        if (chosen_department == 3) {
        cout << " chose a doctor (1 ali 2 for hana)";
        int chosen_doctor;
        cin >> chosen_doctor;
       
        if (chosen_doctor == 1 || chosen_doctor == 2) {
          Orthopedic(chosen_doctor);
        } else {
            cout << "Invalid doctor choice." << endl;
        }
     } 
        if (chosen_department == 4) {
        cout << " chose a doctor (1 muad  2 for wahdan)";
        int chosen_doctor;
        cin >> chosen_doctor;
       
        if (chosen_doctor == 1 || chosen_doctor == 2) {
          Dental (chosen_doctor);
        } else {
            cout << "Invalid doctor choice." << endl;
        }
     } 
       
    return 0;
}

int Mystical(int doctor) {
    Department mysticalDepartment;

    mysticalDepartment.doctors = "Dr. Smith";
    mysticalDepartment.alternative = "Dr. Bob";
 

    if (doctor == 1) {
       //calling Sara's functions
       cout << "You have chosen Dr. " << mysticalDepartment.doctors << endl;
        cout<<"from 7 to 15\n";
      cout << mysticalDepartment.active_time(6,15) << endl;
 
    }
     else if (doctor == 2) {
         cout << mysticalDepartment.alternative << endl;
         cout<<"from 15 to 24\n";
        cout <<"active hours: "<<" "<< mysticalDepartment.active_time(15,24) << endl;



       
       }

}


       int children(int doctor){
          Department children ;
        children.doctors="Dr.sara";
        children.alternative="Dr.Hesham";

            if (doctor == 1) {  
         cout << children.doctors << endl;
        cout<<"from 7 to 15\n";
        cout <<"active hours: "<<" "<< children.active_time(6,15) << endl; 
        } 
        
        else if (doctor == 2) {
         cout << children.alternative << endl;
         cout<<"from 15 to 24\n";
        cout <<"active hours: "<<" "<< children.active_time(15,24) << endl;
       
    }


       
    }

    
int Orthopedic(int doctor){


     Department Orthopedic;
        Orthopedic.doctors="Dr. ali";
        Orthopedic.alternative="Dr. hana"; 
        if (doctor == 1) {  
         cout << Orthopedic.doctors << endl;
        cout<<"from 7 to 15\n";
        cout <<"active hours: "<<" "<< Orthopedic.active_time(6,15) << endl; 
        } 
        
        else if (doctor == 2) {
         cout << Orthopedic.alternative << endl;
         cout<<"from 15 to 24\n";
        cout <<"active hours: "<<" "<< Orthopedic.active_time(15,24) << endl;
       
    }


       
    }

    int Dental (int doctor){
     
     


 Department Dental;
        Dental.doctors="Dr. muad";
        Dental.alternative="Dr. wahdan"; 
        if (doctor == 1) {  
         cout << Dental.doctors << endl;
        cout<<"from 7 to 15\n";
        cout <<"active hours: "<<" "<< Dental.active_time(6,15) << endl; 
         cout<<"Medical examination fees is 3k ";
        } 
        
        else if (doctor == 2) {
         cout << Dental.alternative << endl;
         cout<<"from 15 to 24\n";
        cout <<"active hours: "<<" "<< Dental.active_time(15,24) << endl;
        // cout<<"Medical examination fees is 3k ";
        // cout<<"are u sure u wana transfer 3k? ";
        

    }
    }
       
 



    