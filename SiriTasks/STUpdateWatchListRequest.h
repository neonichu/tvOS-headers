//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest
{
    NSArray *_contentIdentifiersToAdd;
    NSArray *_contentIdentifiersToRemove;
}

+ (_Bool)supportsSecureCoding;
- (void)_setContentIdentifiersToRemove:(id)arg1;
@property(copy, nonatomic) NSArray *contentIdentifiersToRemove; // @synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove;
- (void)_setContentIdentifiersToAdd:(id)arg1;
@property(copy, nonatomic) NSArray *contentIdentifiersToAdd; // @synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

