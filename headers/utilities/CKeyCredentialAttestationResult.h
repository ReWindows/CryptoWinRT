#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 21 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialAttestationResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredentialAttestationResult@Credentials@Security@Windows@@QEAA@V?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@0W4KeyCredentialAttestationStatus@123@@Z
    CKeyCredentialAttestationResult(WindissectOpaque, WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredentialAttestationResult@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredentialAttestationResult@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AttestationBuffer@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long get_AttestationBuffer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CertificateChainBuffer@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long get_CertificateChainBuffer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAAJPEAW4KeyCredentialAttestationStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyCredentialAttestationResult@Credentials@Security@Windows@@UEAA@XZ
    virtual ~CKeyCredentialAttestationResult();
};
} // namespace Windows::Security::Credentials
