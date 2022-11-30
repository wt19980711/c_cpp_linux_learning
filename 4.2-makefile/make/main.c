#include "calc.h"
#include "output.h"

int main(int argc, char **argv)
{
	float score1 = 97.0;
	float score2 = 90.0;
	float score = calc_score(score1, score2);
	output_score(score1, score2, score);
	return 0;
}
