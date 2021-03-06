//
//  TestAppDocViewController.h
//  WordPressSyncer
//
//  Created by Andrew Williams on 25/02/11.
//  Copyright 2013 NextFaze. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MOWordPressSyncerPost.h"


@interface TestAppDocViewController : UIViewController

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) IBOutlet UILabel *labelContent;

- (id)initWithPost:(MOWordPressSyncerPost *)post;

@end
