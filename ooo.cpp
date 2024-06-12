#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2;

    // ورودی از کاربر گرفته می‌شود
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    // محاسبهٔ شیب خط
    double slope = (y2 - y1) / (x2 - x1);

    // محاسبهٔ عرض خط
    double intercept = y1 - slope * x1;

    // چاپ معادلهٔ خط
    cout << "The equation of the line passing through these two points is: ";
    if (x1 != x2) {
        cout << "y = " << slope << "x + " << intercept << endl;
    }
    else {
        cout << "x = " << x1 << endl;
    }

    return 0;
}
