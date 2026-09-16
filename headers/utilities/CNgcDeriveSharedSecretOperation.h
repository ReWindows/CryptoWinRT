#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 25 member(s).
class CNgcDeriveSharedSecretOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNgcDeriveSharedSecretOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNgcDeriveSharedSecretOperation@@QEAA@XZ
    CNgcDeriveSharedSecretOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CNgcDeriveSharedSecretOperation@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNgcDeriveSharedSecretOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CNgcDeriveSharedSecretOperation@@UEAAJPEAPEAUIKeyCredentialOperationResult@Credentials@Security@Windows@@@Z
    virtual long GetResults(::Windows::Security::Credentials::IKeyCredentialOperationResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNgcDeriveSharedSecretOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNgcDeriveSharedSecretOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNgcDeriveSharedSecretOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNgcDeriveSharedSecretOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNgcDeriveSharedSecretOperation@@QEAAJIV?$ComPtr@VCAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@@WRL@Microsoft@@UWindowId@UI@Windows@@PEAUHSTRING__@@PEAUIBuffer@Streams@Storage@7@@Z
    long RuntimeClassInitialize(unsigned int, WindissectOpaque, ::Windows::UI::WindowId, HSTRING__*, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNgcDeriveSharedSecretOperation@@UEAA@XZ
    virtual ~CNgcDeriveSharedSecretOperation();
};
