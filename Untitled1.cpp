#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    double s,c;
    cout << "Please select the shape you want to calculate!" << endl;
    cout << "Enter 1-circle,2-square,3-triangle" << endl;
    cin >> x;
    if(x == 1){
        char a;
        cout << "Enter radius or diameter !" << endl;
        cout << "Enter r-radius, d-diameter:";
        cin >> a;
        if(a == 'r'){
            double r;
            cout << "Enter radius:";
            cin >> r;
            s = r*r*3.14;
            c = 2*r*3.14;
            cout << "The area of the circle is: " << s << endl;
            cout << "Circumference of the circle is: " << c <<endl;
        }
        else if(a == 'd'){
            double d;
            cout << "Enter diameter:";
            cin >> d;
            s = d*d*3.14/4;
            c = d*3.14;
            cout << "The area of the circle is: " << s <<endl;
            cout << "Circumference of the circle is: " << c << endl;
        }
        else{
            cout << "Only enter r or d !";
        }
    }
    else if (x == 2){
        double a;
        cout << "Enter edge:";
        cin >> a;
        s = a*a;
        c = a*4;
        cout <<"The area of the square is: " << s << endl;
        cout <<"The circumference of the square is: " << c <<endl;
    }
    else if (x == 3){
        int a;
        cout << "Enter e-even triangle, s-square triangle, n-normal triangle: ";
        cin >> a;
        if(a == 'b'){
            double b;
            cout << "Enter edge of even triangle: ";
            cin >> b;
            s = a*a*sqrt(3)/4;
            c = a*3;
            cout <<"The area of the even triangle is: " << s <<endl;
            cout <<"The circumference of the even triangle is: " << c << endl;
        }
        else if (a == 's'){
            double b,c;
            cout << "Enter 2 edge of square triangle: ";
            cin >> b >> c;
            s = c*b/2;
            c = c+b+sqrt(c*c+b*b);
            cout <<"The area of the even triangle is: " << s <<endl;
            cout <<"The circumference of the even triangle is: " << c <<endl;
        }
        else if (a == 'n'){
            double b,c,d;
            cout << "Enter 3 edge of normal triangle: ";
            cin >> b >> c >> d;
            s = sqrt((b+c+d)*(b+c-d)*(b+d-c)*(c+d-b))/4;
            c = b+c+d;
            cout <<"The area of the even triangle is: " << s <<endl;
            cout <<"The circumference of the even triangle is: " << c <<endl;
        }
        else{
            cout << "Only enter b,s,n";
        }
    }
    else {
        cout << "Only enter 1,2,3";
    }
    return 0;
}
