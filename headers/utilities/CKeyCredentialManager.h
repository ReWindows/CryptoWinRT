#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 2 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CKeyCredentialManager@Credentials@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CKeyCredentialManager@Credentials@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
};
} // namespace Windows::Security::Credentials
