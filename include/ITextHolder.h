#pragma once
#include <string>

class ITextHolder 
{

    public:
    
        virtual ~ITextHolder() {};
        virtual void addWord(const std::string&) = 0;
        virtual std::string getWord(int) const = 0;
        virtual int getSize() const = 0;
};