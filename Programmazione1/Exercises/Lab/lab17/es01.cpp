#include <iostream>
#include <cstring>

struct student {
    char name[30];
    char surname[30];
    int serial;
    float gpa; 
};

void print_student(student * s);
student* generate_student (char name[], char surname[], int serial, float gpa);

int main() {
    char name[30] = {};
    char surname[30] = {};
    int serial = 0;
    float gpa = 0; 

    std::cout << "Enter name: " << std::endl;
    std::cin.getline(name, 30);
    std::cout << "Enter last name: " << std::endl;
    std::cin.getline(surname, 30);
    std::cout << "Enter serial number: " << std::endl;
    std::cin >> serial;
    std::cout << "Enter gpa: " << std::endl;
    std::cin >> gpa;

    student* s = generate_student(name, surname, serial, gpa);
    print_student(s);
    delete s;
    return 0;
}

void print_student(student * s) {
    std::cout << "{" << std::endl;
    std::cout << "\tname:" << s->name << std::endl;
    std::cout << "\tsurname:" << s->surname << std::endl;
    std::cout << "\tserial:" << s->serial << std::endl;
    std::cout << "\tgpa:" << s->gpa << std::endl;
    std::cout << "}" << std::endl;
}

student* generate_student (char name[], char surname[], int serial, float gpa) {
    student* s = new student;
    strcpy(s->name, name);
    strcpy(s->surname, surname);
    s->serial = serial;
    s->gpa = gpa;

    return s;
}