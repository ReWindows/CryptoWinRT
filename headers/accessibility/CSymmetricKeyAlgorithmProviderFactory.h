#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Cryptography::Core {
class CSymmetricKeyAlgorithmProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CSymmetricKeyAlgorithmProviderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CSymmetricKeyAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISymmetricKeyAlgorithmProvider@2345@@Z
    virtual long OpenAlgorithm(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
