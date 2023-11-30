#include "test.h"


int test()
{
	Matrix<double>G(2, 2);
	G[0][0] = 0.988;
	G[1][1] = 1.8739;
	G[0][1] = 0;
	G[1][0] = 0;
	Vector<double>g(2);
	g[0] = -0.58;
	g[1] = -0.87;
	Matrix<double>CE(2, 1);
	CE[0][0] = 1;
	CE[1][0] = 1;
	Vector<double>ce(1);
	ce[0] = -1;
	Matrix<double>CI(2, 2);
	CI[0][0] = 1;
	CI[1][1] = 1;
	CI[0][1] = 0;
	CI[1][0] = 0;
	Vector<double>ci(2);
	ci[0] = 0;
	ci[1] = 0;
	Vector<double>x(2);
	clock_t startTime, endTime;
	startTime = clock();
	for (int i = 0; i < 1000; i++)
	{


		solve_quadprog(G, g, CE, ce, CI, ci, x);
		std::cout << x[0] << " " << x[1] << std::endl;


	}
	endTime = clock();
	double total_time = (double)(endTime - startTime);
	total_time = total_time * 1000.0 / CLOCKS_PER_SEC;
	std::cout << total_time << std::endl;
	std::cout << x[0] << std::endl;
	int res = x[0] * 10000;
	return  res;
}
