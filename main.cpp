// Jose Sandoval
// 06 - 19 -2024
// Purpose of this program: How many squares can fit within one circle 

#include <iostream>
#include <iomanip> // the settings  output precision

using namespace std;

// Define constant PI
const double PI = 3.14159265358979;


int main() {

    // Our variables that we are declairing 
    double squareSide = 0.0;
    double circleDiameter = 0.0;
    double circleRadius = 0.0;
    double squareArea = 0.0;
    double circleArea = 0.0;
    double squaresInCircle = 0.0;

    // Informing the users what the program does
    std::cout << "This program calculates how many squares can fit in a circle." << std::endl;
    std::cout << "You will need to provide the side length of the square and the diameter of the circle." << std::endl;

    // The user input
    std::cout << "Enter the side length of the square: ";
    std::cin >> squareSide;
    std::cout << "Enter the diameter of the circle: ";
    std::cin >> circleDiameter;

    // The radius of the circle
    circleRadius = circleDiameter / 2;

    //  The area of the square
    squareArea = squareSide * squareSide;

    // The area of the circle
    circleArea = PI * circleRadius * circleRadius;

    // How many squares can fit inside of one circle
    squaresInCircle = circleArea / squareArea;

    // Results that are properly labeled
    std::cout << "The amount of squares that can fit in one circle is: ";
    std::cout << std::fixed << std::setprecision(2) << squaresInCircle << std::endl;

    return 0;
}
