#include "ListActions.hpp"

#include <vector>

double ListActions::getAverage(std::vector<double> values)
{
	double score = 0;
	for (int i = 0; i < values.size(); i++)
	{
		score += values[i];
	}
	return score / values.size(); // score / nb éléments = moyenne
}