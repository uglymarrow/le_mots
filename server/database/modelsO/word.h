#pragma once
#include "connect.h"

class Word
{
public:
    Word();
    ~Word();

    Word(const Word&)=delete;
    Word& operator=(const Word&)=delete;

    bool check_word(const std::string& word, const std::string& category = "-");

    bool add_word(const std::string& word, const std::string& category = "-");

    std::string get_word();

    bool update_database(const std::string& filename, bool category);

private:
    Connection_db* con;

};