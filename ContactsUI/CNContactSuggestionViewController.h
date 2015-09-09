//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class CNPropertyCell, CNPropertySuggestionAction, SGOrigin, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewController : UITableViewController
{
    CNPropertySuggestionAction *_action;
    CNPropertyCell *_propertyCell;
    SGOrigin *_origin;
    UILabel *_fromLabel;
    UILabel *_dateLabel;
    UILabel *_subjectLabel;
    UILabel *_contentLabel;
}

+ (id)viewControllerWithOrigin:(id)arg1;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) SGOrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) CNPropertyCell *propertyCell; // @synthesize propertyCell=_propertyCell;
@property(retain, nonatomic) CNPropertySuggestionAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)showSource:(id)arg1;
- (void)ignore:(id)arg1;
- (void)addToContact:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updatePreview;
- (void)viewDidLoad;

@end

