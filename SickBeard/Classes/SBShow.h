//
//  SBShow.h
//  SickBeard
//
//  Created by Colin Humber on 8/30/11.
//  Copyright (c) 2011 Colin Humber. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DictionaryCreation.h"

typedef enum {
	ShowQualityUnknown,
	ShowQualityCustom,
	ShowQualityHD,
	ShowQualitySD
} ShowQuality;

typedef enum {
	ShowStatusUnknown = -1,
	ShowStatusContinuing = 0,
	ShowStatusEnded = 2
} ShowStatus;

@interface SBShow : NSObject <DictionaryCreation>

@property (nonatomic, strong) NSString *tvdbID;
@property (nonatomic, strong) NSString *tvRageID;
@property (nonatomic) BOOL airByDate;
@property (nonatomic) BOOL hasBannerCached;
@property (nonatomic) BOOL hasPosterCached;
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) ShowQuality quality;
@property (nonatomic, strong) NSString *showName;
@property (nonatomic, strong) NSString *network;
@property (nonatomic) ShowStatus status;
@property (nonatomic, strong) NSDate *nextEpisodeDate;
@property (readonly, strong) NSString *sanitizedShowName;

+ (NSString*)showStatusAsString:(ShowStatus)status;
+ (NSString*)showQualityAsString:(ShowQuality)quality;

@end
