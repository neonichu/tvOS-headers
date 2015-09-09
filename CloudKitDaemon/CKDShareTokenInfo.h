//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShareTokenInfo : NSObject <NSCopying>
{
    NSString *_routingKey;
    NSData *_shortSharingTokenData;
    NSData *_publicTokenData;
    NSData *_privateTokenData;
}

@property(retain, nonatomic) NSData *privateTokenData; // @synthesize privateTokenData=_privateTokenData;
@property(retain, nonatomic) NSData *publicTokenData; // @synthesize publicTokenData=_publicTokenData;
@property(retain, nonatomic) NSData *shortSharingTokenData; // @synthesize shortSharingTokenData=_shortSharingTokenData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
@property(readonly, nonatomic) NSString *shortSharingToken;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

