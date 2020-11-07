#include <array>
#include <iostream>
#include <cstdio>

using namespace std;

class MSG {
public:
    static void inputMessage(int n) {
        cout << n;
        cout << "번째 꼭짓점 x, y를 입력하세요.\nx:";
    }

    static void failMessage() {
        cout << "잘못된 입력입니다. 음수나 실수 혹은 2이하의 값, 너무 큰 값이 아닌 값으로 다시 입력해 주세요.";
    }
};

int main() {
    cout << "입력하려는 다각형의 꼭지점 수를 입력하세요.\n3이상의 정수 입력:";

    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int x3 = 0;
    int y3 = 0;
    int x4 = 0;
    int y4 = 0;
    int x5 = 0;
    int y5 = 0;
    int x6 = 0;
    int y6 = 0;
    int x7 = 0;
    int y7 = 0;
    int x8 = 0;
    int y8 = 0;
    int num = 0;
    cin >> num;

    if(num > 10) printf("double") ;

    switch (num) {
        case 1:
            MSG::failMessage();
            break;
        case 2:
            MSG::failMessage();
            break;
        case 3: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x2 * y1) - (y2 * x1));

            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        case 4: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            MSG::inputMessage(4);
            cin >> x4;
            cout << "y:";
            cin >> y4;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x3 * y1) - (y3 * x1));
            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        case 5: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            MSG::inputMessage(4);
            cin >> x4;
            cout << "y:";
            cin >> y4;
            MSG::inputMessage(5);
            cin >> x5;
            cout << "y:";
            cin >> y5;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x4 * y1) - (y4 * x1));
            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        case 6: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            MSG::inputMessage(4);
            cin >> x4;
            cout << "y:";
            cin >> y4;
            MSG::inputMessage(5);
            cin >> x5;
            cout << "y:";
            cin >> y5;
            MSG::inputMessage(6);
            cin >> x6;
            cout << "y:";
            cin >> y6;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6,
                   y6);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x5 * y1) - (y5 * x1));
            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        case 7: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            MSG::inputMessage(4);
            cin >> x4;
            cout << "y:";
            cin >> y4;
            MSG::inputMessage(5);
            cin >> x5;
            cout << "y:";
            cin >> y5;
            MSG::inputMessage(6);
            cin >> x6;
            cout << "y:";
            cin >> y6;
            MSG::inputMessage(7);
            cin >> x7;
            cout << "y:";
            cin >> y7;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5,
                   y5, x6, y6, x7, y7);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x6 * y7) - (y6 * x7)) + ((x6 * y1) -
                                                                                                           (y6 * x1));
            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        case 8: {
            MSG::inputMessage(1);
            cin >> x1;
            cout << "y:";
            cin >> y1;
            MSG::inputMessage(2);
            cin >> x2;
            cout << "y:";
            cin >> y2;
            MSG::inputMessage(3);
            cin >> x3;
            cout << "y:";
            cin >> y3;
            MSG::inputMessage(4);
            cin >> x4;
            cout << "y:";
            cin >> y4;
            MSG::inputMessage(5);
            cin >> x5;
            cout << "y:";
            cin >> y5;
            MSG::inputMessage(6);
            cin >> x6;
            cout << "y:";
            cin >> y6;
            MSG::inputMessage(7);
            cin >> x7;
            cout << "y:";
            cin >> y7;
            MSG::inputMessage(8);
            cin >> x8;
            cout << "y:";
            cin >> y8;
            cout << "입력된 다각형의 꼭짓점 좌표:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3,
                   x4, y4, x5, y5, x6, y6, x7, y7, x8, y8);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x6 * y7) - (y6 * x7)) + ((x7 * y8) -
                                                                                                           (y7 * x8)) +
                            ((x7 * y1) - (y7 * x1));
            result = result / 2;

            cout << "\n다각형의 면적: " << result << "m²";
            break;
        }
        default:
            MSG::failMessage();
    };
    return 0;
}