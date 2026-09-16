#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 9 member(s).
namespace Windows::Internal::Security::Cryptography::Core {
class CSymmetricPopKeyStatic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@QEAA@XZ
    CSymmetricPopKeyStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decrypt@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAUIBuffer@Streams@Storage@6@0000PEAPEAU7896@@Z
    virtual long Decrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encrypt@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAUIBuffer@Streams@Storage@6@0000PEAPEAU7896@@Z
    virtual long Encrypt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Import@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAUHSTRING__@@00EPEAUIBuffer@Streams@Storage@6@PEAPEAU89Storage@6@@Z
    virtual long Import(HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sign@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAUIBuffer@Streams@Storage@6@000PEAPEAU7896@@Z
    virtual long Sign(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verify@CSymmetricPopKeyStatic@Core@Cryptography@Security@Internal@Windows@@UEAAJPEAUIBuffer@Streams@Storage@6@0000PEAE@Z
    virtual long Verify(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char *);
};
} // namespace Windows::Internal::Security::Cryptography::Core
