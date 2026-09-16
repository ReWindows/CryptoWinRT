#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 19 member(s).
namespace Windows::Security::Cryptography::Core {
class CHashComputation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHashComputation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@@Z
    virtual long Append(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendByteArray@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJIPEAE@Z
    virtual long AppendByteArray(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAndReset@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long GetValueAndReset(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHashComputation@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHashComputation@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateForMac@CHashComputation@Core@Cryptography@Security@Windows@@QEAAJPEAVCMacAlgorithmProvider@2345@PEAUIBuffer@Streams@Storage@5@@Z
    long _CreateForMac(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHashComputation@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CHashComputation();
};
} // namespace Windows::Security::Cryptography::Core
