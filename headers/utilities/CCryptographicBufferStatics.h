#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 15 member(s).
namespace Windows::Security::Cryptography {
class CCryptographicBufferStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCryptographicBufferStatics@Cryptography@Security@Windows@@QEAA@XZ
    CCryptographicBufferStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@0PEAE@Z
    virtual long Compare(WindissectOpaque *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertBinaryToString@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJW4BinaryStringEncoding@234@PEAUIBuffer@Streams@Storage@4@PEAPEAUHSTRING__@@@Z
    virtual long ConvertBinaryToString(int, WindissectOpaque *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStringToBinary@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@W4BinaryStringEncoding@234@PEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long ConvertStringToBinary(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToByteArray@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAIPEAPEAE@Z
    virtual long CopyToByteArray(WindissectOpaque *, unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromByteArray@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJIPEAEPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long CreateFromByteArray(unsigned int, unsigned char *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeFromBase64String@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long DecodeFromBase64String(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeFromHexString@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long DecodeFromHexString(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeToBase64String@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAUHSTRING__@@@Z
    virtual long EncodeToBase64String(WindissectOpaque *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeToHexString@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAUHSTRING__@@@Z
    virtual long EncodeToHexString(WindissectOpaque *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRandom@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long GenerateRandom(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRandomNumber@CCryptographicBufferStatics@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long GenerateRandomNumber(unsigned int *);
};
} // namespace Windows::Security::Cryptography
