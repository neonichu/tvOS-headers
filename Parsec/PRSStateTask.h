//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/PRSTriggerTask-Protocol.h>

@class NSString;

@interface PRSStateTask : NSObject <PRSTriggerTask>
{
    CDUnknownBlockType _reply;
    NSString *_localeIdentifier;
    NSString *_userAgent;
}

@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (void)triggerQuery:(_Bool)arg1;
- (_Bool)allowLocation;
- (id)initWithLocaleIdentifier:(id)arg1 userAgent:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end

