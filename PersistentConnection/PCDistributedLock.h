//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PersistentConnection/NSLocking-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PCDistributedLock : NSObject <NSLocking>
{
    NSString *_path;
    int _fd;
}

- (void)unlock;
- (void)lock;
- (_Bool)tryLock;
- (_Bool)_lockBlocking:(_Bool)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

