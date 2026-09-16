#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 68 member(s).
namespace Windows::Security::Cryptography::Core {
class CAsymmetricPersistedKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@QEAA@_KHH@Z
    CAsymmetricPersistedKey(uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decrypt@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Decrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptAsync@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long DecryptAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encrypt@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Encrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportDefaultPrivateKeyBlobType@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportDefaultPrivateKeyBlobType(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportDefaultPublicKeyBlobType@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportDefaultPublicKeyBlobType(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPrivateKeyWithBlobType@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJW4CryptographicPrivateKeyBlobType@2345@PEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportPrivateKeyWithBlobType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPublicKeyWithBlobType@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJW4CryptographicPublicKeyBlobType@2345@PEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long ExportPublicKeyWithBlobType(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sign@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@EPEAPEAU6785@@Z
    virtual long Sign(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignAsync@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@EPEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long SignAsync(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySignature@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0EPEAE@Z
    virtual long VerifySignature(WindissectOpaque *, WindissectOpaque *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKeyPair@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@QEAAJPEBU_CERT_CONTEXT@@PEBGW4CryptographicPadding@2345@PEAUHWND__@@@Z
    long _GetKeyPair(_CERT_CONTEXT const *, unsigned short const *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPaddingInfo@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@QEAAJPEBGW4CryptographicPadding@2345@@Z
    long _GetPaddingInfo(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPublicKey@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@QEAAJPEBU_CERT_CONTEXT@@PEBGW4CryptographicPadding@2345@@Z
    long _GetPublicKey(_CERT_CONTEXT const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenKeyPair@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@QEAAJPEBG00W4CryptographicPadding@2345@PEAUHWND__@@@Z
    long _OpenKeyPair(unsigned short const *, unsigned short const *, unsigned short const *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEA_K@Z
    virtual long get_Key(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeySize@CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_KeySize(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsymmetricPersistedKey@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CAsymmetricPersistedKey();
};
} // namespace Windows::Security::Cryptography::Core
