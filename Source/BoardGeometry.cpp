/*
  ==============================================================================

    BoardGeometry.cpp
    Created: 9 May 2016 9:04:35pm
    Author:  hsstraub

  ==============================================================================
*/

#include "BoardGeometry.h"
#include "KeyboardDataStructure.h"


//==============================================================================
// TerpstraBoardGeometry class

TerpstraBoardGeometry::TerpstraBoardGeometry()
{
	// The horizontal lines of a 55 key subset. From left to right
	this->horizontalLines.add(StraightLine({ 0, 1 }));
	this->horizontalLines.add(StraightLine({ 2, 3, 4, 5, 6 }));
	this->horizontalLines.add(StraightLine({ 7, 8, 9, 10, 11, 12 }));
	this->horizontalLines.add(StraightLine({ 13, 14, 15, 16, 17, 18 }));
	this->horizontalLines.add(StraightLine({ 19, 20, 21, 22, 23, 24 }));
	this->horizontalLines.add(StraightLine({ 25, 26, 27, 28, 29, 30 }));
	this->horizontalLines.add(StraightLine({ 31, 32, 33, 34, 35, 36 }));
	this->horizontalLines.add(StraightLine({ 37, 38, 39, 40, 41, 42 }));
	this->horizontalLines.add(StraightLine({ 43, 44, 45, 46, 47, 48 }));
	this->horizontalLines.add(StraightLine({ 49, 50, 51, 52, 53 }));
	this->horizontalLines.add(StraightLine({ 54 }));

	// The right upward lines of a 55 key subset. From bottom to top
	this->rightUpwardLines.add(StraightLine({ 0 }));
	this->rightUpwardLines.add(StraightLine({ 7, 2, 1 }));
	this->rightUpwardLines.add(StraightLine({ 19, 13, 8, 3 }));
	this->rightUpwardLines.add(StraightLine({ 31, 25, 20, 14, 9, 4 }));
	this->rightUpwardLines.add(StraightLine({ 43, 37, 32, 26, 21, 15, 10, 5 }));
	this->rightUpwardLines.add(StraightLine({ 44, 38, 33, 27, 22, 16, 11, 6 }));
	this->rightUpwardLines.add(StraightLine({ 49, 45, 39, 34, 28, 23, 17, 12 }));
	this->rightUpwardLines.add(StraightLine({ 50, 46, 40, 35, 29, 24, 18 }));
	this->rightUpwardLines.add(StraightLine({ 51, 47, 41, 36, 30 }));
	this->rightUpwardLines.add(StraightLine({ 52, 48, 42 }));
	this->rightUpwardLines.add(StraightLine({ 54, 53 }));

	this->firstColumnOffsets = Array<int>({0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5});
}

// returns the unique straight line that contains the given field  
TerpstraBoardGeometry::StraightLine TerpstraBoardGeometry::getLineOfField(int fieldIndex, StraightLineSet lineSet)
{
	int i;
	for (i = 0; i < lineSet.size(); i++)
	{
		if (lineSet[i].contains(fieldIndex))
			return lineSet[i];
	}

	// Line must have been found - we should never get here
	jassert(false);
	return StraightLine();	// Defensive code: return empty object
}
