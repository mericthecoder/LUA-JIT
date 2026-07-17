#include "../include/lexer.h"
#include <string.h>
#include <ctype.h>

void initLexer(Lexer* lexer, const char* source) {
    lexer->start = source;
    lexer->current = source;
    lexer->line = 1;
}

static int isAtEnd(Lexer* lexer) {
    return *lexer->current == '\0';
}

static Token makeToken(Lexer* lexer, TokenType type) {
    Token token;
    token.type = type;
    token.start = lexer->start;
    token.length = (int)(lexer->current - lexer->start);
    token.line = lexer->line;
    return token;
}

static char advance(Lexer* lexer) {
    lexer->current++;
    return lexer->current[-1];
}

static char peek(Lexer* lexer) {
    return *lexer->current;
}

Token scanToken(Lexer* lexer) {
    lexer->start = lexer->current;
    if (isAtEnd(lexer)) return makeToken(lexer, TOKEN_EOF);

    char c = advance(lexer);
    if (isalpha(c)) {
        while (isalpha(peek(lexer)) || isdigit(peek(lexer))) advance(lexer);
        // Simple keyword check could go here
        return makeToken(lexer, TOKEN_IDENTIFIER);
    }
    if (isdigit(c)) {
        while (isdigit(peek(lexer))) advance(lexer);
        return makeToken(lexer, TOKEN_NUMBER);
    }

    switch (c) {
        case '+': return makeToken(lexer, TOKEN_PLUS);
        case '-': return makeToken(lexer, TOKEN_MINUS);
        case '*': return makeToken(lexer, TOKEN_STAR);
        case '/': return makeToken(lexer, TOKEN_SLASH);
        case '=': return makeToken(lexer, TOKEN_EQUAL);
        case '(': return makeToken(lexer, TOKEN_LPAREN);
        case ')': return makeToken(lexer, TOKEN_RPAREN);
    }

    return makeToken(lexer, TOKEN_ERROR);
}
