//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController
{
    NSArray *_applicationActivities;
    NSArray *_providers;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *activityTypeSaveToCameraRoll;
@property(readonly) NSString *activityTypePrint;
@property(readonly) NSString *activityTypePostToWeibo;
@property(readonly) NSString *activityTypePostToVimeo;
@property(readonly) NSString *activityTypePostToTwitter;
@property(readonly) NSString *activityTypePostToFlickr;
@property(readonly) NSString *activityTypePostToFacebook;
@property(readonly) NSString *activityTypeMessage;
@property(readonly) NSString *activityTypeMail;
@property(readonly) NSString *activityTypeCopyToPasteboard;
@property(readonly) NSString *activityTypeAssignToContact;
@property(readonly) NSString *activityTypeAddToReadingList;
@property(copy) id excludedActivityTypes;
- (id)_className;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (id)newNativeViewController;
- (void)dealloc;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;

@end

