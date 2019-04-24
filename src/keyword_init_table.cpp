/*
    File:    keyword_init_table.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include "../include/keyword_init_table.h"
#include "../include/mysize.h"

namespace fox_scanner{
    const State_for_char keyword_init_table[] = {
        {0,   U'б'}, {18,  U'в'}, {46,  U'г'},
        {50,  U'д'}, {53,  U'е'}, {57,  U'и'},
        {71,  U'к'}, {88,  U'л'}, {102, U'м'},
        {122, U'н'}, {128, U'о'}, {132, U'п'},
        {150, U'р'}, {156, U'с'}, {173, U'т'},
        {177, U'ф'}, {180, U'ц'}, {192, U'ч'}
    };

    const std::size_t    keyword_init_table_size = size(keyword_init_table);
};
