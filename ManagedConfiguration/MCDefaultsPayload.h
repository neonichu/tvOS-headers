//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload
{
    NSDictionary *_defaultsByDomain;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)title;
- (id)defaultsForDomain:(id)arg1;
- (id)domains;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (_Bool)isAllowedToWriteDefaults;

@end

