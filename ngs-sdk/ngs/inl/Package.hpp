/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#ifndef _inl_ngs_package_
#define _inl_ngs_package_

#ifndef _hpp_ngs_package_
#include <ngs/Package.hpp>
#endif

#ifndef _hpp_ngs_itf_packageitf_
#include <ngs/itf/PackageItf.hpp>
#endif

namespace ngs
{

    /*----------------------------------------------------------------------
     * Package
     */

    inline
    String Package :: getPackageVersion ()
        NGS_THROWS ( ErrorMsg )
    { return PackageItf :: getPackageVersion (); }

} // namespace ngs

#endif // _inl_ngs_package_
