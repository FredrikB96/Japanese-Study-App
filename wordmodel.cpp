#include "wordmodel.h"

WordModel::WordModel() {}


void WordModel::addWord(std::string Kanji,std::string kana,  std::string Translation, std::string Sentence, std::string SentanceTS)
{
    int lastID = ids.at(1);
    words.insert(words.end(),new WordItem(ids.))
}

void WordModel::removeWord(int id, std::string Kanji)
{

}
