#ifndef paixu_h
#define paixu_h
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void Bubble1(int a[],int n);
void Bublle2(int a[],int n);
void Bubble3(int a[],int n);
void InsertSort(int a[],int n);
void SelectSort(int a[],int n);
int Partition(int a[],int low, int high);
int Partition2(int a[],int low, int high);
void QSort(int a[],int low,int high);
void QuickSort(int a[],int n);

#endif
