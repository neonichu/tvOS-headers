//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject
{
    NSMutableDictionary *_results;
}

- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;
- (id)xpcDictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (id)initWithXPCDictionaryRepresentation:(id)arg1;
- (id)init;

@end

