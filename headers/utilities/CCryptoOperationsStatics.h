#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 16 member(s).
namespace Windows::Security::Cryptography::Core {
class CCryptoOperationsStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@QEAA@XZ
    CCryptoOperationsStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decrypt@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@1PEAPEAU7895@@Z
    virtual long Decrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptAndAuthenticate@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@111PEAPEAU7895@@Z
    virtual long DecryptAndAuthenticate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecryptAsync@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@1PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long DecryptAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeriveKeyMaterial@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIKeyDerivationParameters@2345@IPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long DeriveKeyMaterial(WindissectOpaque *, WindissectOpaque *, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encrypt@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@1PEAPEAU7895@@Z
    virtual long Encrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptAndAuthenticate@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@11PEAPEAUIEncryptedAndAuthenticatedData@2345@@Z
    virtual long EncryptAndAuthenticate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sign@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z
    virtual long Sign(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignAsync@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long SignAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignHashedData@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z
    virtual long SignHashedData(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignHashedDataAsync@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long SignHashedDataAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySignature@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@1PEAE@Z
    virtual long VerifySignature(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifySignatureWithHashInput@CCryptoOperationsStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUICryptographicKey@2345@PEAUIBuffer@Streams@Storage@5@1PEAE@Z
    virtual long VerifySignatureWithHashInput(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char *);
};
} // namespace Windows::Security::Cryptography::Core
