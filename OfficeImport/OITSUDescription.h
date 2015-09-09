//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OITSUDescription : NSObject
{
    NSObject *_object;
    Class _class;
    void *_cfType;
    NSString *_header;
    NSMutableDictionary *_fields;
    NSMutableArray *_fieldOrder;
    unsigned long long _fieldNameWidth;
    _Bool _commaSeparated;
}

+ (id)descriptionWithObject:(id)arg1;
+ (id)descriptionWithCFType:(void *)arg1 format:(id)arg2;
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2;
+ (id)descriptionWithObject:(id)arg1 format:(id)arg2;
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;
- (id)descriptionString;
- (void)setFieldOptionCommaSeparated;
- (void)addSuperDescription;
- (void)addFieldValue:(id)arg1;
- (void)addFieldWithFormat:(id)arg1;
- (void)addField:(id)arg1 format:(id)arg2;
- (void)addField:(id)arg1 value:(id)arg2;
- (id)p_header;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 format:(id)arg2;
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
- (id)initWithCFType:(void *)arg1 header:(id)arg2;
- (id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3;

@end

