#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 24 member(s).
namespace Windows::Security::Cryptography::Core {
class COpenKeyPairFromCertificateOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUICryptographicKey@2345@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@QEAAJIPEAUICertificate@Certificates@345@PEAUHSTRING__@@W4CryptographicPadding@2345@PEAUHWND__@@@Z
    long RuntimeClassInitialize(unsigned int, WindissectOpaque *, HSTRING__*, int, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenKeyPairFromCertificateOperation@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~COpenKeyPairFromCertificateOperation();
};
} // namespace Windows::Security::Cryptography::Core
