//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView
{
}

+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentDetailPage;
@property(copy, nonatomic) NSString *utsId;
@property(nonatomic) _Bool userDriven;
@property(copy, nonatomic) NSString *showId;
@property(copy, nonatomic) NSString *seasonId;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

