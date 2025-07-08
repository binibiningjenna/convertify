#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    char continueChoice;

    do {
        int choice;
        cout << "\n?? Measurement Conversion & Utility Program\n";
        cout << "1. Length Conversion (cm, inch, km)\n";
        cout << "2. Time Conversion (hour, minutes, seconds)\n";
        cout << "3. Area Conversion (cm^2, in^2, km^2)\n";
        cout << "4. Speed Conversion (m/s, km/s, km/hr)\n";
        cout << "5. Temperature Conversion (Celsius, Kelvin, Fahrenheit)\n";
        cout << "6. Body Mass Index (BMI) Calculator\n";
        cout << "7. Discount Calculator\n";
        cout << "8. Volume Conversion (ml, l, gal)\n";
        cout << "9. Weight Conversion (g, kg, lb)\n";
        cout << "10. Data Conversion (MB, KB, TB)\n";
        cout << "Enter your choice (1-10): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double length;
                string fromUnit, toUnit;
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the unit (cm, inches, km): ";
                cin >> fromUnit;
                cout << "Enter the unit to convert to (cm, inches, km): ";
                cin >> toUnit;

                if (fromUnit == "cm" && toUnit == "inches")
                    length *= 0.393701;
                else if (fromUnit == "inches" && toUnit == "cm")
                    length /= 0.393701;
                else if (fromUnit == "km" && toUnit == "cm")
                    length *= 100000;
                else if (fromUnit == "cm" && toUnit == "km")
                    length /= 100000;
                else {
                    cout << "Invalid units for length conversion.\n";
                    break;
                }

                cout << "Converted length: " << length << " " << toUnit << "\n";
                break;
            }

            case 2: {
                int time;
                string fromTimeUnit, toTimeUnit;
                cout << "Enter the time: ";
                cin >> time;
                cout << "Enter the unit (seconds, minutes, hours): ";
                cin >> fromTimeUnit;
                cout << "Enter the unit to convert to (seconds, minutes, hours): ";
                cin >> toTimeUnit;

                if (fromTimeUnit == "seconds" && toTimeUnit == "minutes")
                    time /= 60;
                else if (fromTimeUnit == "minutes" && toTimeUnit == "seconds")
                    time *= 60;
                else if (fromTimeUnit == "seconds" && toTimeUnit == "hours")
                    time /= 3600;
                else if (fromTimeUnit == "hours" && toTimeUnit == "seconds")
                    time *= 3600;
                else if (fromTimeUnit == "minutes" && toTimeUnit == "hours")
                    time /= 60;
                else if (fromTimeUnit == "hours" && toTimeUnit == "minutes")
                    time *= 60;
                else {
                    cout << "Invalid units for time conversion.\n";
                    break;
                }

                cout << "Converted time: " << time << " " << toTimeUnit << "\n";
                break;
            }

            case 3: {
                double area;
                string fromAreaUnit, toAreaUnit;
                cout << "Enter the area: ";
                cin >> area;
                cout << "Enter the unit (cm^2, in^2, km^2): ";
                cin >> fromAreaUnit;
                cout << "Enter the unit to convert to (cm^2, in^2, km^2): ";
                cin >> toAreaUnit;

                if (fromAreaUnit == "cm^2" && toAreaUnit == "in^2")
                    area *= 0.155;
                else if (fromAreaUnit == "in^2" && toAreaUnit == "cm^2")
                    area /= 0.155;
                else if (fromAreaUnit == "km^2" && toAreaUnit == "cm^2")
                    area *= 1e10;
                else if (fromAreaUnit == "cm^2" && toAreaUnit == "km^2")
                    area /= 1e10;
                else {
                    cout << "Invalid units for area conversion.\n";
                    break;
                }

                cout << "Converted area: " << area << " " << toAreaUnit << "\n";
                break;
            }

            case 4: {
                double speed;
                string fromSpeedUnit, toSpeedUnit;
                cout << "Enter the speed: ";
                cin >> speed;
                cout << "Enter the unit (m/s, km/s, km/hr): ";
                cin >> fromSpeedUnit;
                cout << "Enter the unit to convert to (m/s, km/s, km/hr): ";
                cin >> toSpeedUnit;

                if (fromSpeedUnit == "m/s" && toSpeedUnit == "km/s")
                    speed /= 1000;
                else if (fromSpeedUnit == "km/s" && toSpeedUnit == "m/s")
                    speed *= 1000;
                else if (fromSpeedUnit == "m/s" && toSpeedUnit == "km/hr")
                    speed *= 3.6;
                else if (fromSpeedUnit == "km/hr" && toSpeedUnit == "m/s")
                    speed /= 3.6;
                else {
                    cout << "Invalid units for speed conversion.\n";
                    break;
                }

                cout << "Converted speed: " << speed << " " << toSpeedUnit << "\n";
                break;
            }

            case 5: {
                double temperature;
                string fromTempUnit, toTempUnit;
                cout << "Enter the temperature: ";
                cin >> temperature;
                cout << "Enter the unit (Celsius, Kelvin, Fahrenheit): ";
                cin >> fromTempUnit;
                cout << "Enter the unit to convert to (Celsius, Kelvin, Fahrenheit): ";
                cin >> toTempUnit;

                if (fromTempUnit == "Celsius" && toTempUnit == "Kelvin")
                    temperature += 273.15;
                else if (fromTempUnit == "Kelvin" && toTempUnit == "Celsius")
                    temperature -= 273.15;
                else if (fromTempUnit == "Celsius" && toTempUnit == "Fahrenheit")
                    temperature = (temperature * 9 / 5) + 32;
                else if (fromTempUnit == "Fahrenheit" && toTempUnit == "Celsius")
                    temperature = (temperature - 32) * 5 / 9;
                else if (fromTempUnit == "Kelvin" && toTempUnit == "Fahrenheit")
                    temperature = (temperature - 273.15) * 9 / 5 + 32;
                else if (fromTempUnit == "Fahrenheit" && toTempUnit == "Kelvin")
                    temperature = (temperature - 32) * 5 / 9 + 273.15;
                else {
                    cout << "Invalid units for temperature conversion.\n";
                    break;
                }

                cout << "Converted temperature: " << temperature << " " << toTempUnit << "\n";
                break;
            }

            case 6: {
                double weight, height;
                cout << "Enter weight in kg: ";
                cin >> weight;
                cout << "Enter height in meters: ";
                cin >> height;

                double bmi = weight / pow(height, 2);
                cout << "Your BMI is: " << bmi << "\n";
                break;
            }

            case 7: {
                double originalPrice, discountPercentage;
                cout << "Enter the original price: ";
                cin >> originalPrice;
                cout << "Enter the discount percentage: ";
                cin >> discountPercentage;

                double discountedPrice = originalPrice - (originalPrice * discountPercentage / 100);
                cout << "Discounted Price: " << discountedPrice << "\n";
                break;
            }

            case 8: {
                double volume;
                string fromVolumeUnit, toVolumeUnit;
                cout << "Enter the volume: ";
                cin >> volume;
                cout << "Enter the unit (ml, l, gal): ";
                cin >> fromVolumeUnit;
                cout << "Enter the unit to convert to (ml, l, gal): ";
                cin >> toVolumeUnit;

                if (fromVolumeUnit == "ml" && toVolumeUnit == "l")
                    volume /= 1000;
                else if (fromVolumeUnit == "l" && toVolumeUnit == "ml")
                    volume *= 1000;
                else if (fromVolumeUnit == "ml" && toVolumeUnit == "gal")
                    volume /= 3785.41;
                else if (fromVolumeUnit == "gal" && toVolumeUnit == "ml")
                    volume *= 3785.41;
                else if (fromVolumeUnit == "l" && toVolumeUnit == "gal")
                    volume /= 3.78541;
                else if (fromVolumeUnit == "gal" && toVolumeUnit == "l")
                    volume *= 3.78541;
                else {
                    cout << "Invalid units for volume conversion.\n";
                    break;
                }

                cout << "Converted volume: " << volume << " " << toVolumeUnit << "\n";
                break;
            }

            case 9: {
                double weight;
                string fromWeightUnit, toWeightUnit;
                cout << "Enter the weight: ";
                cin >> weight;
                cout << "Enter the unit (g, kg, lb): ";
                cin >> fromWeightUnit;
                cout << "Enter the unit to convert to (g, kg, lb): ";
                cin >> toWeightUnit;

                if (fromWeightUnit == "g" && toWeightUnit == "kg")
                    weight /= 1000;
                else if (fromWeightUnit == "kg" && toWeightUnit == "g")
                    weight *= 1000;
                else if (fromWeightUnit == "g" && toWeightUnit == "lb")
                    weight /= 453.592;
                else if (fromWeightUnit == "lb" && toWeightUnit == "g")
                    weight *= 453.592;
                else if (fromWeightUnit == "kg" && toWeightUnit == "lb")
                    weight *= 2.20462;
                else if (fromWeightUnit == "lb" && toWeightUnit == "kg")
                    weight /= 2.20462;
                else {
                    cout << "Invalid units for weight conversion.\n";
                    break;
                }

                cout << "Converted weight: " << weight << " " << toWeightUnit << "\n";
                break;
            }

            case 10: {
                double data;
                string fromDataUnit, toDataUnit;
                cout << "Enter the data size: ";
                cin >> data;
                cout << "Enter the unit (MB, KB, TB): ";
                cin >> fromDataUnit;
                cout << "Enter the unit to convert to (MB, KB, TB): ";
                cin >> toDataUnit;

                if (fromDataUnit == "MB" && toDataUnit == "KB")
                    data *= 1024;
                else if (fromDataUnit == "KB" && toDataUnit == "MB")
                    data /= 1024;
                else if (fromDataUnit == "MB" && toDataUnit == "TB")
                    data /= 1024;
                else if (fromDataUnit == "TB" && toDataUnit == "MB")
                    data *= 1024;
                else if (fromDataUnit == "KB" && toDataUnit == "TB")
                    data /= 1048576;
                else if (fromDataUnit == "TB" && toDataUnit == "KB")
                    data *= 1048576;
                else {
                    cout << "Invalid units for data conversion.\n";
                    break;
                }

                cout << "Converted data: " << data << " " << toDataUnit << "\n";
                break;
            }

            default:
                cout << "Invalid choice.\n";
        }

        cout << "\nDo you want to perform another operation? (Y/N): ";
        cin >> continueChoice;
    } while (toupper(continueChoice) == 'Y');

    return 0;
}

