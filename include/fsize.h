/*
    File:    fsize.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef FSIZE_H
#define FSIZE_H
#include <cstdio>
/**
 * \param [in] fptr  the file pointer
 * \return           a) (-1), if fptr == NULL
 *                   b) the size of the file in bytes, otherwise
 */
long fsize(FILE* fptr);
#endif
