//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MessageConsumer-Protocol.h>
#import <Message/QueryProgressMonitor-Protocol.h>

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    CDUnknownBlockType _transmogrifier;
}

@property(copy, nonatomic) CDUnknownBlockType transmogrifier; // @synthesize transmogrifier=_transmogrifier;
- (_Bool)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;
- (id)messages;
- (void)dealloc;
- (id)init;

@end

