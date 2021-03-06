/*
    File:    get_processed_text.cpp
    Created: 19 April 2019 at 11:41 Moscow time
    Author:  Сарыкова Анастасия Александровна
    E-mails: nastya.s@gmail.com
*/

#include "../include/get_processed_text.h"
#include "../include/char_conv.h"
#include "../include/file_contents.h"

std::u32string get_processed_text(const char* name){
    auto contents = get_contents(name);
    auto str      = contents.second;
    switch(contents.first){
        case Get_contents_return_code::Normal:
            if(!str.length()){
                puts("File length is equal to zero.");
                return std::u32string();
            }else{
                return utf8_to_u32string(str.c_str());
            }
            break;

        case Get_contents_return_code::Impossible_open:
            puts("Unable to open file.");
            return std::u32string();

        case Get_contents_return_code::Read_error:
            puts("Error reading file.");
            return std::u32string();
    }
    return std::u32string();
}
