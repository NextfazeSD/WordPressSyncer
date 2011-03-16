//
//  WordPressSyncerFetch.h
//  WordPressSyncer
//
//  Created by Andrew Williams on 25/02/11.
//  Copyright 2011 2moro mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WordPressSyncerFetchDelegate;

@interface WordPressSyncerFetch : NSObject {
	NSError *error;
	NSMutableData *data;
	NSURL *url;
	NSURLConnection *conn;
	NSString *username, *password;
    int code;
    
	id<WordPressSyncerFetchDelegate> delegate;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, assign) id<WordPressSyncerFetchDelegate> delegate;
@property (nonatomic, retain) NSString *username, *password;
@property (nonatomic, readonly) int code;

- (id)initWithURL:(NSURL *)u;
- (id)initWithURL:(NSURL *)u delegate:(id<WordPressSyncerFetchDelegate>)d;

- (void)fetch;
- (NSData *)data;
- (NSString *)string;
- (NSDictionary *)dictionaryFromXML;

@end

@protocol WordPressSyncerFetchDelegate

- (void)wordPressSyncerFetchCompleted:(WordPressSyncerFetch *)fetcher;

@end