//
//  Song.h
//  jinzora_play
//
//  Created by albert on 5/3/09.
//  Copyright 2009 Planet Express. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Song : NSObject {
	NSURL *url;
	NSMutableDictionary *info;
	NSString *trackid;
	BOOL needsNotification;
	BOOL alreadyLoaded;
	NSNotificationCenter *notificationCenter;
	NSString *artist;
	NSString *title;
	NSString *origserv;
}

-(id)initWithURL:(NSURL*)trackurl withArtist:(NSString*) art withTitle:(NSString*) tit;
-(NSString *) getAlbumArt;
-(NSString *) getAlbum;
-(NSString *)getArtist;
-(NSString *)getTitle;
-(int)getLength;

extern NSString * const SongLoadedNotification;

@property (retain) NSURL *url;
@property (copy) NSString *artist;
@property (copy) NSString *title;
@property (retain) NSMutableDictionary *info;
@property (copy) NSString *trackid;
@property (copy) NSString *origserv;
@property BOOL needsNotification;
@property BOOL alreadyLoaded;

@end
