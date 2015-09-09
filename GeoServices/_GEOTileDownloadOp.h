//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSURLConnectionDelegate-Protocol.h>

@class GEOSimpleTileRequester, NSData, NSMutableData, NSString, NSURL, NSURLConnection;

__attribute__((visibility("hidden")))
@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate>
{
    NSURL *_url;
    _Bool _requireWiFi;
    NSMutableData *_data;
    NSString *_cachedEtag;
    NSData *_cachedData;
    NSURLConnection *_conn;
    NSString *_responseEtag;
    unsigned int _priority;
    struct _GEOTileKey _key;
    _Bool _finished;
    NSString *_editionHeader;
    unsigned int _tileEdition;
    NSString *_userAgent;
    NSData *_auditToken;
    _Bool _useCookies;
    _GEOTileDownloadOp *_baseTile;
    _GEOTileDownloadOp *_localizationTile;
    unsigned long long _contentLength;
    GEOSimpleTileRequester *_delegate;
    _Bool _gotData;
    int _attempts;
    double _startTime;
    double _timeout;
    long long _eTagType;
}

@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *responseEtag; // @synthesize responseEtag=_responseEtag;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSString *cachedEtag; // @synthesize cachedEtag=_cachedEtag;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(nonatomic) GEOSimpleTileRequester *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) _GEOTileDownloadOp *localizationTile; // @synthesize localizationTile=_localizationTile;
@property(retain, nonatomic) _GEOTileDownloadOp *baseTile; // @synthesize baseTile=_baseTile;
@property(nonatomic) _Bool useCookies; // @synthesize useCookies=_useCookies;
@property(retain, nonatomic) NSData *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property(retain, nonatomic) NSString *editionHeader; // @synthesize editionHeader=_editionHeader;
@property(retain, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property struct _GEOTileKey key; // @synthesize key=_key;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long eTagType; // @synthesize eTagType=_eTagType;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (double)elapsed;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

