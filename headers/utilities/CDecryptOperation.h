#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 23 member(s).
namespace Windows::Security::Cryptography::Core {
class CDecryptOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDecryptOperation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDecryptOperation@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CDecryptOperation();
};
} // namespace Windows::Security::Cryptography::Core
