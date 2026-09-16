#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 3 member(s).
namespace Windows::Security {
class Cryptography {
public:
    class CCryptographicBuffer;
    class CCryptographicBufferStatics;
    class Core;
    class ICryptoInternalDecrypt;
    class ICryptoInternalDecryptAndAuthenticate;
    class ICryptoInternalDecryptAsync;
    class ICryptoInternalDerive;
    class ICryptoInternalEncrypt;
    class ICryptoInternalEncryptAndAuthenticate;
    class ICryptoInternalSign;
    class ICryptoInternalSignAsync;
    class ICryptoInternalVerify;
    class Internal;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingWindowHandle@Cryptography@Security@Windows@@YAJPEAPEAUHWND__@@@Z
    long GetCallingWindowHandle(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HRESULT_FROM_BCRYPT@Cryptography@Security@Windows@@YAJJ@Z
    long HRESULT_FROM_BCRYPT(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ICryptographicBufferInternal_Data@Cryptography@Security@Windows@@YAJPEAUIBuffer@Streams@Storage@3@PEAIPEAPEAE@Z
    long ICryptographicBufferInternal_Data(WindissectOpaque *, unsigned int *, unsigned char * *);
};
} // namespace Windows::Security
