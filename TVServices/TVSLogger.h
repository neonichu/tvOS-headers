//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TVSLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_componentsQueue;
    _Bool _allComponentsEnabled;
    int _logLevel;
    NSString *_domain;
    NSArray *_persistentComponents;
    NSMutableDictionary *_enabledComponents;
    NSMutableDictionary *_profileTimes;
}

+ (void)initializeLoggingWithDomain:(id)arg1 persistentComponents:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *profileTimes; // @synthesize profileTimes=_profileTimes;
@property(nonatomic) _Bool allComponentsEnabled; // @synthesize allComponentsEnabled=_allComponentsEnabled;
@property(retain, nonatomic) NSMutableDictionary *enabledComponents; // @synthesize enabledComponents=_enabledComponents;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSArray *persistentComponents; // @synthesize persistentComponents=_persistentComponents;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)_logFrom:(void *)arg1 toLog:(id)arg2 asType:(unsigned char)arg3 shouldForce:(_Bool)arg4 atLevel:(int)arg5 toComponent:(id)arg6 withFormat:(id)arg7 andArguments:(struct __va_list_tag [1])arg8;
- (void)_logForComponent:(id)arg1 level:(int)arg2 message:(id)arg3;
- (void)_logForComponent:(id)arg1 level:(int)arg2 format:(id)arg3 list:(struct __va_list_tag [1])arg4;
- (void)reset;
- (_Bool)loggingEnabledForComponent:(id)arg1 atLevel:(int)arg2;
- (void)disableComponent:(id)arg1;
- (void)enableComponent:(id)arg1 withConfiguration:(id)arg2;
- (void)_enableComponent:(id)arg1 withLogHandlers:(id)arg2;
- (void)enableComponent:(id)arg1 withLogHandler:(CDUnknownBlockType)arg2;
- (id)initWithDomain:(id)arg1 persistentComponents:(id)arg2;

@end

