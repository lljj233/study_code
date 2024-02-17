#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include"Sort.h"

void PrintSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//升序
//最好：O(N^2)
//最坏：O(N)
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int end = i - 1;
		int tmp = a[i];
		//将tmp插入到[0,end]的区间中，保持有序
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
	
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//gap > 1时是预排序
		//gap = 1时是插入排序（不论gap怎么变化，最后gap一定要为1）
		gap /= 2;
		/*for (int j = 0; j < gap; j++)
		{
			for (int i = j; i < n - gap; i += gap)
				{
					int end = i;
					int tmp = a[i + gap];
					while (end >= 0)
					{
						if (tmp <= a[end])
						{
							a[end + gap] = a[end];
							end -= gap;
						}
						else
							break;
					}
					a[end + gap] = tmp;
				}
		}*/
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[i + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
		PrintSort(a, n);
	}
}

void swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//最好：O(N^2)
//最坏：O(N^2)
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int mini = left, maxi = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		swap(&a[left], &a[mini]);
		if (left == maxi)
			maxi = mini;
		swap(&a[right], &a[maxi]);
		left++;
		right--;
	}

}

