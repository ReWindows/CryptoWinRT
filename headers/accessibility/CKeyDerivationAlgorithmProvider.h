#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 21 member(s).
namespace Windows::Security::Cryptography::Core {
class CKeyDerivationAlgorithmProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAA@XZ
    CKeyDerivationAlgorithmProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKey@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUICryptographicKey@2345@@Z
    virtual long CreateKey(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenAlgorithm@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAAJPEAUHSTRING__@@@Z
    long _OpenAlgorithm(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlgorithmName@CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlgorithmName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyDerivationAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CKeyDerivationAlgorithmProvider();
};
} // namespace Windows::Security::Cryptography::Core
