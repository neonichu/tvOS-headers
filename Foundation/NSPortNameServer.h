//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSPortNameServer : NSObject
{
}

+ (id)defaultPortNameServer;
+ (id)systemDefaultPortNameServer;
- (id)portForName:(id)arg1 onHost:(id)arg2;
- (_Bool)registerPort:(id)arg1 forName:(id)arg2;
- (_Bool)removePortForName:(id)arg1;
- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1;

@end

