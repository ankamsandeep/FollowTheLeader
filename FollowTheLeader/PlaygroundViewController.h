//
//  PlaygroundViewController.h
//  FollowTheLeader
//
//  Created by Sandeep Ankam on 9/12/15.
//  Copyright (c) 2015 Sandeep Ankam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlaygroundViewController : UIViewController

@property (strong, nonatomic) NSNumber* followersCount;
@property (weak, nonatomic) IBOutlet UIView *leaderView;

- (IBAction)editButtonPressed:(id)sender;

@end
