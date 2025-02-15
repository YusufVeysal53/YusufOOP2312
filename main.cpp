#include <iostream>
#include "Book.h"
#include "Book.cpp"


int main(){
    float readingSpeed; //this will be given by user

    //default  constructor
    Book book0;
    std::cout << "default constructor" << std::endl;
    book0.displayBook();
    std::cout << "estimated weight" << book0.estimatedBookWeight() << "oz" << std::endl;
    std::cout << "Please enter your reading speed" << std::endl;
    std::cin >> readingSpeed;
    std::cout << "estimated reading time" << book0.estimatedReadingTime(readingSpeed) << "minutes" << std::endl;

    //constructor with title and author parameter
    Book book1("Industrial Society and its Future", "Ted Kaczynski");
    std::cout << "second constructor" << std::endl;
    book1.displayBook();
    std::cout << "estimated weight" << book1.estimatedBookWeight() << "oz" << std::endl;
    std::cout << "Please enter your reading speed" << std::endl;
    std::cin >> readingSpeed;
    std::cout << "estimated reading time" << book1.estimatedReadingTime(readingSpeed) << "minutes" << std::endl;

    //constructor with all parameters
    Book book2("Crime and Punishment", "Fyodor Dostoevski", 2, 1866, 448);
    std::cout << "third constructor" << std::endl;
    book2.displayBook();
    std::cout << "estimated weight" << book2.estimatedBookWeight() << "oz" << std::endl;
    std::cout << "Please enter your reading speed" << std::endl;
    std::cin >> readingSpeed;
    std::cout << "estimated reading time" << book2.estimatedReadingTime(readingSpeed) << "minutes" << std::endl;

    //testing setBook function
    Book book3; // creating new instance with default constructor
    book3.setBook("metamorphosis", "Franz Kafka", 2, 1915, 201);
    std::cout << "setBook function" << std::endl;
    book3.displayBook();
    std::cout << "estimated weight" << book3.estimatedBookWeight() << "oz" << std::endl;
    std::cout << "Please enter your reading speed" << std::endl;
    std::cin >> readingSpeed;
    std::cout << "estimated reading time" << book3.estimatedReadingTime(readingSpeed) << "minutes" << std::endl;

}