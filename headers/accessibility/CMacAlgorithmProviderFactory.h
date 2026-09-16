#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Cryptography::Core {
class CMacAlgorithmProviderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CMacAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMacAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CMacAlgorithmProviderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAlgorithm@CMacAlgorithmProviderFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMacAlgorithmProvider@2345@@Z
    virtual long OpenAlgorithm(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
