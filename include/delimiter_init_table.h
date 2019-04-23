/*
    File:    delimiter_init_table.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef DELIMITER_INIT_TABLE_H
#define DELIMITER_INIT_TABLE_H
#   include <cstddef>
#   include "../include/state_for_char.h"
namespace fox_scanner{
    extern const State_for_char delimiter_init_table[];
    extern const std::size_t    delimiter_init_table_size;
};
#endif
