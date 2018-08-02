/*********************************************
  prog2-1.c
    Student ID: is0396ei
    Name:井上 仁志
**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void print(int data[], int num);
int get(int data[], int num, int index);
int sum(int data[], int num);

void print(int data[], int num)
{
	int i,n;
	for(i=0;i<num;i++){
		n = get(data,num,i);
		if(n==-1)
			continue;
		else
			printf("%d ",n);
	}
	return;
}

int get(int data[], int num, int index)
{
	if(index<num)
		return data[index];
	else
		return -1;
}

int sum(int data[], int num)
{
	int total=0;
	int i;
	
	if(num == 0)
		return 0;
	for(i=0;i<num;i++)
		total += data[i];
	return total;
}

/*=============================================*/

void test1()
{
    int data[4] = { 10, 20, 30, 40 };
    int num = sizeof(data) / sizeof(data[0]);

    assert(get(data, num, 0) == 10);
    assert(get(data, num, 1) == 20);
    assert(get(data, num, 2) == 30);
    assert(get(data, num, 3) == 40);

    print(data, num);
    printf("Success: %s\n", __func__);
}

void test2()
{
    int data[4] = { 10, 20, 30, 40 };
    int num = sizeof(data) / sizeof(data[0]);

    assert(sum(data, num) == 100);

    print(data, num);
    printf("Success: %s\n", __func__);
}

int main()
{
    test1();
    test2();

    return 0;
}
