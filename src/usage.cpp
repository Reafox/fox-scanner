/*
    File:    usage.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include <cstdio>
#include "../include/usage.h"

static const char* usage_str =
    R"~(fox-scanner
Copyright (c) Sarykova A.A., 2019
fox-scanner is a program for a testing of lexical analysis of the educational
programming language Fox.

This program is free sofwtware, and it is licensed under the GPLv3 license.
There is NO warranty, not even MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Usage: %s test_file
)~";

void usage(const char* program_name)
{
    printf(usage_str, program_name);
}
