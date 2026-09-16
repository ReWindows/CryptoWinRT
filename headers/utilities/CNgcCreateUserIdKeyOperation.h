#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 23 member(s).
class CNgcCreateUserIdKeyOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcCreateUserIdKeyOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcCreateUserIdKeyOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcCreateUserIdKeyOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcCreateUserIdKeyOperation@@UEAAJPEAPEAUIKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Z
    virtual long GetResults(::Windows::Security::Credentials::IKeyCredentialRetrievalResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcCreateUserIdKeyOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcCreateUserIdKeyOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcCreateUserIdKeyOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcCreateUserIdKeyOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcCreateUserIdKeyOperation@@UEAA@XZ
    virtual ~CNgcCreateUserIdKeyOperation();
};
