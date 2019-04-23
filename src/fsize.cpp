/*
    File:    fsize.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include "../include/fsize.h"
#include <cstdio>
long fsize(FILE* fptr)
{
    long ret_val = -1;
    if(fptr){
        long current_pos = ftell(fptr);
        fseek(fptr, 0L, SEEK_END);
        ret_val = ftell(fptr);
        fseek(fptr, current_pos, SEEK_SET);
    }
    return ret_val;
}
