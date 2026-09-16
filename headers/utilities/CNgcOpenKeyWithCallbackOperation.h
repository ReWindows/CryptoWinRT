#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 25 member(s).
class CNgcOpenKeyWithCallbackOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcOpenKeyWithCallbackOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNgcOpenKeyWithCallbackOperation@@QEAA@XZ
    CNgcOpenKeyWithCallbackOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcOpenKeyWithCallbackOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcOpenKeyWithCallbackOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcOpenKeyWithCallbackOperation@@UEAAJPEAPEAUIKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Z
    virtual long GetResults(::Windows::Security::Credentials::IKeyCredentialRetrievalResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcOpenKeyWithCallbackOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcOpenKeyWithCallbackOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcOpenKeyWithCallbackOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcOpenKeyWithCallbackOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNgcOpenKeyWithCallbackOperation@@QEAAJIPEAUHSTRING__@@W4ChallengeResponseKind@Credentials@Security@Windows@@PEAUIAttestationChallengeHandler@456@PEAUHWND__@@@Z
    long RuntimeClassInitialize(unsigned int, HSTRING__*, int, ::Windows::Security::Credentials::IAttestationChallengeHandler *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcOpenKeyWithCallbackOperation@@UEAA@XZ
    virtual ~CNgcOpenKeyWithCallbackOperation();
};
