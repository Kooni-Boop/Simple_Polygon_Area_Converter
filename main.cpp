#include <array>
#include <iostream>
#include <cstdio>

using namespace std;

class MSG {
public:
    static void inputMessage(int n) {
        cout << n;
        cout << "��° ������ x, y�� �Է��ϼ���.\nx:";
    }

    static void failMessage() {
        cout << "�߸��� �Է��Դϴ�. ������ �Ǽ� Ȥ�� 2������ ��, �ʹ� ū ���� �ƴ� ������ �ٽ� �Է��� �ּ���.";
    }
};

int main() {
    cout << "�Է��Ϸ��� �ٰ����� ������ ���� �Է��ϼ���.\n3�̻��� ���� �Է�:";

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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x2 * y1) - (y2 * x1));

            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x3 * y1) - (y3 * x1));
            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x4 * y1) - (y4 * x1));
            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6,
                   y6);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x5 * y1) - (y5 * x1));
            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3, x4, y4, x5,
                   y5, x6, y6, x7, y7);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x6 * y7) - (y6 * x7)) + ((x6 * y1) -
                                                                                                           (y6 * x1));
            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
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
            cout << "�Էµ� �ٰ����� ������ ��ǥ:\n";
            printf("<%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d> <%d, %d>", x1, y1, x2, y2, x3, y3,
                   x4, y4, x5, y5, x6, y6, x7, y7, x8, y8);
            double result = ((x1 * y2) - (y1 * x2)) + ((x2 * y3) - (y2 * x3)) + ((x3 * y4) - (y3 * x4)) +
                            ((x4 * y5) - (y4 * x5)) + ((x5 * y6) - (y5 * x6)) + ((x6 * y7) - (y6 * x7)) + ((x7 * y8) -
                                                                                                           (y7 * x8)) +
                            ((x7 * y1) - (y7 * x1));
            result = result / 2;

            cout << "\n�ٰ����� ����: " << result << "m��";
            break;
        }
        default:
            MSG::failMessage();
    };
    return 0;
}