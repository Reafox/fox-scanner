/*
    File:    errors_and_tries.h
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#ifndef ERRORS_AND_TRIES_H
#define ERRORS_AND_TRIES_H

#include <memory>
#include "../include/error_count.h"
#include "../include/char_trie.h"
struct Errors_and_tries{
    Errors_and_tries()                                    = default;
    ~Errors_and_tries()                                   = default;
    Errors_and_tries(const Errors_and_tries&)             = default;
    Errors_and_tries& operator=(const Errors_and_tries&)  = default;

    std::shared_ptr<Error_count>  ec_;
    std::shared_ptr<Char_trie>    ids_trie_;
    std::shared_ptr<Char_trie>    strs_trie_;
};
#endif
