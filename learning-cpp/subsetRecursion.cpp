#include<iostream>
//here we should send reference of string to stop copying each time.
void subSet(std::string *word,std::string currentWord,int length)
{
    if(length==(word.length()))
    {
        std::cout<<currentWord<<std::endl;
        return;
    }
    subSet(*word,currentWord,length+1);
    currentWord=currentWord+**word[length];
    subSet(*word,currentWord,length+1);
}

int main()
{
    std::string word="abc";
    // std::cout<<(word.length());
    subSet(&word,"",0);
    return 0;
}