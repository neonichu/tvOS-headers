//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSystemServiceFacility;

@interface _FBSystemServiceServerPendingConnection : NSObject
{
    FBSystemServiceFacility *_facility;
    CDUnknownBlockType _completion;
}

+ (id)pendingConnectionToFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FBSystemServiceFacility *facility; // @synthesize facility=_facility;
- (void)dealloc;
- (id)initWithFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

