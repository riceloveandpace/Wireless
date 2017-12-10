//
//  ListPickerViewController.h
//  urma
//
//  Created by Raju on 06/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ListPickerViewControllerDelegate
-(void) picSelectedValue:(NSString*)string;
@end

@interface UIPopoverController (iPhone)
+ (BOOL)_popoversDisabled;
@end

@interface ListPickerViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>{
    
}

@property (nonatomic, strong) id<ListPickerViewControllerDelegate> delegate;
@property (nonatomic, strong) UIPickerView *pickerView;
@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, strong) NSString *listType;

- (IBAction)done:(id)sender;

@end
