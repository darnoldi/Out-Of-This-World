//
//  DASpaceImageViewController.h
//  Out Of This World
//
//  Created by Dave Arnoldi on 2014/09/08.
//  Copyright (c) 2014 Dave Arnoldi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DASpaceImageViewController : UIViewController <UIScrollViewDelegate>


@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic)  UIImageView *imageView;


@end
