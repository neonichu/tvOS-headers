//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/PRSTriggerTask-Protocol.h>

@interface PRSFTETask : NSObject <PRSTriggerTask>
{
    CDUnknownBlockType _reply;
}

@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (_Bool)allowLocation;
- (void)triggerQuery:(_Bool)arg1;
- (id)initWithReply:(CDUnknownBlockType)arg1;

@end

