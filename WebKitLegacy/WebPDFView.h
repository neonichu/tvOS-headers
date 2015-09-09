//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebPDFDocumentRepresentation-Protocol.h>
#import <WebKitLegacy/WebPDFDocumentView-Protocol.h>

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    _Bool dataSourceHasBeenSet;
    struct CGPDFDocument *_PDFDocument;
    NSString *_title;
    struct CGRect *_pageRects;
}

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (struct CGColor *)backgroundColor;
+ (struct CGColor *)shadowColor;
+ (id)supportedMIMETypes;
- (struct CGRect)rectForPageNumber:(unsigned int)arg1;
- (struct CGPDFDocument *)doc;
- (unsigned int)totalPages;
- (unsigned int)pageNumberForRect:(struct CGRect)arg1;
- (id)title;
- (id)documentSource;
- (_Bool)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_pagesInRect:(struct CGRect)arg1;
- (void)drawPage:(struct CGPDFPage *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

