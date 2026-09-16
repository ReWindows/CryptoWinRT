#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 21 member(s).
namespace Windows::Security::Cryptography::Core {
class CHashAlgorithmProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAA@XZ
    CHashAlgorithmProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHash@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIHashComputation@2345@@Z
    virtual long CreateHash(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashData@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAU6785@@Z
    virtual long HashData(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlgorithmName@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlgorithmName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HashLength@CHashAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_HashLength(unsigned int *);
};
} // namespace Windows::Security::Cryptography::Core
