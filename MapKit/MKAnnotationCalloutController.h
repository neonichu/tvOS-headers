//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKAnnotationView;
@protocol MKAnnotationCalloutControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationCalloutController : NSObject
{
    id <MKAnnotationCalloutControllerDelegate> _delegate;
    MKAnnotationView *_annotationView;
    CDStruct_f0cfbbbb _mapDisplayStyle;
}

@property(nonatomic) CDStruct_f0cfbbbb mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic) __weak id <MKAnnotationCalloutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideCalloutAnimated:(_Bool)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(_Bool)arg2 scrollToFit:(_Bool)arg3 avoid:(struct CGRect)arg4;
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;
- (void)_updateCalloutAnimated:(_Bool)arg1;
- (void)_removeAccessoryTargets;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_setDetailAccessoryView:(id)arg1 animated:(_Bool)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(_Bool)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(_Bool)arg2;
- (void)_setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (id)_subtitle;
- (void)_setTitle:(id)arg1;
- (_Bool)_isShowingCallout;
- (void)_updateCallout;
- (double)defaultCalloutHeight;
- (_Bool)isCalloutExpanded;
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;
- (void)dealloc;

@end

