//
//  DetailViewController.h
//  MicroUnlockServer
//
//  Created by Aurel Alin Filip on 28/11/2012.
//  Copyright (c) 2012 Aurel Alin Filip. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
