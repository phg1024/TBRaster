#pragma once

#include "Eigen/Dense"

template <int N, typename T>
using VectorX = Eigen::Vector<T, N>;

template <typename T>
using Vector2 = VectorX<2, T>;
template <typename T>
using Vector3 = VectorX<2, T>;
template <typename T>
using Vector4 = VectorX<2, T>;

template <typename T, int Rows, int Cols>
using Matrix = Eigen::Matrix<T, Rows, Cols>;

template <typename T>
using Matrix2X = Matrix<T, 2, Eigen::Dynamic>;
template <typename T>
using Matrix3X = Matrix<T, 3, Eigen::Dynamic>;

template <typename T>
using MatrixX2 = Matrix<T, Eigen::Dynamic, 2>;
template <typename T>
using MatrixX3 = Matrix<T, Eigen::Dynamic, 3>;