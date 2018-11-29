#include "RandomTools.h"

std::random_device RandomTools::sRandomDevice;
std::mt19937 RandomTools::sRandomGenerator{ sRandomDevice() };

int RandomTools::randomValue(int min, int max)
{
	std::uniform_int_distribution<> uniformDistribution(min, max);
	return uniformDistribution(sRandomGenerator);
}