#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 23 member(s).
class CNgcOpenKeyOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcOpenKeyOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcOpenKeyOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcOpenKeyOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcOpenKeyOperation@@UEAAJPEAPEAUIKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Z
    virtual long GetResults(::Windows::Security::Credentials::IKeyCredentialRetrievalResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcOpenKeyOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcOpenKeyOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcOpenKeyOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcOpenKeyOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcOpenKeyOperation@@UEAA@XZ
    virtual ~CNgcOpenKeyOperation();
};
