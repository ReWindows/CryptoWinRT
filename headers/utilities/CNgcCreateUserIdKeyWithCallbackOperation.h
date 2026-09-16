#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 25 member(s).
class CNgcCreateUserIdKeyWithCallbackOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNgcCreateUserIdKeyWithCallbackOperation@@QEAA@XZ
    CNgcCreateUserIdKeyWithCallbackOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJPEAPEAUIKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Z
    virtual long GetResults(::Windows::Security::Credentials::IKeyCredentialRetrievalResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcCreateUserIdKeyWithCallbackOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNgcCreateUserIdKeyWithCallbackOperation@@QEAAJIPEAUHSTRING__@@00W4KeyCredentialCreationOption@Credentials@Security@Windows@@PEAUIKeyCredentialCacheConfiguration@456@W4ChallengeResponseKind@456@PEAUIAttestationChallengeHandler@456@PEAUHWND__@@@Z
    long RuntimeClassInitialize(unsigned int, HSTRING__*, HSTRING__*, HSTRING__*, int, ::Windows::Security::Credentials::IKeyCredentialCacheConfiguration *, int, ::Windows::Security::Credentials::IAttestationChallengeHandler *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcCreateUserIdKeyWithCallbackOperation@@UEAA@XZ
    virtual ~CNgcCreateUserIdKeyWithCallbackOperation();
};
