#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 29 member(s).
namespace Windows::Security::Cryptography::Core {
class CKeyDerivationParameters {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyDerivationParameters@Core@Cryptography@Security@Windows@@QEAA@IPEAUIBuffer@Streams@Storage@4@@Z
    CKeyDerivationParameters(unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capi1KdfTargetAlgorithm@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAW4Capi1KdfTargetAlgorithm@2345@@Z
    virtual long get_Capi1KdfTargetAlgorithm(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IterationCount@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_IterationCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KdfGenericBinary@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long get_KdfGenericBinary(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Capi1KdfTargetAlgorithm@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJW4Capi1KdfTargetAlgorithm@2345@@Z
    virtual long put_Capi1KdfTargetAlgorithm(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KdfGenericBinary@CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@@Z
    virtual long put_KdfGenericBinary(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyDerivationParameters@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CKeyDerivationParameters();
};
} // namespace Windows::Security::Cryptography::Core
