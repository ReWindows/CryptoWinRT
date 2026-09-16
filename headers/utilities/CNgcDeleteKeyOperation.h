#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 23 member(s).
class CNgcDeleteKeyOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcDeleteKeyOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcDeleteKeyOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcDeleteKeyOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcDeleteKeyOperation@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcDeleteKeyOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcDeleteKeyOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcDeleteKeyOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcDeleteKeyOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcDeleteKeyOperation@@UEAA@XZ
    virtual ~CNgcDeleteKeyOperation();
};
