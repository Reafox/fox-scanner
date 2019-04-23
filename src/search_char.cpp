/*
    File:    search_char.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include "../include/search_char.h"
int search_char(char32_t c, const char32_t* array)
{
    char32_t ch;
    int      curr_pos = 0;
    for(char32_t* p = const_cast<char32_t*>(array); (ch = *p++); ){
        if(ch == c){
            return curr_pos;
        }
        curr_pos++;
    }
    return THERE_IS_NO_CHAR;
}
