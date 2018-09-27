/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _world;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) /* Warning: unhandled struct encoding: '{InjectedBundleScriptWorld=^^?@{Ref<WebCore::DOMWrapperWorld' */ struct *_scriptWorld; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)world;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct InjectedBundleScriptWorld { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; long doublex14; bycopy void*x15; void*x16; const void*x17; void*x18; void*x19; void*x20; const void*x21; out const long x22; double x23; void*x24; void*x25; void*x26; void*x27; void*x28; SEL x29; SEL x30; long doublex31; void*x32; void*x33; unsigned int x34/* : ? */; void*x35; void*x36; const void*x37; const void*x38; int x39; void*x40; short x41; void*x42; void*x43; void*x44; unsigned int x45/* : ? */; unsigned char x46; out const void*x47; SEL x48; SEL x49; long doublex50; bycopy void*x51; void*x52; const void*x53; void*x54; void*x55; void*x56; const void*x57; out const long x58; double x59; void*x60; void*x61; void*x62; void*x63; struct DOMWrapperWorld {} *x64; }*)_scriptWorld;
- (void)clearWrappers;
- (void)dealloc;
- (void)disableOverrideBuiltinsBehavior;
- (void)makeAllShadowRootsOpen;
- (id)name;

@end
