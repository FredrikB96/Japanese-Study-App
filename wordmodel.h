#ifndef WORDMODEL_H
#define WORDMODEL_H

#include "worditem.h"

#include <Vector>


class WordModel
{
public:
    WordModel();

    void addWord(std::string Kanji = "",std::string kana = "",  std::string Translation = "", std::string Sentence = "", std::string SentanceTS = "");
    void removeWord(int id= 0, std::string Kanji = "");

private:
    std::vector<WordItem> words;
    std::vector<int> ids;


    std::vector<WordItem>::iterator findWorditerator(int id = 0, std::string Kanji = "");
};

#endif // WORDMODEL_H
