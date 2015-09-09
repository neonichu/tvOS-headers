//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIPopoverController, WKContentView;
@protocol WKRotatingPopoverDelegate;

__attribute__((visibility("hidden")))
@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate>
{
    WKContentView *_view;
    _Bool _isRotating;
    struct CGPoint _presentationPoint;
    struct RetainPtr<UIPopoverController> _popoverController;
    id <WKRotatingPopoverDelegate> _dismissionDelegate;
}

@property(nonatomic) id <WKRotatingPopoverDelegate> dismissionDelegate; // @synthesize dismissionDelegate=_dismissionDelegate;
@property(nonatomic) struct CGPoint presentationPoint; // @synthesize presentationPoint=_presentationPoint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)presentPopoverAnimated:(_Bool)arg1;
- (unsigned long long)popoverArrowDirections;
@property(retain, nonatomic) UIPopoverController *popoverController;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

