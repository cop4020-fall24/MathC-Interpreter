#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <unordered_map>
#include <memory>
#include <stdexcept>

/*1. Tokenization (Lexer)
The lexer reads the source code character by character and groups them into meaningful tokens. */

#ifndef Tokenization
#define Tokenization

// DEFINE HERE YOUR TokenType CLASS 


// DEFINE HERE YOUR Token struct 



class Lexer {
public:
    Lexer(/*Complite the code*/ ){ /*Define the function*/}

    /*complite your code*/ scanTokens() {
        while (/*complite your code*/) {
            start = current;
            /*complite your code*/;
        }

        tokens.emplace_back(/*complite the code*/);
        return /*complite the code*/;
    }

private:
    /*Define your source variable*/
    /*Define your tokens vector*/

    /*Define your start variable*/
    /*Define your current varable*/ 

    /*Define your line variable*/

    /*Define your keywords unordered map*/

      
    /*Define the returning type*/ isAtEnd() {
        /*implement the function here*/
    }

    /*Define the returning type*/ advance() {
        /*implement the function here*/
    }

    void addToken(/*Define the parameters*/) {
        /*Implement your function  here*/
    }

    bool match(/*Define the parameters*/) {
        /*Implement your function  here*/
    }

    char peek() {
        /*Implement your function  here*/
    }

    void scanToken() {
        /*Implement your function  here*/
        switch (/*write your parameter*/) {
            case /*stament*/ : /*task*/ ; break;
            case /*stament*/ : /*task*/ ; break;
            case /*stament*/ : /*task*/ ; break;
            case /*stament*/ : /*task*/ ; break;
            /*add all needed cases*/
            case '/':
                if (match('/')) {
                    // A comment goes until the end of the line.
                    while (peek() != '\n' && !isAtEnd()) advance();
                } else {
                    addToken(TokenType::SLASH);
                }
                break;
            case '"':
                string();
                break;
            default:
                if (std::isdigit(/*local variable*/)) {
                    /*Use your number funtion*/
                } else if (std::isalpha(/*local variable*/) || /*local variable*/ == '_') {
                    /*Use your identifier function*/
                } else {
                    std::cerr << "Unexpected character at line " << line << ": " << c << "\n";
                }
                break;
        }
    }

    void string() {
        while (peek() != '"' && !isAtEnd()) {
            if (peek() == '\n') line++;
            advance();
        }

        if (isAtEnd()) {
            std::cerr << "Unterminated string at line " << line << ".\n";
            return;
        }

        advance();

        std::string value = /*complete the code*/.substr(start + 1, current - start - 2);
        tokens.emplace_back(/*complite the code*/, /*complite the code*/, /*complite the code*/);
    }

    void number() {
        while (std::isdigit(peek())) advance();

        if (peek() == '.' && std::isdigit(peekNext())) {
            advance();

            while (std::isdigit(peek())) advance();
        }

        addToken(/*complete the code*/);
    }

    char peekNext() {
        if (current + 1 >= source.length()) return '\0';
        return source[current + 1];
    }

    void identifier() {
        while (std::isalnum(peek()) || peek() == '_') advance();

        std::string text = /*complite the code here*/
        TokenType type = TokenType::IDENTIFIER;
        if (keywords.find(text) != keywords.end()) {
            type = keywords[text];
        }
        /*Use your addToken function*/
    }
};
#endif