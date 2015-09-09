//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISlideshowViewControllerDataSource-Protocol.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;
@protocol SKUIViewElementSlideshowDelegate;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>
{
    id <SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property(retain, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) __weak id <SKUIViewElementSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize *)arg3;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)presentFromParentViewController:(id)arg1;
@property(readonly, nonatomic) long long numberOfSlideshowItems;
- (void)dealloc;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

