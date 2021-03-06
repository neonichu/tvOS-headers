//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCalendar, ScriptAgent;

@interface ScriptAgentUtility : NSObject
{
    NSCalendar *_defaultCalendar;
    ScriptAgent *_scriptAgent;
}

+ (id)sharedInstance;
@property(retain) ScriptAgent *scriptAgent; // @synthesize scriptAgent=_scriptAgent;
@property(retain) NSCalendar *defaultCalendar; // @synthesize defaultCalendar=_defaultCalendar;
- (id)generateScreenShotPath;
- (id)scriptAgentInstance;
- (void)createScriptAgentWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

