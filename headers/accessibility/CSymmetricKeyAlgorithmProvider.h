#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 22 member(s).
namespace Windows::Security::Cryptography::Core {
class CSymmetricKeyAlgorithmProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAA@XZ
    CSymmetricKeyAlgorithmProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSymmetricKey@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUICryptographicKey@2345@@Z
    virtual long CreateSymmetricKey(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAAJPEAUHSTRING__@@@Z
    long OpenAlgorithm(HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlgorithmName@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlgorithmName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlockLength@CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_BlockLength(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CSymmetricKeyAlgorithmProvider();
};
} // namespace Windows::Security::Cryptography::Core
