#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 35 member(s).
namespace Windows::Security::Cryptography::Core {
class CAsymmetricKeyAlgorithmProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAA@XZ
    CAsymmetricKeyAlgorithmProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKeyPair@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJIPEAPEAUICryptographicKey@2345@@Z
    virtual long CreateKeyPair(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKeyPairWithCurveName@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICryptographicKey@2345@@Z
    virtual long CreateKeyPairWithCurveName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKeyPairWithCurveParameters@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJIPEAEPEAPEAUICryptographicKey@2345@@Z
    virtual long CreateKeyPairWithCurveParameters(unsigned int, unsigned char *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportDefaultPrivateKeyBlob@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUICryptographicKey@2345@@Z
    virtual long ImportDefaultPrivateKeyBlob(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportDefaultPublicKeyBlob@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUICryptographicKey@2345@@Z
    virtual long ImportDefaultPublicKeyBlob(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportKeyPairWithBlobType@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@W4CryptographicPrivateKeyBlobType@2345@PEAPEAUICryptographicKey@2345@@Z
    virtual long ImportKeyPairWithBlobType(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportPublicKeyWithBlobType@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@W4CryptographicPublicKeyBlobType@2345@PEAPEAUICryptographicKey@2345@@Z
    virtual long ImportPublicKeyWithBlobType(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenAlgorithm@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAAJPEAUHSTRING__@@@Z
    long _OpenAlgorithm(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlgorithmName@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlgorithmName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CAsymmetricKeyAlgorithmProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportPrivateKey@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@AEAAJPEAUIBuffer@Streams@Storage@5@W4CryptographicPrivateKeyBlobType@2345@PEAPEAUICryptographicKey@2345@@Z
    long ImportPrivateKey(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportPublicKey@CAsymmetricKeyAlgorithmProvider@Core@Cryptography@Security@Windows@@AEAAJPEAUIBuffer@Streams@Storage@5@W4CryptographicPublicKeyBlobType@2345@PEAPEAUICryptographicKey@2345@@Z
    long ImportPublicKey(WindissectOpaque *, int, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
