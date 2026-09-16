#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 9 member(s).
namespace Windows::Security::Cryptography::Core {
class CHashAlgorithmNamesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CHashAlgorithmNamesFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Md5@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Md5(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sha1@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Sha1(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sha256@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Sha256(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sha384@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Sha384(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sha512@CHashAlgorithmNamesFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Sha512(HSTRING__* *);
};
} // namespace Windows::Security::Cryptography::Core
