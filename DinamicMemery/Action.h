#pragma once
#include"Action.h"

template <typename T>  T* push_back(T arr[], T& n, T value);
template <typename T>  T* push_front(T arr[], T& n, T value);

template <typename T> T* pop_back(T arr[], T& n);
template <typename T> T* pop_front(T arr[], T& n);

template <typename T> T* insert(T arr[], T& n, T value, T index_ins);
template <typename T> T* erase(T arr[], T& n, T index_er);

