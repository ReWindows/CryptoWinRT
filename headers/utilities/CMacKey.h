#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 36 member(s).
namespace Windows::Security::Cryptography::Core {
class CMacKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMacKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportDefaultPrivateKeyBlobType@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportDefaultPrivateKeyBlobType(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportDefaultPublicKeyBlobType@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportDefaultPublicKeyBlobType(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPrivateKeyWithBlobType@CMacKey@Core@Cryptography@Security@Windows@@UEAAJW4CryptographicPrivateKeyBlobType@2345@PEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportPrivateKeyWithBlobType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPublicKeyWithBlobType@CMacKey@Core@Cryptography@Security@Windows@@UEAAJW4CryptographicPublicKeyBlobType@2345@PEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportPublicKeyWithBlobType(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMacKey@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMacKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sign@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@EPEAPEAU6785@@Z
    virtual long Sign(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySignature@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0EPEAE@Z
    virtual long VerifySignature(WindissectOpaque *, WindissectOpaque *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyHmacKeyMaterial@CMacKey@Core@Cryptography@Security@Windows@@QEAAJPEAUIBuffer@Streams@Storage@5@PEAVCMacAlgorithmProvider@2345@@Z
    long _CopyHmacKeyMaterial(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateHmacHash@CMacKey@Core@Cryptography@Security@Windows@@QEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAE@Z
    long _GenerateHmacHash(WindissectOpaque *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeySize@CMacKey@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_KeySize(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMacKey@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CMacKey();
};
} // namespace Windows::Security::Cryptography::Core
