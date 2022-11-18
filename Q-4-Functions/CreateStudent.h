#pragma once
#include <stdbool.h>

// header file to assignment 3 REFACTOR, question 4
// PROG71985 - F22
// Naryan Sambhi - NOV 2022

//max size of names
#define MAXSIZE  10

//struct student

typedef struct name
{
    char first_name[MAXSIZE];
    char middle_name[MAXSIZE];
    char last_name[MAXSIZE];

}NAME;

typedef struct student
{
    int birthyear;
    int birthmonth;
    int random_code;

    NAME student;

}STUDENT;

STUDENT CreateStudent(int birthyear, int birthmonth, int radom_code, char* First_name, char* Middle_name, char* Last_name);

PrintArrayOfStudents(STUDENT s[]);

///CURRENTLY UNUSED///

//void PrintStudent(STUDENT student);

//bool GetFirstNameFromStudentWithReturn(STUDENT s, char* buffer);

//bool GetMiddleNameFromStudentWithReturn(STUDENT s, char* buffer);

//bool GetLastNameFromStudentWithReturn(STUDENT s, char* buffer);

