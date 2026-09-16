#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 4 member(s).
namespace Windows::Security::Cryptography::Core {
class CHashAlgorithmProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CHashAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CHashAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIHashAlgorithmProvider@2345@@Z
    virtual long OpenAlgorithm(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
