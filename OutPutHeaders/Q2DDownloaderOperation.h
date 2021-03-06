/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Q2DOperation.h"

@class NSMutableData, NSString, NSURLConnection, NSURLRequest;

__attribute__((visibility("hidden")))
@interface Q2DDownloaderOperation : XXUnknownSuperclass <Q2DOperation> {
	BOOL _executing;
	BOOL _finished;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _receivedData;
	id _completedBlock;
	id _cancelledBlock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id cancelledBlock;
@property(copy, nonatomic) id completedBlock;
@property(retain, nonatomic) NSMutableData* receivedData;
@property(retain, nonatomic) NSURLConnection* connection;
@property(assign, nonatomic, getter=isFinished) BOOL finished;
@property(assign, nonatomic, getter=isExecuting) BOOL executing;
@property(retain, nonatomic) NSURLRequest* request;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithRequest:(id)request completed:(id)completed cancelled:(id)cancelled;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)start;
-(void)reset;
-(void)done;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
@end

