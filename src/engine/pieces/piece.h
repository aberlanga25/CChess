#pragma once

#include "engine/board/board.h"
#include "engine/board/move.h"
#include "engine/player/alliance.h"

#include <vector>


enum PieceType{    
    NULLPIECE = 0,
    PAWN = 100,
    KNIGHT = 300,
    BISHOP = 330,
    ROOK = 500,
    QUEEN = 900,
    KING = 10000};

class Piece{
    public:
        PieceType getPieceType();
        Alliance getPieceAlliance();
        int getPiecePosition();
        bool isFirstMove();
        int getPieceValue();

        void setPieceType(PieceType ty);
        void setPieceAllaince(Alliance player);
        void setPiecePosition(int coor);
        void setFirstMove(bool choice);

        virtual int locationBonus() = 0;
        virtual Piece* movePiece(Move move) = 0;
        virtual std::vector<Move> calculateLegalMoves(Board board) = 0;
    private:
        PieceType type;
        Alliance pieceAlliance;
        int piecePosition;
        bool pieceFirstMove;
};