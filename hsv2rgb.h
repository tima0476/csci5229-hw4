typedef struct RGB
{
	double R;
	double G;
	double B;
} RGB;

typedef struct HSV
{
	double H;
	double S;
	double V;
} HSV;

RGB hsv2rgb(HSV hsv);