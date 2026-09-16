#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Cryptography::Core {
class CDataProtectionStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CDataProtectionStatics@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverloadExplicit@CDataProtectionStatics@Core@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIDataProtectionProvider@DataProtection@345@@Z
    virtual long CreateOverloadExplicit(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create_OverloadDefault@CDataProtectionStatics@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUIDataProtectionProvider@DataProtection@345@@Z
    virtual long Create_OverloadDefault(WindissectOpaque * *);
};
} // namespace Windows::Security::Cryptography::Core
