
struct Point2d {
	double x;
	double y;
};


struct Rectangle {
	struct Point2d bottomLeftCorner;
	struct Point2d topRightCorner;
	double area;
	double perimeter;
};

// prototype --> "forward declaration"
double ComputeRectangleArea(struct Rectangle *pRect);
