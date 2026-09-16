#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 13 member(s).
namespace Windows::Security::Credentials {
class CKeyCredentialManagerStatic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long DeleteAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecureId@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long GetSecureId(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long IsSupportedAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long OpenAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAUHSTRING__@@W4ChallengeResponseKind@234@PEAUIAttestationChallengeHandler@234@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long OpenAsync(HSTRING__*, int, ::Windows::Security::Credentials::IAttestationChallengeHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenewAttestationAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long RenewAttestationAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCreateAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAUHSTRING__@@W4KeyCredentialCreationOption@234@00PEAUIKeyCredentialCacheConfiguration@234@UWindowId@UI@4@W4ChallengeResponseKind@234@PEAUIAttestationChallengeHandler@234@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestCreateAsync(HSTRING__*, int, HSTRING__*, HSTRING__*, ::Windows::Security::Credentials::IKeyCredentialCacheConfiguration *, ::Windows::UI::WindowId, int, ::Windows::Security::Credentials::IAttestationChallengeHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCreateAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJPEAUHSTRING__@@W4KeyCredentialCreationOption@234@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestCreateAsync(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCreateForWindowAsync@CKeyCredentialManagerStatic@Credentials@Security@Windows@@UEAAJUWindowId@UI@4@PEAUHSTRING__@@W4KeyCredentialCreationOption@234@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long RequestCreateForWindowAsync(::Windows::UI::WindowId, HSTRING__*, int, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKeyCredentialOperation@CKeyCredentialManagerStatic@Credentials@Security@Windows@@EEAAJPEAUHSTRING__@@W4KeyCredentialCreationOption@234@PEAUHWND__@@PEAPEAU?$IAsyncOperation@PEAVKeyCredentialRetrievalResult@Credentials@Security@Windows@@@Foundation@4@@Z
    virtual long CreateKeyCredentialOperation(HSTRING__*, int, HWND__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Credentials
