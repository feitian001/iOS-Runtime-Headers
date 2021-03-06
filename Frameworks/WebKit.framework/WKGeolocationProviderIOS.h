/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKGeolocationProviderIOS : NSObject <WebGeolocationCoreLocationUpdateListener> {
    struct RetainPtr<WebGeolocationCoreLocationProvider> { 
        void *m_ptr; 
    }  _coreLocationProvider;
    struct RefPtr<WebKit::WebGeolocationManagerProxy> { 
        struct WebGeolocationManagerProxy {} *m_ptr; 
    }  _geolocationManager;
    BOOL  _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition> { 
        struct WebGeolocationPosition {} *m_ptr; 
    }  _lastActivePosition;
    struct Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16> { 
        struct GeolocationRequestData {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _requestsWaitingForCoreLocationAuthorization;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setEnableHighAccuracy:(BOOL)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)decidePolicyForGeolocationRequestFromOrigin:(struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct optional<unsigned short> { bool x_6_1_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_2_1; unsigned short x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; bool x9; bool x10; int x11; bool x12; bool x13; }*)arg1 frame:(struct WebFrameProxy { int (**x1)(); id x2; struct WebPageProxy {} x3; struct FrameLoadState { int x_4_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_4_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_4_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_4_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_4_1_5; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; bool x7; bool x8; struct RefPtr<WebKit::WebCertificateInfo> { struct WebCertificateInfo {} *x_9_1_1; } x9; struct RefPtr<WebKit::WebFrameListenerProxy> { struct WebFrameListenerProxy {} *x_10_1_1; } x10; unsigned long long x11; struct ContentFilterUnblockHandler { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_12_1_1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; unsigned int x_2_2_13; unsigned int x_2_2_14; } x_12_1_2; struct function<void (std::__1::function<void (bool)>)>={type=[12C] {} x_12_1_3; struct __base<void (std::__1::function<void (bool)>)> {} *x_12_1_4; } x12; }*)arg2 request:(struct GeolocationPermissionRequestProxy { int (**x1)(); id x2; struct GeolocationPermissionRequestManagerProxy {} x3; unsigned long long x4; }*)arg3 view:(id)arg4;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)init;
- (id)initWithProcessPool:(struct WebProcessPool { int (**x1)(); id x2; int (*x3)(); struct Ref<API::ProcessPoolConfiguration> { struct ProcessPoolConfiguration {} *x_4_1_1; } x4; struct MessageReceiverMap { struct HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, IPC::MessageReceiver *, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> > { struct KeyValuePair<IPC::StringReference, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_1_2_1; } x_5_1_1; struct HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> > { struct HashTable<std::__1::pair<IPC::StringReference, unsigned long long>, WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> >, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashMap<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *, WTF::PairHash<IPC::StringReference, unsigned long long>, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> >, WTF::HashTraits<IPC::MessageReceiver *> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<IPC::StringReference, unsigned long long> > > { struct KeyValuePair<std::__1::pair<IPC::StringReference, unsigned long long>, IPC::MessageReceiver *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_2_2_1; } x_5_1_2; } x5; }*)arg1;
- (void)positionChanged:(struct GeolocationPosition { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (void)resetGeolocation;

@end
