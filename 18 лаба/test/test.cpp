#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// ������� ��� ������ ������� �� �����
vector<vector<double>> readMatrix(const string& fileName) {
    ifstream file(fileName);//��������� ���� ��� ������
    if (!file.is_open()) {//���� ���� �� ���������� �������, ��
        cerr << "������ �������� �����: " << fileName << endl;//����� ������
        return {};//��������� ���������
    }

    vector<vector<double>> matrix;//����� �������
    int numCols;
    file >> numCols;//������ �� ����� ���������� ��������

    double num;
    while (file >> num) {//���� ������������� ���� �� ���������� ��� ������ �����
        matrix.emplace_back();
        matrix.back().push_back(num);//��������� ������ ������� ������ �������
        for (int i = 1; i < numCols; ++i) {
            file >> num;//���� ��������� ������� �������
            matrix.back().push_back(num);//��������� ��������� ������� ������ �������
        }
    }

    file.close();//�������� �����
    return matrix;//���������� �������
}

// ������� ��� ������ ������� � ����
void writeMatrix(const vector<vector<double>>& matrix, const string& fileName) {
    ofstream file(fileName);//��������� ���� ��� ��������������
    if (!file.is_open()) {//���� ���� �� ���������� �������,��
        cerr << "������ �������� �����: " << fileName << endl;//����� ������
        return;//��������� ���������
    }

    int numCols = matrix[0].size();//���������� ���������� �������� ������� ���� �������� ��������� � ������ �������
    file << numCols << endl;//���� � ���� ���������� �������� �������

    for (const auto& row : matrix) {//���� ������������ ��� ������ �������
        for (int i = 0; i < numCols; ++i) {//���� ������������ ��� ������� �������
            file << row[i] << ' ';//������ �������� ������� � ����
        }
        file << endl;
    }

    file.close();//�������� �����
}

// ������� ��� ������������ ������
vector<vector<double>> multiplyMatrices(const vector<vector<double>>& matrix1,
    const vector<vector<double>>& matrix2) {
    int numRows1 = matrix1.size();//����������� ���������� ���������� ����� � 1 �������
    int numCols1 = matrix1[0].size();//����������� ���������� ���������� �������� � 1 �������
    int numRows2 = matrix2.size();//����������� ���������� ���������� ����� � 2 �������
    int numCols2 = matrix2[0].size();//����������� ���������� ���������� �������� �� 2 �������

    if (numCols1 != numRows2) {//���� ��������� ������� ������ ������� �� ����� ���������� ����� ������, ��
        cerr << "���������� ��������� ��������� ������" << endl;//�����
        return {};//��������� ���������
    }

    vector<vector<double>> result(numRows1, vector<double>(numCols2, 0.0));//������ ������� � numrows1 �������� � numcols2 ��������� 
                                                                            //� �������� ��� �������� ���� ������� ��������� 0.0

    //����������� ������� � ���������� ��������� � ������� result
    for (int i = 0; i < numRows1; ++i) {
        for (int j = 0; j < numCols2; ++j) {
            for (int k = 0; k < numCols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;//���������� ������� result
}

int main() {
    string fileA = "fA.txt";
    string fileB = "fB.txt";
    string fileC = "fC.txt";

    // ������ ������ �� ������
    vector<vector<double>> matrixA = readMatrix(fileA);
    vector<vector<double>> matrixB = readMatrix(fileB);

    // �������� �� �������� ������ ������
    if (matrixA.empty() || matrixB.empty()) {
        return 1;
    }

    // ������������ ������
    vector<vector<double>> matrixC = multiplyMatrices(matrixA, matrixB);

    // ������ ���������� � ����
    writeMatrix(matrixC, fileC);

    return 0;
}