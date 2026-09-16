#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 20 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialRetrievalResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredentialRetrievalResult@Credentials@Security@Windows@@QEAA@V?$ComPtr@UIKeyCredential@Credentials@Security@Windows@@@WRL@Microsoft@@W4KeyCredentialStatus@123@@Z
    CKeyCredentialRetrievalResult(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Credential@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJPEAPEAUIKeyCredential@234@@Z
    virtual long get_Credential(::Windows::Security::Credentials::IKeyCredential * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAAJPEAW4KeyCredentialStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyCredentialRetrievalResult@Credentials@Security@Windows@@UEAA@XZ
    virtual ~CKeyCredentialRetrievalResult();
};
} // namespace Windows::Security::Credentials
