//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class NSString, UITextView;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol>
{
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *notes;
- (id)_textView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;

@end

