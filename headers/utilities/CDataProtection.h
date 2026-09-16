#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 30 member(s).
namespace Windows::Security::Cryptography::Core {
class CDataProtection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataProtection@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CDataProtection@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CDataProtection@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Protect@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAU6785@@Z
    virtual long Protect(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtectAsync@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long ProtectAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtectStreamAsync@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIInputStream@Streams@Storage@5@PEAUIOutputStream@785@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long ProtectStreamAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataProtection@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unprotect@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAU6785@@Z
    virtual long Unprotect(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnprotectAsync@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long UnprotectAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnprotectStreamAsync@CDataProtection@Core@Cryptography@Security@Windows@@UEAAJPEAUIInputStream@Streams@Storage@5@PEAUIOutputStream@785@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long UnprotectStreamAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CDataProtection@Core@Cryptography@Security@Windows@@QEAAJPEAUHSTRING__@@@Z
    long _Create(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataProtection@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CDataProtection();
};
} // namespace Windows::Security::Cryptography::Core
