/*
    File:    get_processed_text.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/
#ifndef GET_PROCESSED_TEXT_H
#define GET_PROCESSED_TEXT_H
#include <string>
/* Function that opens a file with text. Returns a string with text if the file was
 * opened and the file size is not zero, and an empty string otherwise. */
std::u32string get_processed_text(const char* name);
#endif
