//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding>
{
    _Bool _result;
    TKSmartCardSlot *_slot;
}

+ (_Bool)supportsSecureCoding;
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

