#include "engine/pieces/piece.h"

PieceType Piece::getPieceType(){return type;};
Alliance Piece::getPieceAlliance(){return pieceAlliance;};
int Piece::getPiecePosition(){return piecePosition;};
bool Piece::isFirstMove(){return pieceFirstMove;};
int Piece::getPieceValue(){return type;};

void Piece::setPieceType(PieceType ty){type = ty;};
void Piece::setPieceAllaince(Alliance player){pieceAlliance = player;};
void Piece::setPiecePosition(int coor){piecePosition = coor;};
void Piece::setFirstMove(bool choice){pieceFirstMove = choice;};