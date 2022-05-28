#include "TextMumbleDecorator.h"

TextMumbleDecorator::TextMumbleDecorator(ITextHolder *pcTextHolder) : ITextDecorator(pcTextHolder)
{ 
}
TextMumbleDecorator::~TextMumbleDecorator()
{}

std::string TextMumbleDecorator::getWord(int pos) const
{
    std::string cWord = ITextDecorator::getWord(pos);
    std::string cNewWord;
    static const std::string cPunc = ".,:;?!";

    for(auto elem : cWord)
    {
        if ( std::string::npos == cPunc.find(elem))
        {
            cNewWord.push_back(std::tolower(elem));
        }
    }
    return cNewWord;
}