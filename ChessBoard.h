#pragma once
#include "ChessPiece.h"
#include <unordered_set>

class ChessBoard : public Object {
	public:
		ChessBoard();
		void movePiece(ChessPiece* src, ChessPiece* tgt);
		ChessPiece* getPiece(int x, int y);
		std::unordered_set<ChessPiece*> getValidMoves(ChessPiece* src);
		~ChessBoard();
	private:
		ChessPiece* board[8][8];
		void getIndex(ChessPiece* find, int& x, int& y);
}