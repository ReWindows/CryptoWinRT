#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 29 member(s).
namespace Windows::Security::Cryptography::Core {
class CMacAlgorithmProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAA@XZ
    CMacAlgorithmProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHash@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUIHashComputation@2345@@Z
    virtual long CreateHash(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateKey@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAPEAUICryptographicKey@2345@@Z
    virtual long CreateKey(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenAlorithm@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@QEAAJPEAUHSTRING__@@@Z
    long _OpenAlorithm(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlgorithmName@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AlgorithmName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MacLength@CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAAJPEAI@Z
    virtual long get_MacLength(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMacAlgorithmProvider@Core@Cryptography@Security@Windows@@UEAA@XZ
    virtual ~CMacAlgorithmProvider();
};
} // namespace Windows::Security::Cryptography::Core
