//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

@interface SKUIShareTemplateActivityViewController : UIActivityViewController
{
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)_applicationActivitiesWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)_activityItemsWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end

