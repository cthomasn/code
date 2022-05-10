#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void simpleIncrement(int counter, int result) {
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;
    cout << endl;
}

void preIncrement1(int counter, int result) {
    cout << "Counter: " << counter << endl; // 10

    // WHAT IS REALLY HAPPENING IS THIS:
    // counter = 10 
    // counter = counter + 1;  ==> counter = 11
    // result = counter; ==> result = 11

    result = ++counter; 
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 11
    cout << endl;
}

void postIncrement1(int counter, int result) {
    cout << "Counter: " << counter << endl; // 10

    // WHAT IS REALLY HAPPENING IS THIS:
    // counter = 10 
    // result = counter; ==> result = 10
    // counter = counter + 1; ==> counter = 11
   
    result = counter++; 
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 10
    cout << endl;
}

void preIncrement2(int counter, int result) {
    cout << "Counter: " << counter << endl; // 10

    // WHAT IS REALLY HAPPENING IS THIS:
    // counter = 10 
    // counter = counter + 1; ==> counter = 11
    // result = counter + 10; ==> result = 21
    
    result = ++counter + 10; 
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 21
    cout << endl;
}

void postIncrement2(int counter, int result) {
    cout << "Counter: " << counter << endl; // 10

    // WHAT IS REALLY HAPPENING IS THIS:
    // counter = 10 
    // result = counter + 10; ==> result = 20
    // counter = counter + 1; ==> counter = 11
   
    result = counter++ + 10; 
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 20
    cout << endl;
}

void conversionExample() {
    int total {};
    int num1 {}, num2{}, num3{};
    const int count{3};

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};
    average = static_cast<double>(total) / count;
    // average = (double)total / count; <-- this is the old C-style way. Don't do it in modern C++!

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", and " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
}

void intEqualityTest() {
    bool equalResult {false};
    bool notEqualResult {false};

    int num1{}, num2{};

    cout << std::boolalpha;

    cout << "Enter two integers separated by whitespace: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " <<notEqualResult << endl;
}

void doubleEqualityTest() {
    bool equalResult {false};
    bool notEqualResult {false};

    double double1{}, double2{};

    cout << std::boolalpha;

    cout << "Enter two integers separated by whitespace: ";
    cin >> double1 >> double2;
    equalResult = (double1 == double2);
    notEqualResult = (double1 != double2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " <<notEqualResult << endl;
}

void charEqualityTest() {
    bool equalResult {false};
    bool notEqualResult {false};

    char char1{}, char2{};

    cout << std::boolalpha;

    cout << "Enter two integers separated by whitespace: ";
    cin >> char1 >> char2;
    equalResult = (char1 == char2);
    notEqualResult = (char1 != char2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " <<notEqualResult << endl;
}

void intDoubleEqualityTest() {
    bool equalResult {false};
    bool notEqualResult {false};

    int num1{};
    double num2{};

    cout << std::boolalpha;
    cout << "Enter an int and then a double separated by whitespace: " << endl;
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " <<notEqualResult << endl;

}

int main() {


    // INCREMENT EXAMPLES
    // int counter {10};
    // int result {0};
    // simpleIncrement(counter, result);
    // preIncrement1(counter, result);
    // postIncrement1(counter, result);
    // preIncrement2(counter, result);
    // postIncrement2(counter, result);

    // MIXED TYPE EXPRESSION EXAMPLES
    //conversionExample();

    // EQUALITY TEST
    //intEqualityTest();
    //doubleEqualityTest();
    //charEqualityTest();
    //intDoubleEqualityTest();
   
    cout << endl;
    return 0;
}