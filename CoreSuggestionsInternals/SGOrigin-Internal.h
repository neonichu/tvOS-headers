//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGOrigin.h>

@interface SGOrigin (Internal)
+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;
- (void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingCalendarEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingContactEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingEmailEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromParticipantsOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;
@end

