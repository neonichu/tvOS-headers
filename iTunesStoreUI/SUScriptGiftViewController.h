//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController
{
    long long _giftCategory;
    SKUIItem *_item;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly, nonatomic) long long giftCategoryMedia;
@property(readonly, nonatomic) long long giftCategoryBooks;
@property(readonly, nonatomic) long long giftCategoryApps;
- (id)_className;
- (void)setProductGiftItem:(id)arg1;
- (void)setCreditGiftStyle:(long long)arg1;
- (id)newNativeViewController;

@end

