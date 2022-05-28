#include "TextBag.h"

TextBag::TextBag()
{

}

TextBag::~TextBag()
{

}

void TextBag::addWord(const std::string &rcWord)
{
    mcWords.push_back(rcWord);
}

std::string TextBag::getWord(int pos) const
{
    return mcWords[pos];
}

int TextBag::getSize() const
{
    return mcWords.size();
}