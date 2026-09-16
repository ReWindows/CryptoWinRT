#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 20 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialOperationResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredentialOperationResult@Credentials@Security@Windows@@QEAA@V?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@W4KeyCredentialStatus@123@@Z
    CKeyCredentialOperationResult(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredentialOperationResult@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredentialOperationResult@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Result@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long get_Result(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAAJPEAW4KeyCredentialStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyCredentialOperationResult@Credentials@Security@Windows@@UEAA@XZ
    virtual ~CKeyCredentialOperationResult();
};
} // namespace Windows::Security::Credentials
