//
//  MasterViewController.h
//  prospect
//
//  Created by Russ Benhardt on 7/25/13.
//  Copyright (c) 2013 Etherios, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
