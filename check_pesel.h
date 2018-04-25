#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short PESEL[11];
int valid = 0;

int getBirthYear();
int getBirthMonth();
int getBirthDay();
int checkSum();
int checkMonth();
int checkDay();
int leapYear(int year);
void PeselValidator(char *PESELNumber);