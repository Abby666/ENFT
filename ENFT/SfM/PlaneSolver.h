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

#ifndef _PLANE_SOLVER_H_
#define _PLANE_SOLVER_H_

#include "Plane.h"
#include "PlaneEstimatorMinimalSample.h"
#include "PlaneEstimatorData.h"

class PlaneSolver
{

public:

	bool Run(const PlaneEstimatorMinimalSample &data, Plane &P, AlignedVector<__m128> &work);
	bool Run(const PlaneEstimatorData3D &data, Plane &P, AlignedVector<__m128> &work);

private:

	LA::AlignedMatrix3f m_ATA;
};

#endif