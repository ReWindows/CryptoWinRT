#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 23 member(s).
namespace Windows::Security::Cryptography::Core {
class CBCryptDecryptOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBCryptDecryptOperation@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CBCryptDecryptOperation();
};
} // namespace Windows::Security::Cryptography::Core
