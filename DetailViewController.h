//
//  DetailViewController.h
//  prospect
//
//  Created by Russ Benhardt on 7/25/13.
//  Copyright (c) 2013 Etherios, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
