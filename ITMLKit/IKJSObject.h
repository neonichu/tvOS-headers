//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject
{
    IKAppContext *_appContext;
    NSMutableDictionary *_managedProperties;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *managedProperties; // @synthesize managedProperties=_managedProperties;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)jsValueForProperty:(id)arg1;
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (id)init;

@end

