//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject
{
    _Bool _optional;
    NSString *_name;
    NSString *_prefix;
    struct _NSRange _range;
}

@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

