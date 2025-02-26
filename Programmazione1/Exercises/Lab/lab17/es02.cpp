#include <iostream>
#include <fstream>
#include <cstring>

struct student {
    char name[30];
    char surname[30];
    int serial;
    float gpa; 
};

void print_student(student* s);
student* generate_student(char name[], char surname[], int serial, float gpa);
student** read_from_file(char filename[], int& size);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: [filename]" << std::endl;
        exit(1);
    }

    int size = 0;
    student** students = read_from_file(argv[1], size);
    for(int i = 0; i < size; i++) {
        print_student(students[i]);
        delete students[i];
    }

    delete [] students;
    return 0;
}

void print_student(student* s) {
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

student** read_from_file(char filename[], int& size) {
    std::fstream input;
    input.open(filename, std::ios::in);

    if (input.fail()) {
        std::cerr << "Error while opening file" << std::endl;
        exit(2);
    }

    size = 0;
    const int BUFF_SIZE = 256;
    char buffer[BUFF_SIZE];
    while (input.getline(buffer, BUFF_SIZE)) {
        size++;
    }

    input.close();
    input.open(filename, std::ios::in);

    student** students = new student*[size];
    student buff;
    int idx = 0;
    while (input >> buff.name >> buff.surname >> buff.serial >> buff.gpa) {
        students[idx] = generate_student(buff.name, buff.surname, buff.serial, buff.gpa);
        idx++;
    }

    return students;
}