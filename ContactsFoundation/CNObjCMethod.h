//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNObjCMethod : NSObject
{
    NSString *_name;
    CDUnknownFunctionPointerType _implementation;
    NSString *_typeEncoding;
}

+ (id)methodWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;
@property(readonly, copy) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly) CDUnknownFunctionPointerType implementation; // @synthesize implementation=_implementation;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)performOnObject:(id)arg1;
- (id)methodBySettingName:(id)arg1;
@property(readonly) SEL selector;
- (void)dealloc;
- (id)initWithName:(id)arg1 implementation:(CDUnknownFunctionPointerType)arg2 typeEncoding:(id)arg3;
- (id)initWithMethod:(struct objc_method *)arg1;

@end

