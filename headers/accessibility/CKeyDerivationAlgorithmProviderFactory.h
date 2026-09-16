#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Cryptography::Core {
class CKeyDerivationAlgorithmProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CKeyDerivationAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyDerivationAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CKeyDerivationAlgorithmProviderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CKeyDerivationAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIKeyDerivationAlgorithmProvider@2345@@Z
    virtual long OpenAlgorithm(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
