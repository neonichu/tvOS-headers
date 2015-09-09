//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKAppDocument, NSArray, UIView, UIViewController;

@protocol SKUIDocumentViewController <NSObject>
- (void)documentDidUpdate:(IKAppDocument *)arg1;

@optional
- (void)documentMediaQueriesDidUpdate:(IKAppDocument *)arg1;
- (UIView *)navigationPaletteView;
- (NSArray *)impressionableViewElements;
- (void)delayPresentationIfNeededForParentViewController:(UIViewController *)arg1;
- (NSArray *)leftBarButtonItemsForDocument:(IKAppDocument *)arg1;
- (_Bool)managesNavigationBarContents;
@end

