//==-- csd/list.h - intrusive linked-list implementation --------*- C++ -*-==//
//
//                Cyril Software Data Structures (CSD) Library
//
// This file is distributed under the 2-clause BSD Open Source License. See
// LICENSE.TXT for details.
//==-----------------------------------------------------------------------==//

/**
 * @file
 * @brief Included only for "API discovery" purposes; users should not include
 *     this file.
 *
 * Unlike in BSD's queue(3) library, the libcsd list is the same as the tailq,
 * and the "list" types are just type aliases for the "tailq" types. This is
 * because the list cannot be made STL-compatible without giving it the same
 * implementation as the tailq.
 *
 * The user guide contains a detailed explanation of this, in the section
 * covering differences from the BSD implementation. Users should prefer
 * tailq over list, and all list-related types are marked as deprecated.
 */

#ifndef BSD_LIST_H
#define BSD_LIST_H

#include <csd/tailq.h>

namespace csd {

template <typename T, CompressedSize SizeMember = no_size>
using list_fwd_head CSD_DEPRECATE_LIST_ATTR = tailq_fwd_head<T, SizeMember>;

template <typename FwdHead, typename EntryAccessor>
using list_proxy CSD_DEPRECATE_LIST_ATTR = tailq_proxy<FwdHead, SizeMember>;

template <typename T, typename EntryAccessor, CompressedSize SizeMember = no_size>
using list_head CSD_DEPRECATE_LIST_ATTR =
    tailq_head<T, EntryAccessor, SizeMember>;

} // End of namespace bsd

#endif
