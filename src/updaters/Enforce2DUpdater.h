/*
Highly Optimized Object-oriented Many-particle Dynamics -- Blue Edition
(HOOMD-blue) Open Source Software License Copyright 2008, 2009 Ames Laboratory
Iowa State University and The Regents of the University of Michigan All rights
reserved.

HOOMD-blue may contain modifications ("Contributions") provided, and to which
copyright is held, by various Contributors who have granted The Regents of the
University of Michigan the right to modify and/or distribute such Contributions.

Redistribution and use of HOOMD-blue, in source and binary forms, with or
without modification, are permitted, provided that the following conditions are
met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions, and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice, this
list of conditions, and the following disclaimer in the documentation and/or
other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of HOOMD-blue's
contributors may be used to endorse or promote products derived from this
software without specific prior written permission.

Disclaimer

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS ``AS IS''
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND/OR
ANY WARRANTIES THAT THIS SOFTWARE IS FREE OF INFRINGEMENT ARE DISCLAIMED.

IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// $Id: Enforce2DUpdater.h 2417 2009-12-01 21:54:03Z askeys $
// $URL: https://codeblue.umich.edu/hoomd-blue/svn/branches/two-d/src/updaters/Enforce2DUpdater.h $
// Maintainer: joaander

/*! \file Enforce2DUpdater.h
    \brief Declares an updater that zeros the momentum of the system
*/

#include <boost/shared_ptr.hpp>

#include "Updater.h"
#include <vector>

#ifndef __ENFORCE2DUPDATER_H__
#define __ENFORCE2DUPDATER_H__

//! Confines particles to the xy plane
/*! This updater zeros the z-velocities and z-forces to constrain particles
    to the xy plane.
    \ingroup updaters
*/
class Enforce2DUpdater : public Updater
    {
    public:
        //! Constructor
        Enforce2DUpdater(boost::shared_ptr<SystemDefinition> sysdef);
        
        //! Take one timestep forward
        virtual void update(unsigned int timestep);
    };

//! Export the Enforce2DUpdater to python
void export_Enforce2DUpdater();

#endif

