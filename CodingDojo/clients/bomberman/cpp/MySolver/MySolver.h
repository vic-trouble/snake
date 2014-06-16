#ifndef YOURDIRECTIONSOLVER_H
#define YOURDIRECTIONSOLVER_H

#include "BomberLib/Direction.h"
#include "BomberLib/DirectionSolver.h"
#include "BomberLib/Element.h"
#include "BomberLib/utils/Dice.h"
#include "BomberLib/utils/Point.h"
#include "BomberLib/utils/utils.h"

class MySolver :	public DirectionSolver
{
public:
	MySolver(Dice* d) : dice(d) {}

	// From DirectionSolver
	virtual String get(Board board);

private:
	Dice* dice;
};

#endif