//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand
{
}

+ (id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vendResultsToSearch;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *shelves;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

