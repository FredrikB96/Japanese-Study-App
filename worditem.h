#ifndef WORDITEM_H
#define WORDITEM_H

#include <string>


class WordItem
{
public:
    WordItem(int id = 0, std::string Kanji = "",std::string kana = "",  std::string Translation = "", std::string Sentence = "", std::string SentanceTS = "");
    int getID();
    std::string getKanji();
    std::string getTranslation();
    std::string getSentence();
    std::string getSentencets();
    std::string getKana();

private:
    int ID;
    std::string Kanji;
    std::string Kana;
    std::string Translation;
    std::string Sentence;
    std::string SentenceTS;
};

#endif // WORDITEM_H
