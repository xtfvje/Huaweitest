/******************************************************************************

  Copyright (C), 2001-2011, Huawei Tech. Co., Ltd.

 ******************************************************************************
  File Name     :
  Version       :
  Author        :
  Created       : 2010/9/1
  Last Modified :
  Description   :
  Function List :

  History       :
  1.Date        : 2010/9/1
    Author      :
    Modification: Created file

******************************************************************************/
#include <cppunit/config/SourcePrefix.h>
#include "CExampleTest.h"
#include <stdlib.h>
#include <string>

using namespace std;
string g_strFilePath;

#include "Maze.h"

// ע������׵�CppUnit
CPPUNIT_TEST_SUITE_REGISTRATION( CExampleTest );

// ��������ʵ��ʾ��

// SetUp: ��ÿ������ǰִ��һ��
void CExampleTest::setUp()
{
	g_strFilePath = "..\\testcase\\";
}

// tearDown: ��ÿ��������ִ��һ��
void CExampleTest::tearDown()
{

}

void CExampleTest::TestCase01()
{
    int CycleCount = 0;
    CPPUNIT_ASSERT(FindLongestCycle(string(g_strFilePath + "maze1.txt").c_str(), &CycleCount) == 16);
    CPPUNIT_ASSERT(CycleCount == 2);    
}

void CExampleTest::TestCase02()
{
	int CycleCount = 0;
	CPPUNIT_ASSERT(FindLongestCycle(string(g_strFilePath + "maze2.txt").c_str(), &CycleCount) == -1);
	CPPUNIT_ASSERT(CycleCount == 0);    
}


// ���������Ӳ�������ʵ��
// void CExampleTest::TestCasexx()
// {
//
// }

