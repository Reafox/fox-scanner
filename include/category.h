/*
    File:    category.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef CATEGORY_H
#define CATEGORY_H
namespace fox_scanner{
    enum class Category : uint32_t{
        Spaces,       Other,            Id_begin,
        Id_body,      Keyword_begin,    Delimiter_begin,
        Double_quote, Letters_Xx,       Letters_Bb,
        Letters_Oo,   Single_quote,     Dollar,
        Hex_digit,    Oct_digit,        Bin_digit,
        Dec_digit,    Zero,             Letters_Ee,
        Plus_minus,   Precision_letter, Digits_1_to_9,
        Point
    };
};
#endif
