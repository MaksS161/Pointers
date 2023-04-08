#pragma once
#include"Action.h"

template <typename T>  T* push_back(int arr[], T& n, T value);
template <typename T>  T* push_front(int arr[], T& n, T value);

template <typename T> T* pop_back(int arr[], T& n);
template <typename T> T* pop_front(int arr[], T& n);

template <typename T> T* insert(int arr[], T& n, T value, T index_ins);
template <typename T> T* erase(int arr[], T& n, T index_er);

