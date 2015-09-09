//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, TVContentIdentifier;

@protocol TVJSContentItem <JSExport>
@property(copy) NSURL *displayURL;
@property(copy) NSURL *playURL;
@property(copy) NSNumber *hasPlayedToEnd;
@property(copy) NSNumber *currentPosition;
@property(copy) NSNumber *duration;
@property(copy) NSDate *creationDate;
@property(copy) NSDate *expirationDate;
@property(copy) NSDate *lastAccessedDate;
@property(copy) NSString *title;
@property int imageShape;
@property(copy) NSURL *imageURL;
@property(readonly, copy) TVContentIdentifier *contentIdentifier;
@end

