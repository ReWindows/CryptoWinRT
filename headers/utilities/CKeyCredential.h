#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 39 member(s).
namespace Windows::Security::Credentials {
class CKeyCredential {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyCredential@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredential@Credentials@Security@Windows@@QEAA@V?$ComPtr@VCAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    CKeyCredential(WindissectOpaque, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttestationAsync@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVKeyCredentialAttestationResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long GetAttestationAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredential@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredential@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyCredential@Credentials@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyCredential@Credentials@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDeriveSharedSecretAsync@CKeyCredential@Credentials@Security@Windows@@UEAAJUWindowId@UI@4@PEAUHSTRING__@@PEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialOperationResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestDeriveSharedSecretAsync(::Windows::UI::WindowId, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSignAsync@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialOperationResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestSignAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSignForWindowAsync@CKeyCredential@Credentials@Security@Windows@@UEAAJUWindowId@UI@4@PEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialOperationResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestSignForWindowAsync(::Windows::UI::WindowId, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveAuthorizationContext@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU5674@@Z
    virtual long RetrieveAuthorizationContext(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrievePublicKeyWithBlobType@CKeyCredential@Credentials@Security@Windows@@UEAAJW4CryptographicPublicKeyBlobType@Core@Cryptography@34@PEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long RetrievePublicKeyWithBlobType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrievePublicKeyWithDefaultBlobType@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long RetrievePublicKeyWithDefaultBlobType(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CKeyCredential@Credentials@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyCredential@Credentials@Security@Windows@@UEAA@XZ
    virtual ~CKeyCredential();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSignOperation@CKeyCredential@Credentials@Security@Windows@@EEAAJPEAUIBuffer@Streams@Storage@4@PEAUHWND__@@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialOperationResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long CreateSignOperation(WindissectOpaque *, HWND__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Credentials
