#pragma once
class Quadrangle
{
public:
	int sides = 4;
	int angles = 4;
	int anglesSum = 360;
	bool parallelSidesSameLength = false;
	bool parallelAnglesSameValue = false;
	bool sidesSameLength = false;
	bool allAnglesRight = false;
	int minSidesParallel = 0;
	int sumAnglesAtTheArm = 0;
public:
	void figurePropertiesShow()
	{
		std::cout << "Number of sides: " << sides;
		std::cout << "\nNumber of angles: " << angles;
		std::cout << "\nSum value of angles: " << anglesSum;
		std::cout << "\nMinimal number of parallel sides:" << minSidesParallel;
		std::cout << "\nSum value of the angles at the arms:" << sumAnglesAtTheArm;
		if (parallelSidesSameLength == 1)
			std::cout << "\nAll parallel sides of the figure have the same length";
		if (parallelAnglesSameValue == 1)
			std::cout << "\nAll parallel angles of the figure have the same value";
		if (sidesSameLength == 1)
			std::cout << "\nAll sides of the figure have the same length";
		if (allAnglesRight == 1)
			std::cout << "\nAll angles of the figure have the same value being 90 degrees";
	}
};
class Trapeze : public Quadrangle
{
public:

	void figureProperties()
	{
		minSidesParallel = 1;
		sumAnglesAtTheArm = 180;
	}
};
class Parallelogram : public Trapeze
{
public:
	void figureProperties()
	{
		parallelSidesSameLength = true;
		parallelAnglesSameValue = true;
	}
};
class Diamond : public Parallelogram
{
public:
	void figureProperties()
	{
		 sidesSameLength = true;
	}

};
class Rectangle : public Diamond
{
public:
	void figureProperties()
	{
		allAnglesRight = true;
		sidesSameLength = false;
	}
};
class Square : public Rectangle
{
public:
	void figureProperties()
	{
		 sidesSameLength = true;
	}
};

