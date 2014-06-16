#ifndef DUMBDIRECTIONSOLVER_H
#define DUMBDIRECTIONSOLVER_H

#include "BomberLib/utils/utils.h"
#include "BomberLib/DirectionSolver.h"
#include "BomberLib/Direction.h"
#include "BomberLib/Element.h"
#include "BomberLib/utils/Dice.h"
#include "BomberLib/utils/Point.h"

class DumbDirectionSolver :	public DirectionSolver
{
public:
	DumbDirectionSolver(Dice* d) : dice(d) {}

	// From DirectionSolver
	virtual String get(Board board);

private:
	String mergeCommands(Point bomb, Direction direction) const;
	Direction tryToMove(Point pt);
	Direction whereICanGoFrom(Point pt);

	Direction direction;
	Point bomb;
	Dice* dice;
	Board board;
};

#endif