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

#ifndef _Included_py_ngs_itf_FragmentItf
#define _Included_py_ngs_itf_FragmentItf
#ifdef __cplusplus
extern "C" {
#endif

#include "py_ngs_defs.h"

/* TODO: names has changed, fix it in python */

PY_RES_TYPE PY_NGS_FragmentGetFragmentId(void* pRef, void** ppNGSStringBuf, void** ppNGSStrError);
PY_RES_TYPE PY_NGS_FragmentGetFragmentBases(void* pRef, uint64_t offset, uint64_t length, void** ppNGSStringBuf, void** ppNGSStrError);
PY_RES_TYPE PY_NGS_FragmentGetFragmentQualities(void* pRef, uint64_t offset, uint64_t length, void** ppNGSStringBuf, void** ppNGSStrError);

#ifdef __cplusplus
}
#endif
#endif /* _Included_py_ngs_itf_FragmentItf */
