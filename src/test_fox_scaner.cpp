/*
    File:    test_fox_scaner.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include <cstdio>
#include "../include/test_fox_scaner.h"
#include "../include/fox_lexeme.h"

void test_fox_scaner(const std::shared_ptr<fox_scanner::Scanner>& foxsc)
{
    fox_scanner::Fox_token lti;
    fox_scanner::Lexem_code llc;
    do{
        lti    = foxsc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = foxsc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != fox_scanner::Lexem_code::Nothing);
}
