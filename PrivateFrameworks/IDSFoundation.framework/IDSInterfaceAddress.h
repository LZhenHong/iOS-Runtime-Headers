/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSInterfaceAddress : NSObject {
    bool  _AWDL;
    bool  _Cellular;
    IDSSockAddrWrapper * _address;
    NSData * _bssid;
    unsigned int  _delegatedIndex;
    NSString * _delegatedName;
    IDSSockAddrWrapper * _destination;
    IDSSockAddrWrapper * _external;
    unsigned int  _index;
    NSString * _name;
    IDSSockAddrWrapper * _netmask;
    bool  _temporary;
}

@property (getter=isAWDL, readonly) bool AWDL;
@property (getter=isCellular, readonly) bool Cellular;
@property (readonly) unsigned long long IPVersion;
@property (readonly) IDSSockAddrWrapper *address;
@property (readonly) NSData *bssid;
@property (readonly) unsigned int delegatedIndex;
@property (readonly) NSString *delegatedName;
@property (readonly) IDSSockAddrWrapper *destination;
@property (copy) IDSSockAddrWrapper *external;
@property (readonly) unsigned int index;
@property (readonly) NSString *name;
@property (readonly) IDSSockAddrWrapper *netmask;
@property (getter=isTemporaryIPv6, readonly) bool temporary;

+ (id)BSSIDWithInterfaceName:(id)arg1;
+ (id)interfaceAddress:(struct ifaddrs { struct ifaddrs {} *x1; char *x2; unsigned int x3; struct sockaddr {} *x4; struct sockaddr {} *x5; struct sockaddr {} *x6; void *x7; }*)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4;
+ (id)interfaceAddressWithTransmittedBytes:(char *)arg1 length:(long long)arg2 withLocalInterfaceName:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)IPVersion;
- (id)address;
- (id)bssid;
- (unsigned int)delegatedIndex;
- (id)delegatedName;
- (id)description;
- (id)destination;
- (id)external;
- (long long)getTransmittableBytes:(char *)arg1 withPrefixByte:(unsigned char)arg2;
- (unsigned int)index;
- (id)initWithInterfaceAddress:(struct ifaddrs { struct ifaddrs {} *x1; char *x2; unsigned int x3; struct sockaddr {} *x4; struct sockaddr {} *x5; struct sockaddr {} *x6; void *x7; }*)arg1 bflags:(unsigned char)arg2 bssid:(char *)arg3 bssidLength:(unsigned char)arg4;
- (bool)isAWDL;
- (bool)isCellular;
- (bool)isTemporaryIPv6;
- (id)name;
- (id)netmask;
- (void)setExternal:(id)arg1;

@end
