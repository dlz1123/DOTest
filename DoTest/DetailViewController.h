//
//  DetailViewController.h
//  DoTest
//
//  Created by 杜立召 on 15/10/28.
//  Copyright © 2015年 rongcloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

