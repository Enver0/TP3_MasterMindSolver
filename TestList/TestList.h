#pragma once
#include "List.h"
class TestList
{
public:
    TestList(void);
    ~TestList(void);

    void RunAllTests();
	void TestPushBack();
	void TestInsert();
	void TestErase();
	void TestGetElement();
	void TestGetNbElements();
	void TestIsEmpty();
	void TestClear();
	void TestBegin();
};

