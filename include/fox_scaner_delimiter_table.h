/*
    File:    fox_scaner_delimiter_table.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef FOX_SCANER_DELIMITER_TABLE_H
#define FOX_SCANER_DELIMITER_TABLE_H
#   include "../include/elem.h"
#   include "../include/fox_lexeme.h"
namespace fox_scanner{
    extern const trans_table::Elem<Lexem_code> delimiters_jump_table[];
};
#endif
