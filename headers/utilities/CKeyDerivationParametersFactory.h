#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 8 member(s).
namespace Windows::Security::Cryptography::Core {
class CKeyDerivationParametersFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildForCapi1Kdf@CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@UEAAJW4Capi1KdfTargetAlgorithm@2345@PEAPEAUIKeyDerivationParameters@2345@@Z
    virtual long BuildForCapi1Kdf(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildForPbkdf2@CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@IPEAPEAUIKeyDerivationParameters@2345@@Z
    virtual long BuildForPbkdf2(WindissectOpaque *, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildForSP800108@CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0PEAPEAUIKeyDerivationParameters@2345@@Z
    virtual long BuildForSP800108(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildForSP80056a@CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@0000PEAPEAUIKeyDerivationParameters@2345@@Z
    virtual long BuildForSP80056a(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyDerivationParametersFactory@Core@Cryptography@Security@Windows@@QEAA@XZ
    CKeyDerivationParametersFactory();
};
} // namespace Windows::Security::Cryptography::Core
