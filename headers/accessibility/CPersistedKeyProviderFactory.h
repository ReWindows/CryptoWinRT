#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 6 member(s).
namespace Windows::Security::Cryptography::Core {
class CPersistedKeyProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CPersistedKeyProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPersistedKeyProviderFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CPersistedKeyProviderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenKeyPairFromCertificateAsync@CPersistedKeyProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUICertificate@Certificates@345@PEAUHSTRING__@@W4CryptographicPadding@2345@PEAPEAU?$IAsyncOperation@PEAVCryptographicKey@Core@Cryptography@Security@Windows@@@Foundation@5@@Z
    virtual long OpenKeyPairFromCertificateAsync(WindissectOpaque *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPublicKeyFromCertificate@CPersistedKeyProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUICertificate@Certificates@345@PEAUHSTRING__@@W4CryptographicPadding@2345@PEAPEAUICryptographicKey@2345@@Z
    virtual long OpenPublicKeyFromCertificate(WindissectOpaque *, HSTRING__*, int, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
