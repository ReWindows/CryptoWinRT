#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 17 member(s).
namespace Windows::Security::Cryptography::Core {
class CEncryptedAndAuthenticatedData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthenticationTag@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long get_AuthenticationTag(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EncryptedData@CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long get_EncryptedData(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEncryptedAndAuthenticatedData@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CEncryptedAndAuthenticatedData();
};
} // namespace Windows::Security::Cryptography::Core
