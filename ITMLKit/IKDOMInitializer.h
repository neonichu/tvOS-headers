//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKDOMInitializer : NSObject
{
    NSMutableDictionary *_nodeDeregisterObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *nodeDeregisterObservers; // @synthesize nodeDeregisterObservers=_nodeDeregisterObservers;
- (void).cxx_destruct;
- (void)removeNodeDeregisterObserverWithName:(id)arg1;
- (void)addNodeDeregisterObserverWithName:(id)arg1 observer:(CDUnknownBlockType)arg2;
- (id)init;

@end

