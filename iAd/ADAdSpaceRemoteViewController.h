//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol ADAdSpaceRemoteViewControllerDelegate;

@interface ADAdSpaceRemoteViewController : _UIRemoteViewController
{
    id <ADAdSpaceRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (void)adSpaceRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
@property(nonatomic) __weak id <ADAdSpaceRemoteViewControllerDelegate> delegate;
- (void)dealloc;

@end

