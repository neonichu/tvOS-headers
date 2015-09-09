//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding>
{
    CDStruct_4c969caf _auditToken;
}

+ (id)tokenFromMachMessage:(CDStruct_c91b0553 *)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;
+ (id)tokenFromAuditToken:(CDStruct_4c969caf)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf realToken; // @synthesize realToken=_auditToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)_valueFromData:(id)arg1 ofType:(const char *)arg2;
- (id)_dataWithValue:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)bundleID;
- (int)pid;
- (_Bool)hasEntitlement:(id)arg1;
- (id)initWithMachMessage:(CDStruct_c91b0553 *)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

