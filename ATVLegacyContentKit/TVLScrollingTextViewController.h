//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVScrollingTextViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVScrollingTextViewControllerDelegate-Protocol.h>

@class NSString, TVLScrollingTextElement;

@interface TVLScrollingTextViewController : TVScrollingTextViewController <TVScrollingTextViewControllerDelegate, ATVUpdatable>
{
    TVLScrollingTextElement *_textElement;
}

@property(retain, nonatomic) TVLScrollingTextElement *textElement; // @synthesize textElement=_textElement;
- (void).cxx_destruct;
- (void)scrollingTextView:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (void)viewDidLayoutSubviews;
- (id)initWithScrollingTextElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

