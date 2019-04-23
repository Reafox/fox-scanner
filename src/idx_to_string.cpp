/*
    File:    idx_to_string.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include "../include/idx_to_string.h"
#include "../include/char_conv.h"
std::string idx_to_string(std::shared_ptr<Char_trie> t,
                          size_t                     idx,
                          std::string                default_value)
{
    auto u32str = t->get_string(idx);
    std::string s = u32string_to_utf8(u32str);
    return idx ? s : default_value;
}
