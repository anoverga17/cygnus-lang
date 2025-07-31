
#include "parser.h"
#include <stdio.h>
#include <ctype.h>

class Parser {
    public:
        std::string IdentifierStr; // Filled in if tok_identifier
        double NumVal;

    private:
        int get_token() {
            int last_char = ' ';

            while (isspace(last_char)) {
                last_char = getchar();
            }

            if (isalpha(last_char)) {
                
            }
        }
};