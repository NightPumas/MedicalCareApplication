#include "calculateValueForBitalino.h"



calculateValueForBitalino::calculateValueForBitalino()
{
}


calculateValueForBitalino::~calculateValueForBitalino()
{
}

double calculateValueForBitalino::calculateValue(short BitalinoData, int typeOfAnalyse)
{
	switch (typeOfAnalyse)
	{
	case 1:
		return (((double)BitalinoData - 341 / 682 - 341) * 2 - 1);
	case 2:
		return ((double)((BitalinoData / 1024 - 1 / 2) * 3.3 / 1100));
	case 3:
		return ((double)((BitalinoData / 1024 * 3.3 - 0.259388) / 0.2));
	case 5:
		return ((double)((BitalinoData / 1024 - 1 / 2)*3.3 / 1009));
	case 6:
		return ((double)BitalinoData / 1024) * 100;
	case 7:
		return 0;
		

	}
}
