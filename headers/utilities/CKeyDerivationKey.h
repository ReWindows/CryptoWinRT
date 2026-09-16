#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 21 member(s).
namespace Windows::Security::Cryptography::Core {
class CKeyDerivationKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeriveKeyMaterial@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIKeyDerivationParameters@2345@IPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long DeriveKeyMaterial(WindissectOpaque *, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyDerivationKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Security::Cryptography::Core
