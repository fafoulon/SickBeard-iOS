//
//  SBShowDetailsViewController.h
//  SickBeard
//
//  Created by Colin Humber on 8/30/11.
//  Copyright (c) 2011 Colin Humber. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBBaseTableViewController.h"
#import "SBEpisodeDetailsViewController.h"

@class SBShow;
@class SBShowDetailsHeaderView;
@class OrderedDictionary;

@interface SBShowDetailsViewController : SBBaseTableViewController <SBEpisodeDetailsDataSource>

@property (nonatomic, strong) SBShow *show;
@property (nonatomic, strong) IBOutlet SBShowDetailsHeaderView *detailsHeaderView;

@end


