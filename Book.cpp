#include "Book.h"
#include <iostream>
#include <cmath>

// Default Constructor
Book::Book() : title(""), author(""), format(""), pubYear(0), numOfPages(0) {
    setFormat(0);
}

// 2-Parameter Constructor
Book::Book(std::string title, std::string author) 
    : title(title), author(author), format(""), pubYear(0), numOfPages(0) {
    setFormat(0);
}

// Full Constructor
Book::Book(std::string title, std::string author, int formatcase, int pubYear, int numOfPages)
    : title(title), author(author), format(""), pubYear(pubYear), numOfPages(numOfPages) {
    setFormat(formatcase);
}

// Setter and Getter for Title
void Book::setTitle(std::string newtitle) {
    this->title = newtitle;
}

std::string Book::getTitle() {
    return this->title;
}

// Setter and Getter for Author
void Book::setAuthor(std::string newauthor) {
    this->author = newauthor;
}

std::string Book::getAuthor() {
    return this->author;
}

// Setter and Getter for Format
void Book::setFormat(int formatcase) {
    switch (formatcase) {
        case 1: this->format = "Hardcover"; break;
        case 2: this->format = "Paperback"; break;
        case 3: this->format = "Audiobook"; break;
        case 4: this->format = "EBook"; break;
        default: this->format = ""; break;
    }
}

std::string Book::getFormat() {
    return this->format;
}

// Setter and Getter for Publication Year
void Book::setPubYear(int year) {
    this->pubYear = year;
}

int Book::getPubYear() {
    return this->pubYear;
}

// Setter and Getter for Number of Pages
void Book::setNumOfPages(int numPages) {
    this->numOfPages = numPages;
}

int Book::getNumOfPages() {
    return this->numOfPages;
}

// SetBook Function
void Book::setBook(std::string title, std::string author, int formatcase, int pubYear, int numOfPages) {
    this->title = title;
    this->author = author;
    setFormat(formatcase);
    this->pubYear = pubYear;
    this->numOfPages = numOfPages;
}

// Display Function
void Book::displayBook() {
    std::cout << "Title : " << this->title << " by Author : " << this->author << std::endl;
    std::cout << "Format : " << this->format << std::endl;
    std::cout << "Publication Year : " << this->pubYear << std::endl;
    std::cout << "Number of Pages : " << this->numOfPages << std::endl;
}

// Estimated Book Weight Calculation
float Book::estimatedBookWeight() {
    float paperWeight = 0.171;
    float hardcoverWeight = 1.9;
    float paperbackWeight = 0.3;
    float finalWeight = 0;
    int numPaper = std::ceil(this->numOfPages / 2.0);

    if (this->format == "Hardcover") {
        finalWeight = hardcoverWeight + (paperWeight * numPaper);
    } else if (this->format == "Paperback") {
        finalWeight = paperbackWeight + (paperWeight * numPaper);
    }

    return finalWeight;
}

// Estimated Reading Time Calculation
float Book::estimatedReadingTime(float rSpeed) {
    return this->numOfPages / rSpeed;
}
