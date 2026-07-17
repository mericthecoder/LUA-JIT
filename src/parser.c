#include "../include/parser.h"
#include <stdlib.h>

void initParser(Parser* parser, Lexer* lexer) {
    parser->lexer = lexer;
    parser->current = scanToken(lexer);
}

static void advance(Parser* parser) {
    parser->current = scanToken(parser->lexer);
}

ASTNode* parse(Parser* parser) {
    // Very simplified parser for "x = y + z"
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = AST_STMT_ASSIGN;
    
    // Identifier (variable)
    advance(parser); // Skip identifier
    
    advance(parser); // Skip =
    
    // Expression
    node->left = malloc(sizeof(ASTNode));
    node->left->type = AST_EXPR_LITERAL;
    node->left->value = "10"; // Placeholder
    
    return node;
}
