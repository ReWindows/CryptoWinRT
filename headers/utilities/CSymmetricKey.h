#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 43 member(s).
namespace Windows::Security::Cryptography::Core {
class CSymmetricKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSymmetricKey@Core@Cryptography@Security@Windows@@QEAA@XZ
    CSymmetricKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decrypt@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Decrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptAndAuthenticate@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@000PEAPEAU6785@@Z
    virtual long DecryptAndAuthenticate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encrypt@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Encrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptAndAuthenticate@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@00PEAPEAUIEncryptedAndAuthenticatedData@2345@@Z
    virtual long EncryptAndAuthenticate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSymmetricKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Security::Cryptography::Core
