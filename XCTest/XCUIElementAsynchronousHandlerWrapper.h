//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface XCUIElementAsynchronousHandlerWrapper : NSObject
{
    CDUnknownBlockType _handler;
    NSString *_handlerDescription;
    NSUUID *_identifier;
}

@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *handlerDescription; // @synthesize handlerDescription=_handlerDescription;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)dealloc;

@end

