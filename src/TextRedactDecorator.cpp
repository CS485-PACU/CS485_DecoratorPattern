#include "TextRedactDecorator.h"

TextRedactDecorator::TextRedactDecorator(ITextHolder *pcTextHolder, 
std::initializer_list<std::string> cList) : ITextDecorator(pcTextHolder)
{
    mcRedactedWords.insert(mcRedactedWords.end(), cList.begin(), cList.end());
}

TextRedactDecorator::~TextRedactDecorator()
{}

std::string TextRedactDecorator::getWord(int pos) const
{
    std::string cWord;

    cWord = ITextDecorator::getWord(pos);
    if (std::find(mcRedactedWords.begin(), mcRedactedWords.end(), cWord) != mcRedactedWords.end())
    {
        std::string cTmp(cWord.length(), 'X');
        cWord = cTmp;
    }
    return cWord;
}
