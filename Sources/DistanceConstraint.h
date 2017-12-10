#ifndef _DISTANCECONSTRAINT_H_
#define _DISTANCECONSTRAINT_H_

/* ==========================================================================================
 * File Name     : DistanceConstraint.h
 *
 * Creation Date : 10/12/2017 - 16:38
 * Last Modified : 10/12/2017 - 17:49
 * ==========================================================================================
 * Description   :
 *
 * Author        : Mehdi Rouijel
 * ========================================================================================== */

#include <vector>
#include "glm/fwd.hpp"


class Mesh;


class DistanceConstraint
{

public:
    unsigned int Vertex1Index;
    unsigned int Vertex2Index;
    float RestLength;

    DistanceConstraint(Mesh *mesh, unsigned int index1, unsigned int index2);

    void Solve(Mesh *mesh, std::vector<glm::vec3> *tentativePositions);

};


#endif // _DISTANCECONSTRAINT_H_
