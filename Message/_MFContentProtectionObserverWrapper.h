//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFWeakReferenceHolder;
@protocol MFContentProtectionObserver, OS_dispatch_queue;

@interface _MFContentProtectionObserverWrapper : NSObject
{
    MFWeakReferenceHolder *_observerReference;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)dealloc;
@property(readonly, nonatomic) id <MFContentProtectionObserver> observer;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end

