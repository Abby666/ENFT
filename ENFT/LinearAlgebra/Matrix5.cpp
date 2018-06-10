////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2017 Zhejiang University
//  All Rights Reserved
//
//  For more information see <https://github.com/ZJUCVG/ENFT>
//  If you use this code, please cite the corresponding publications as 
//  listed on the above website.
//
//  Permission to use, copy, modify and distribute this software and its
//  documentation for educational, research and non-profit purposes only.
//  Any modification based on this work must be open source and prohibited
//  for commercial use.
//  You must retain, in the source form of any derivative works that you 
//  distribute, all copyright, patent, trademark, and attribution notices 
//  from the source form of this work.
//   
//
////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Matrix5.h"
#include "LinearSystem.h"

bool LA::SolveLinearSystemSymmetricUpper(AlignedMatrix5f &A, AlignedVector5f &b)
{
	float* _A[5] = {&A.M00(), &A.M10(), &A.M20(), &A.M30(), &A.M40()};
	return LA::SolveLinearSystemLDL<float, 5>(_A, b);
}