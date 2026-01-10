# include <iostream>
using namespace std;

int main()
{
    double force,mass,accel,answer;
    int choice;
    cout<<
    "What do you wish to find?\n"
    "1.Force\n"
    "2.Mass\n"
    "3.Acceleration\n"
    "Enter:";
    cin >> choice;

    if (choice==1)
    {
        cout<<"Enter mass:";
        cin >> mass;
        cout << "Enter acceleration:";
        cin >> accel;
        answer = mass*accel;
        cout<<"Force = "<<answer<<" N";
    }
    else if (choice==2)
    {
        cout<<"Enter Force:";
        cin >> force;
        cout << "Enter acceleration:";
        cin >> accel;
        answer = force/accel;
        cout<<"Mass = "<<answer<<"kg";
    }
    return 0;
}