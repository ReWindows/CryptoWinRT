#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 22 member(s).
class CNgcRenewAttestationOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcRenewAttestationOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcRenewAttestationOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcRenewAttestationOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcRenewAttestationOperation@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcRenewAttestationOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcRenewAttestationOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcRenewAttestationOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcRenewAttestationOperation@@UEAAKXZ
    virtual unsigned long Release();
};
