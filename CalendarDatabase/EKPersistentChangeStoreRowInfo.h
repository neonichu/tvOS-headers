//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject
{
    int _consumedSequenceNumber;
    NSString *_clientIdentifier;
}

@property(nonatomic) int consumedSequenceNumber; // @synthesize consumedSequenceNumber=_consumedSequenceNumber;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)dealloc;
- (id)description;

@end

