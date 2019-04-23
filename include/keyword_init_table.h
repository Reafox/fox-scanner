/*
    File:    fox_lexeme.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef KEYWORD_INIT_TABLE_H
#define KEYWORD_INIT_TABLE_H
#   include <cstddef>
#   include "../include/state_for_char.h"
namespace fox_scanner{
    extern const State_for_char keyword_init_table[];
    extern const std::size_t    keyword_init_table_size;
};
#endif
