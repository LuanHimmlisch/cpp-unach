#include <iostream>

using namespace std;

int main()
{
    const int STUDENT_NUMBER = 2;
    string names[STUDENT_NUMBER];
    int ages[STUDENT_NUMBER];

    for (size_t i = 0; i < STUDENT_NUMBER; i++)
    {

        string name;
        int age;

        int student = i + 1;

        cout << "\nInserta el nombre del estudiante " << student << endl;
        cin >> name;

        cout << "\nInserta la edad del estudiante " << student << endl;
        cin >> age;

        names[i] = name;
        ages[i] = age;

        if (i == STUDENT_NUMBER - 1)
        {
            string greater, lesser;

            cout << "\nHola buen día " << names[0] << " tienes " << ages[0] << " y " << names[1] << " tienes " << ages[1] << ", por lo tanto ";

            if (ages[0] > ages[1])
            {
                greater = names[0];
                lesser = names[1];
            }
            else if (ages[1] > ages[0])
            {
                greater = names[1];
                lesser = names[0];
            }
            else
            {
                cout << names[0] << " y " << names[1] << " tienen la misma edad" << endl;
                return 0;
            }

            cout << greater << " es mayor que " << lesser << endl;
        }
    }

    return 0;
}