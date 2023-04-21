#pragma once
#include "main.h"

typedef struct Matrix4x4 {
	float m[4][4];
};

Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
Matrix4x4 Inverse(const Matrix4x4& m);
Matrix4x4 Transpose(const Matrix4x4& m);
Matrix4x4 MakeIdentity4x4();

int InverseNum(const Matrix4x4& m,int a, int b, int c, int d, int e, int f, int g, int h);
int InverseNum2(const Matrix4x4& m,int a, int b, int c, int d, int e, int f);

void MatrixScreenPrint(int x, int y, Matrix4x4& m);