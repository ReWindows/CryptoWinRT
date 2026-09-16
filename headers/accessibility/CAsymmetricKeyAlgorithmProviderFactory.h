#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Cryptography::Core {
class CAsymmetricKeyAlgorithmProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CAsymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CAsymmetricKeyAlgorithmProviderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CAsymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsymmetricKeyAlgorithmProvider@2345@@Z
    virtual long OpenAlgorithm(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
