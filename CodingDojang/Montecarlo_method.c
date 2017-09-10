#include <stdio.h>
#include <math.h>

void Montecarlo_method();

int main()
{
	Montecarlo_method();

	return 0;
}

void Montecarlo_method()
{
	double x, y = 0;
	double total = 0, count = 0, probablity = 0;
	double interval = 0.001;

	for(x = 0; x <= 1; x += interval)
	{
		for(y = 0; y <= 1; y += interval)
		{
			total += 1;
			if( (pow(x,2) + pow(y,2)) <= 1)
				count += 1;
		}
	}
	total = ( 1 / interval) * (1 / interval);
	probablity = count / total;

	printf("[%f, %f] probablity : %2.3f, 4*probablity : %f\n"
									, count, total
									, probablity
									, 4*probablity);

}
