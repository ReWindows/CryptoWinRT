#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 5 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialCacheConfigurationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CKeyCredentialCacheConfigurationFactory@Credentials@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyCredentialCacheConfigurationFactory@Credentials@Security@Windows@@QEAA@XZ
    CKeyCredentialCacheConfigurationFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CKeyCredentialCacheConfigurationFactory@Credentials@Security@Windows@@UEAAJW4KeyCredentialCacheOption@234@UTimeSpan@Foundation@4@IPEAPEAUIKeyCredentialCacheConfiguration@234@@Z
    virtual long CreateInstance(int, WindissectOpaque, unsigned int, ::Windows::Security::Credentials::IKeyCredentialCacheConfiguration * *);
};
} // namespace Windows::Security::Credentials
