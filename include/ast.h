#ifndef LUAJIT_AST_H
#define LUAJIT_AST_H

typedef enum {
    AST_EXPR_BINARY,
    AST_EXPR_LITERAL,
    AST_STMT_ASSIGN
} ASTType;

typedef struct ASTNode {
    ASTType type;
    struct ASTNode* left;
    struct ASTNode* right;
    const char* value; // For identifiers/literals
} ASTNode;

#endif
