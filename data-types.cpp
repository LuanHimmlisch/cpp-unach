#include<iostream>
using namespace std;

int main()
{
    const int STUDENTS = 3;
    const int COURSES = 3;

    string names[STUDENTS], lastnames[STUDENTS], years[STUDENTS], heights[STUDENTS], degrees[STUDENTS], grades[STUDENTS*COURSES];

    for (size_t i = 0; i < STUDENTS; i++)
    {
        const string STUDENT = to_string(i+1);
        const int COURSE_BASE = i*COURSES;

        cout << "[Estudiante " + STUDENT + "] Inserta nombre(s): ";
        getline(cin, names[i]);

        cout << "[Estudiante " + STUDENT + "] Inserta apellidos: ";
        getline(cin, lastnames[i]);

        cout << "[Estudiante " + STUDENT + "] Inserta edad: ";
        getline(cin, years[i]);

        cout << "[Estudiante " + STUDENT + "] Inserta tamaño: ";
        getline(cin, heights[i]);

        cout << "[Estudiante " + STUDENT + "] Inserta carrera: ";
        getline(cin, degrees[i]);
        
        for (size_t e = 0; e < COURSES; e++)
        {
            const string COURSE = to_string(e + 1);

            cout << "[Estudiante " + STUDENT + "] Inserta materia (" + COURSE + "): " ;
            getline(cin, grades[COURSE_BASE+e]);
        }
    }

    for (size_t i = 0; i < STUDENTS; i++)
    {
        const int COURSE_BASE = i*COURSES;
        
        float final_grade = 0;

        for (size_t e = 0; e < COURSES; e++)
        {
            final_grade = final_grade + stof(grades[COURSE_BASE+0]);
        }

        final_grade = final_grade/COURSES;

        cout << "\nHola " + names[i] + lastnames[i] + ", felices " + years[i] + " años. " << endl;
        cout << "Cursas la carrera de " + grades[i] + " y tu promedio de calificaciones es " + to_string(final_grade) << endl;

    }
    
    return 0;
}