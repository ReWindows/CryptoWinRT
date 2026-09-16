#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 67 member(s).
namespace Windows::Security::Cryptography::Core {
class CAsymmetricKey {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAA@XZ
    CAsymmetricKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decrypt@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Decrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptAsync@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long DecryptAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encrypt@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAU6785@@Z
    virtual long Encrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sign@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@EPEAPEAU6785@@Z
    virtual long Sign(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignAsync@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@EPEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long SignAsync(WindissectOpaque *, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySignature@CAsymmetricKey@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0EPEAE@Z
    virtual long VerifySignature(WindissectOpaque *, WindissectOpaque *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateKeyPair@CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@I@Z
    long _GenerateKeyPair(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateKeyPairWithCurveName@CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@PEAUHSTRING__@@@Z
    long _GenerateKeyPairWithCurveName(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateKeyPairWithCurveParameters@CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@IPEAE@Z
    long _GenerateKeyPairWithCurveParameters(WindissectOpaque *, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportPrivateKey@CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@W4CryptographicPrivateKeyBlobType@2345@IPEBE@Z
    long _ImportPrivateKey(WindissectOpaque *, int, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportPublicKey@CAsymmetricKey@Core@Cryptography@Security@Windows@@QEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@W4CryptographicPublicKeyBlobType@2345@IPEBE@Z
    long _ImportPublicKey(WindissectOpaque *, int, unsigned int, unsigned char const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportCapi1PublicKeyBlob@CAsymmetricKey@Core@Cryptography@Security@Windows@@AEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@IPEBE@Z
    long _ImportCapi1PublicKeyBlob(WindissectOpaque *, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportPkcs8Blob@CAsymmetricKey@Core@Cryptography@Security@Windows@@AEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@IPEBE@Z
    long _ImportPkcs8Blob(WindissectOpaque *, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportRsaPkcs1PrivateKey@CAsymmetricKey@Core@Cryptography@Security@Windows@@AEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@IPEBE@Z
    long _ImportRsaPkcs1PrivateKey(WindissectOpaque *, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportRsaPkcs1PublicKey@CAsymmetricKey@Core@Cryptography@Security@Windows@@AEAAJPEAVCAsymmetricKeyAlgorithmProvider@2345@IPEBE@Z
    long _ImportRsaPkcs1PublicKey(WindissectOpaque *, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ImportX509PublicKeyInfo@CAsymmetricKey@Core@Cryptography@Security@Windows@@AEAAJIPEBE@Z
    long _ImportX509PublicKeyInfo(unsigned int, unsigned char const *);
};
} // namespace Windows::Security::Cryptography::Core
