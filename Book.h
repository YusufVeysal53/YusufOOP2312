#ifndef BOOK_H
#define BOOK_H
#include <string>
class Book{

public:
    std::string title;
    std::string author;
    std::string format;
    int pubYear;
    int numOfPages;
    Book();
    Book(std::string, std::string);
    Book(std::string, std::string, int, int, int);
    void setTitle(std::string);
    std::string getTitle();
    void setAuthor(std::string);
    std::string getAuthor();
    void setFormat(int);
    std::string getFormat();
    void setPubYear(int);
    int getPubYear();
    void setNumOfPages(int);
    int getNumOfPages();
    void setBook(std::string, std::string, int, int, int);
    void displayBook();
    float estimatedBookWeight();
    float estimatedReadingTime(float);
};

#endif