#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 20 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialCacheConfiguration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@QEAA@W4KeyCredentialCacheOption@123@UTimeSpan@Foundation@3@I@Z
    CKeyCredentialCacheConfiguration(int, WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheOption@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAW4KeyCredentialCacheOption@234@@Z
    virtual long get_CacheOption(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timeout@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_Timeout(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsageCount@CKeyCredentialCacheConfiguration@Credentials@Security@Windows@@UEAAJPEAI@Z
    virtual long get_UsageCount(unsigned int *);
};
} // namespace Windows::Security::Credentials
