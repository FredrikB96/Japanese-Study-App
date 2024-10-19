#include "wordmodel.h"

WordModel::WordModel() {}

//     WordItem(int id = 0, std::string Kanji = "",std::string kana = "",  std::string Translation = "", std::string Sentence = "", std::string SentanceTS = "");

void WordModel::addWord(std::string Kanji,std::string kana,  std::string Translation, std::string Sentence, std::string SentanceTS)
{

    int lastID = ids.back();
    WordItem item = WordItem(ids.back(),Kanji,kana,Translation,Sentence,SentanceTS);

    words.insert(words.end(),WordItem(ids.back(),Kanji,kana,Translation,Sentence,SentanceTS));
}

void WordModel::removeWord(int id, std::string Kanji)
{
    words.erase(findWorditerator(id,Kanji));
}

std::vector<WordItem>::iterator WordModel::findWorditerator(int id, std::string Kanji)
{
    std::vector<WordItem>::iterator index;
    for(std::vector<WordItem>::iterator iterator = words.begin();iterator != words.end();)
    {
        if((iterator->getID() == id && Kanji == "") || (iterator->getKanji() == Kanji && iterator->getID() == 0))
        {
            return index;
        }else if (iterator->getID() == id && iterator->getKanji() == Kanji)
        {
            return index;
        }
        index++;
    }
    return index;
}
