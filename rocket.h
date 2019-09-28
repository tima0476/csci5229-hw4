#ifndef __rocket_h__
#define __rocket_h__	// Prevent double instantiation

// Data structure containing a single point in 2d space
typedef struct duopoint {
	double x;
	double y;
} duopoint;

typedef struct duopoint *dpp;

// The following shapes were manually traced and digitized on graph paper.
duopoint rocket_profile[] = {
	{0,32},
	{1,31.4},
	{2,30.6},
	{3,29.5},
	{4,28.4},
	{4.9,27.3},
	{5.6,26.1},
	{6.2,25},
	{6.8,24},
	{7.1,23},
	{7.5,22},
	{7.8,21},
	{8.1,20},
	{8.4,19},
	{8.7,18},
	{8.8,16.9},
	{8.8,16},
	{8.9,15},
	{8.9,14},
	{8.9,13},
	{8.9,12},
	{8.9,11},
	{8.7,10},
	{8.5,9},
	{8.2,8},
	{8,7},
	{7.5,5.9},
	{7,5},
	{6.6,4},
	{6,3},
	{5.2,2},
	{4.8,1},
	{3.8,0}
};
#define ROCKET_POINT_COUNT	(sizeof(rocket_profile) / sizeof(rocket_profile[0]))

duopoint rocket_fin[] = {
	{6,17.1},
	{7,17},
	{8.1,17},
	{9.2,16.8},
	{10,16.5},
	{10.9,16},
	{11.8,15},
	{12.1,14},
	{12.6,13},
	{12.9,12},
	{13.1,11},
	{13.4,10},
	{13.6,9},
	{13.8,8},
	{13.9,7},
	{14,6},
	{14.1,5},
	{14.2,4},
	{14.3,3},
	{14.3,2},
	{14.3,1},
	{14.3,0},

	{13.8,0},
	{13.6,1},
	{13.3,2},
	{13.1,3},
	{12.8,4},
	{12.7,5},
	{12.4,6},
	{12.1,7},
	{12,7.5},
	{11.8,8},
	{11.6,8.6},
	{11.3,9},
	{11.2,9.6},
	{10.9,10},
	{10.4,10.3},
	{9.9,10.7},
	{9.2,10.7},
	{8.8,10.8},
	{8,10.9},
	{7,11},
	{6.6,11},
	{6,11.2}
};
#define ROCKET_FIN_POINT_COUNT	(sizeof(rocket_fin) / sizeof(rocket_fin[0]))

#endif // __rocket_h__