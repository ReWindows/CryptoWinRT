#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 24 member(s).
namespace Windows::Security::Cryptography::Core {
class CAsyncOperationUnprotect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@QEAA@XZ
    CAsyncOperationUnprotect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsyncOperationUnprotect@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CAsyncOperationUnprotect();
};
} // namespace Windows::Security::Cryptography::Core
