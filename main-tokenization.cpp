// Use this file to test your tokenization implementation. To compile the code you use use c++17 version; use the following command to run your code g++ -std=c++17 -o mathc main.cpp, and then do ./mathc 

//Note: You do not need to touch or alterate this file. 


#include "tokenization.cpp"

int main() {

        std::string source = R"(
        let x = 534;
        let y = 10;
        print x+y
        )";

    Lexer lexer(source);
    std::vector<Token> tokens = lexer.scanTokens();

    for (Token& item: tokens)
         std::cout<<item.lexeme<<" line"<<item.line<<" Tokenization "<<item.type<<std::endl;


    return 0;
}