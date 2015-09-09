//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBBulletin;

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding>
{
    BBBulletin *_bulletin;
    unsigned long long _transactionID;
    long long _updateType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;

@end

