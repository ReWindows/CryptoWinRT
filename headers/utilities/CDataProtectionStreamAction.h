#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 25 member(s).
namespace Windows::Security::Cryptography::Core {
class CDataProtectionStreamAction {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@QEAA@XZ
    CDataProtectionStreamAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CDataProtectionStreamAction();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@MEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NCryptStreamOutputCallback@CDataProtectionStreamAction@Core@Cryptography@Security@Windows@@KAJPEAXPEBE_KH@Z
    static long _NCryptStreamOutputCallback(void *, unsigned char const *, uint64_t, int);
};
} // namespace Windows::Security::Cryptography::Core
