//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import <SAObjects/SAUITemplateMonogrammable-Protocol.h>

@class NSArray, NSString, SAUIImageResource;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>
{
}

+ (id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)collectionViewCell;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *subtitleText;
@property(nonatomic) _Bool sizeToFitImage;
@property(copy, nonatomic) NSArray *monogramName; // @dynamic monogramName;
@property(retain, nonatomic) SAUIImageResource *image;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

