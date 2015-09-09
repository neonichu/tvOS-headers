//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    UIColor *_backdropColor;
    long long _backdropStyle;
    _Bool _hidesBackdropView;
    double _transitionProgress;
    NSString *_backdropGroupName;
}

@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) _Bool hidesBackdropView; // @synthesize hidesBackdropView=_hidesBackdropView;
@property(nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property(retain, nonatomic) UIColor *backdropColor; // @synthesize backdropColor=_backdropColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

