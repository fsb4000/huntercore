// Copyright (c) 2012-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 2000000;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 1000000;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 1020001;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = GETHEADERS_VERSION;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 2000000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 2000000;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 2000000;

//! Version when we switched to a size-based "headers" limit.
static const int SIZE_HEADERS_LIMIT_VERSION = 2000000;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 2000000;

//! "feefilter" tells peers to filter invs to you by fee starts with this version
static const int FEEFILTER_VERSION = 2000000;

#endif // BITCOIN_VERSION_H
