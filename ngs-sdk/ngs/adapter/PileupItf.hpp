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

#ifndef _hpp_ngs_adapt_pileupitf_
#define _hpp_ngs_adapt_pileupitf_

#ifndef _hpp_ngs_adapt_refcount_
#include <ngs/adapter/Refcount.hpp>
#endif

#ifndef _h_ngs_itf_pileupitf_
#include <ngs/itf/PileupItf.h>
#endif

namespace ngs_adapt
{

    /*----------------------------------------------------------------------
     * forwards
     */
    class StringItf;
    class PileupEventItf;

    /*----------------------------------------------------------------------
     * PileupItf
     */
    class PileupItf : public Refcount < PileupItf, NGS_Pileup_v1 >
    {
    public:

        virtual StringItf * getReferenceSpec () const = 0;
        virtual int64_t getReferencePosition () const = 0;
        virtual PileupEventItf * getPileupEvents () const = 0;
        virtual uint32_t getPileupDepth () const = 0;
        virtual bool nextPileup () = 0;

    protected:

        PileupItf ();
        static NGS_Pileup_v1_vt ivt;

    private:

        static NGS_String_v1 * CC get_ref_spec ( const NGS_Pileup_v1 * self, NGS_ErrBlock_v1 * err );
        static int64_t CC get_ref_pos ( const NGS_Pileup_v1 * self, NGS_ErrBlock_v1 * err );
        static NGS_PileupEvent_v1 * CC get_pileup_events ( const NGS_Pileup_v1 * self, NGS_ErrBlock_v1 * err );
        static uint32_t CC get_pileup_depth ( const NGS_Pileup_v1 * self, NGS_ErrBlock_v1 * err );
        static bool CC next ( NGS_Pileup_v1 * self, NGS_ErrBlock_v1 * err );

    };

} // namespace ngs_adapt

#endif // _hpp_ngs_adapt_pileupitf_
