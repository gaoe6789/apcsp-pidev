#include "student.h"


void printStudent(struct Student* student)
{
  printf("Student:\n");
  printf("Name: %s %s\n", student -> firstName, student -> lastName);
  printf("Age: %d\n", student -> age);
  printf("Student ID: %d\n", student -> studentID);
}
