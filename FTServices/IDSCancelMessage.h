//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSArray, NSNumber;

@interface IDSCancelMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray *_peers;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

