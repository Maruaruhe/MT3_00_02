#include "Matrix.h"

Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2) {
	return{
		m1.m[0][0] + m2.m[0][0], m1.m[0][1] + m2.m[0][1], m1.m[0][2] + m2.m[0][2], m1.m[0][3] + m2.m[0][3],
		m1.m[1][0] + m2.m[1][0], m1.m[1][1] + m2.m[1][1], m1.m[1][2] + m2.m[1][2], m1.m[1][3] + m2.m[1][3],
		m1.m[2][0] + m2.m[2][0], m1.m[2][1] + m2.m[2][1], m1.m[2][2] + m2.m[2][2], m1.m[2][3] + m2.m[2][3],
		m1.m[3][0] + m2.m[3][0], m1.m[3][1] + m2.m[3][1], m1.m[3][2] + m2.m[3][2], m1.m[3][3] + m2.m[3][3]
	};
}
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2) {
	return{
		m1.m[0][0] - m2.m[0][0], m1.m[0][1] - m2.m[0][1], m1.m[0][2] - m2.m[0][2], m1.m[0][3] - m2.m[0][3],
		m1.m[1][0] - m2.m[1][0], m1.m[1][1] - m2.m[1][1], m1.m[1][2] - m2.m[1][2], m1.m[1][3] - m2.m[1][3],
		m1.m[2][0] - m2.m[2][0], m1.m[2][1] - m2.m[2][1], m1.m[2][2] - m2.m[2][2], m1.m[2][3] - m2.m[2][3],
		m1.m[3][0] - m2.m[3][0], m1.m[3][1] - m2.m[3][1], m1.m[3][2] - m2.m[3][2], m1.m[3][3] - m2.m[3][3]
	};
}
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2) {
	Matrix4x4 resultMatrix = {};

	resultMatrix.m[0][0] = m1.m[0][0] * m2.m[0][0] + m1.m[0][1] * m2.m[1][0] + m1.m[0][2] * m2.m[2][0] + m1.m[0][3] * m2.m[3][0];
	resultMatrix.m[0][1] = m1.m[0][0] * m2.m[0][1] + m1.m[0][1] * m2.m[1][1] + m1.m[0][2] * m2.m[2][1] + m1.m[0][3] * m2.m[3][1];
	resultMatrix.m[0][2] = m1.m[0][0] * m2.m[0][2] + m1.m[0][1] * m2.m[1][2] + m1.m[0][2] * m2.m[2][2] + m1.m[0][3] * m2.m[3][2];
	resultMatrix.m[0][3] = m1.m[0][0] * m2.m[0][3] + m1.m[0][1] * m2.m[1][3] + m1.m[0][2] * m2.m[2][3] + m1.m[0][3] * m2.m[3][3];

	resultMatrix.m[1][0] = m1.m[1][0] * m2.m[0][0] + m1.m[1][1] * m2.m[1][0] + m1.m[1][2] * m2.m[2][0] + m1.m[1][3] * m2.m[3][0];
	resultMatrix.m[1][1] = m1.m[1][0] * m2.m[0][1] + m1.m[1][1] * m2.m[1][1] + m1.m[1][2] * m2.m[2][1] + m1.m[1][3] * m2.m[3][1];
	resultMatrix.m[1][2] = m1.m[1][0] * m2.m[0][2] + m1.m[1][1] * m2.m[1][2] + m1.m[1][2] * m2.m[2][2] + m1.m[1][3] * m2.m[3][2];
	resultMatrix.m[1][3] = m1.m[1][0] * m2.m[0][3] + m1.m[1][1] * m2.m[1][3] + m1.m[1][2] * m2.m[2][3] + m1.m[1][3] * m2.m[3][3];

	resultMatrix.m[2][0] = m1.m[2][0] * m2.m[0][0] + m1.m[2][1] * m2.m[1][0] + m1.m[2][2] * m2.m[2][0] + m1.m[2][3] * m2.m[3][0];
	resultMatrix.m[2][1] = m1.m[2][0] * m2.m[0][1] + m1.m[2][1] * m2.m[1][1] + m1.m[2][2] * m2.m[2][1] + m1.m[2][3] * m2.m[3][1];
	resultMatrix.m[2][2] = m1.m[2][0] * m2.m[0][2] + m1.m[2][1] * m2.m[1][2] + m1.m[2][2] * m2.m[2][2] + m1.m[2][3] * m2.m[3][2];
	resultMatrix.m[2][3] = m1.m[2][0] * m2.m[0][3] + m1.m[2][1] * m2.m[1][3] + m1.m[2][2] * m2.m[2][3] + m1.m[2][3] * m2.m[3][3];

	resultMatrix.m[3][0] = m1.m[3][0] * m2.m[0][0] + m1.m[3][1] * m2.m[1][0] + m1.m[3][2] * m2.m[2][0] + m1.m[3][3] * m2.m[3][0];
	resultMatrix.m[3][1] = m1.m[3][0] * m2.m[0][1] + m1.m[3][1] * m2.m[1][1] + m1.m[3][2] * m2.m[2][1] + m1.m[3][3] * m2.m[3][1];
	resultMatrix.m[3][2] = m1.m[3][0] * m2.m[0][2] + m1.m[3][1] * m2.m[1][2] + m1.m[3][2] * m2.m[2][2] + m1.m[3][3] * m2.m[3][2];
	resultMatrix.m[3][3] = m1.m[3][0] * m2.m[0][3] + m1.m[3][1] * m2.m[1][3] + m1.m[3][2] * m2.m[2][3] + m1.m[3][3] * m2.m[3][3];

	return resultMatrix;
}
Matrix4x4 Inverse(const Matrix4x4& m) {
	Matrix4x4 resultInverse = {};
	float resultNum;
	resultNum =
		InverseNum(m, 1, 1, 2, 2, 3, 3, 4, 4) + InverseNum(m, 1, 1, 2, 3, 3, 4, 4, 2) + InverseNum(m, 1, 1, 2, 4, 3, 2, 4, 3) -
		InverseNum(m, 1, 1, 2, 4, 3, 3, 4, 2) - InverseNum(m, 1, 1, 2, 3, 3, 2, 4, 4) - InverseNum(m, 1, 1, 2, 2, 3, 4, 4, 3) -
		InverseNum(m, 1, 2, 2, 1, 3, 3, 4, 4) - InverseNum(m, 1, 3, 2, 1, 3, 4, 4, 2) - InverseNum(m, 1, 4, 2, 1, 3, 2, 4, 3) +
		InverseNum(m, 1, 4, 2, 1, 3, 3, 4, 2) + InverseNum(m, 1, 3, 2, 1, 3, 2, 4, 4) + InverseNum(m, 1, 2, 2, 1, 3, 4, 4, 3) +
		InverseNum(m, 1, 2, 2, 3, 3, 1, 4, 4) + InverseNum(m, 1, 3, 2, 4, 3, 1, 4, 2) + InverseNum(m, 1, 4, 2, 2, 3, 1, 4, 3) -
		InverseNum(m, 1, 4, 2, 3, 3, 1, 4, 2) - InverseNum(m, 1, 3, 2, 2, 3, 1, 4, 4) - InverseNum(m, 1, 2, 2, 4, 3, 1, 4, 3) -
		InverseNum(m, 1, 2, 2, 3, 3, 2, 4, 1) - InverseNum(m, 1, 3, 2, 4, 3, 2, 4, 1) - InverseNum(m, 1, 4, 2, 2, 3, 3, 4, 1) +
		InverseNum(m, 1, 4, 2, 3, 3, 2, 4, 1) + InverseNum(m, 1, 3, 2, 2, 3, 4, 4, 1) + InverseNum(m, 1, 2, 2, 4, 3, 3, 4, 1);

	resultInverse.m[0][0] = (InverseNum2(m, 2, 2, 3, 3, 4, 4) + InverseNum2(m, 2, 3, 3, 4, 4, 2) + InverseNum2(m, 2, 4, 3, 2, 4, 3) -
		InverseNum2(m, 2, 4, 3, 3, 4, 2) - InverseNum2(m, 2, 3, 3, 2, 4, 4) - InverseNum2(m, 2, 2, 3, 4, 4, 3)) * (1 / resultNum);
	resultInverse.m[0][1] = (InverseNum2(m, 1, 4, 3, 3, 4, 2) + InverseNum2(m, 1, 3, 3, 2, 4, 4) + InverseNum2(m, 1, 2, 3, 4, 4, 3) -
		InverseNum2(m, 1, 2, 3, 3, 4, 4) - InverseNum2(m, 1, 3, 3, 4, 4, 2) - InverseNum2(m, 1, 4, 3, 2, 4, 3)) * (1 / resultNum);
	resultInverse.m[0][2] = (InverseNum2(m, 1, 2, 2, 3, 4, 4) + InverseNum2(m, 1, 3, 2, 4, 4, 2) + InverseNum2(m, 1, 4, 2, 2, 4, 3) -
		InverseNum2(m, 1, 4, 2, 3, 4, 2) - InverseNum2(m, 1, 3, 2, 2, 4, 4) - InverseNum2(m, 1, 2, 2, 4, 4, 3)) * (1 / resultNum);
	resultInverse.m[0][3] = (InverseNum2(m, 1, 4, 2, 3, 3, 2) + InverseNum2(m, 1, 3, 2, 2, 3, 4) + InverseNum2(m, 1, 2, 2, 4, 3, 3) -
		InverseNum2(m, 1, 2, 2, 3, 3, 4) - InverseNum2(m, 1, 3, 2, 4, 3, 2) - InverseNum2(m, 1, 4, 2, 2, 3, 3)) * (1 / resultNum);

	resultInverse.m[1][0] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[1][1] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[1][2] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[1][3] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);

	resultInverse.m[2][0] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[2][1] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[2][2] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[2][3] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);

	resultInverse.m[3][0] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[3][1] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[3][2] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);
	resultInverse.m[3][3] = (InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) + InverseNum2(m, , , , , , ) -
		InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , ) - InverseNum2(m, , , , , , )) * (1 / resultNum);

	return resultInverse;
}

int InverseNum(const Matrix4x4& m, int a, int b, int c, int d, int e, int f, int g, int h) {
	float resultNum;
	resultNum = m.m[a - 1][b - 1] * m.m[c - 1][d - 1] * m.m[e - 1][f - 1] * m.m[g - 1][h - 1];
	return resultNum;
}
int InverseNum2(const Matrix4x4& m, int a, int b, int c, int d, int e, int f) {
	float resultNum;
	resultNum = m.m[a - 1][b - 1] * m.m[c - 1][d - 1] * m.m[e - 1][f - 1];
	return resultNum;
}

Matrix4x4 Transpose(const Matrix4x4& m) {

}
Matrix4x4 MakeIdentity4x4() {

}

void MatrixScreenPrint(int x, int y, Matrix4x4& m) {

}