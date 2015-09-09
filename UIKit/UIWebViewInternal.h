//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLRequest, UICheckeredPatternView, UIScrollView, UIWebBrowserView, UIWebPDFViewHandler, UIWebViewWebViewDelegate;
@protocol UIWebViewDelegate;

__attribute__((visibility("hidden")))
@interface UIWebViewInternal : NSObject
{
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    id <UIWebViewDelegate> delegate;
    unsigned int scalesPageToFit:1;
    unsigned int isLoading:1;
    unsigned int hasOverriddenOrientationChangeEventHandling:1;
    unsigned int drawsCheckeredPattern:1;
    unsigned int webSelectionEnabled:1;
    unsigned int drawInWebThread:1;
    unsigned int inRotation:1;
    unsigned int didRotateEnclosingScrollView:1;
    NSURLRequest *request;
    long long clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
    UIWebPDFViewHandler *pdfHandler;
}

@end

