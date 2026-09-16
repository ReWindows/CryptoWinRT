#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 10 member(s).
namespace Windows::Security::Cryptography::Core {
class CMacAlgorithmNamesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CMacAlgorithmNamesFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AesCmac@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AesCmac(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HmacMd5@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HmacMd5(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HmacSha1@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HmacSha1(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HmacSha256@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HmacSha256(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HmacSha384@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HmacSha384(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HmacSha512@CMacAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HmacSha512(HSTRING__* *);
};
} // namespace Windows::Security::Cryptography::Core
