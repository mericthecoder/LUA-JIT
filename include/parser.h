#ifndef LUAJIT_PARSER_H
#define LUAJIT_PARSER_H

#include "lexer.h"
#include "ast.h"

typedef struct {
    Lexer* lexer;
    Token current;
} Parser;

void initParser(Parser* parser, Lexer* lexer);
ASTNode* parse(Parser* parser);

#endif
