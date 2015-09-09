//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCoding-Protocol.h>
#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class CALayer, CAValueFunction, NSString;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString *_name;
    CALayer *_layerA;
    CALayer *_layerB;
    struct CGPoint _attachmentPointA;
    struct CGPoint _attachmentPointB;
    CAValueFunction *_function;
    double _stiffness;
    double _damping;
    double _restLength;
    _Bool _enabled;
    id _delegate;
    void *_priv;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)spring;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
@property __weak id delegate;
@property(retain) CAValueFunction *function;
@property double restLength;
@property double damping;
@property double stiffness;
@property struct CGPoint attachmentPointB;
@property struct CGPoint attachmentPointA;
@property(retain) CALayer *layerB;
@property(retain) CALayer *layerA;
@property(getter=isEnabled) _Bool enabled;
@property(copy) NSString *name;
- (id)init;

@end

