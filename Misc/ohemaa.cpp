// #include <iostream>
// #include <string>
// using namespace std;

// //class ClassName{};
// class Human{
//     public:
//         //method
//         void characteristics(string name, string hairColour, int height){
//             cout<<name<<" is a human who has "<<hairColour<<" hair and is "<<height<<"cm tall"<<std::endl;
//         }

// };

// int main(){
//     Human Person;

//     Person.characteristics("Ohemaa","Black",160);
//     Person.characteristics("Daniel","Blonde",171);

// }


#include <iostream>
#include <iomanip>
#include <cstdlib> // Needed for system("pause")

using namespace std;

// Function Prototypes
void getInput();
void display();

// Global Variables
int dd, mm, yy;

int main()
{
    getInput();
    display();
    
    // Pauses the console window so you can read the output
    system("pause");
    return 0;
}

// Function to collect input from the user
void getInput()
{
    cout << "Please enter the date in the form dd mm yy: ";
    cin >> dd >> mm >> yy;
}

// Function to format and display the date
void display()
{
    // 2D Array holding month names. 
    // Index 0 is empty so that Month 1 = January, Month 2 = February, etc.
    char mth[13][10] = {
        "", "January", "February", "March", "April",
        "May", "June", "July", "August", "September", 
        "October", "November", "December"
    };

    // Prints the raw numbers with width spacing, followed by the start of the text phrase
    cout << setw(4) << dd << setw(4) << mm << setw(7) << yy << " is " << dd;

    // Switch case to determine the correct grammatical suffix for the day
    switch (dd)
    {
        case 1: case 21: case 31: 
            cout << "st "; 
            break;
        case 2: case 22:          
            cout << "nd "; 
            break;
        case 3: case 23:          
            cout << "rd "; 
            break;
        default:                  
            cout << "th ";
            break;
    }

    // Prints the final month name and year
    cout << mth[mm] << " " << yy << endl;
}