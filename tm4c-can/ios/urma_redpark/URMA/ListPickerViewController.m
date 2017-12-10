//
//  ListPickerViewController.m
//  urma
//
//  Created by Raju on 06/08/14.
//  Copyright (c) 2014 Trimble Inc. All rights reserved.
//

#import "ListPickerViewController.h"
#include <arpa/inet.h>
#import "Global.h"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

@implementation UIPopoverController (iPhone)
+ (BOOL)_popoversDisabled {
    return NO;
}
@end

@interface ListPickerViewController ()
@end

NSString *selectedValue = @"";

@implementation ListPickerViewController
@synthesize pickerView,dataArray,listType;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    // Init the data array.
    self.dataArray = [[NSMutableArray alloc] init];
    
    // Init the data array.
    dataArray = [[NSMutableArray alloc] init];
    if ([listType isEqualToString:@"BaudRate"]) {
        
        //Add RegionValues to local array for showing list view...
        [dataArray addObjectsFromArray:[settingInfoDictionary objectForKey:@"BaudRate"]];
        
    }
    else if ([listType isEqualToString:@"Region"]){
        
        //Add RegionValues to local array for showing pickerviewlist view...
        
        NSArray *tempArry = [NSArray arrayWithArray:[settingInfoDictionary objectForKey:@"Region"]];
        for (int i=0; i<[tempArry count]; i++) {
            
            if ([[tempArry objectAtIndex:i] intValue] == 0) {
                [dataArray addObject:@"NONE"];
            }else if([[tempArry objectAtIndex:i] intValue] == 1){
                [dataArray addObject:@"NA"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 2){
                [dataArray addObject:@"EU"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 3){
                [dataArray addObject:@"KR"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 4){
                [dataArray addObject:@"IN"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 5){
                [dataArray addObject:@"JP"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 6){
                [dataArray addObject:@"PRC"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 7){
                [dataArray addObject:@"EU2"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 8){
                [dataArray addObject:@"EU3"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 9){
                [dataArray addObject:@"KR2"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 10){
                [dataArray addObject:@"PRC2"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 11){
                [dataArray addObject:@"AU"];
            }
            else if([[tempArry objectAtIndex:i] intValue] == 12){
                [dataArray addObject:@"NZ"];
            }
        }
    }
    
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton *donnBtn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [donnBtn addTarget:self
                action:@selector(done:)
      forControlEvents:UIControlEventTouchUpInside];
    [donnBtn setTitle:@"Done" forState:UIControlStateNormal];
    donnBtn.frame = CGRectMake(245.0, 0.0, 40.0, 40.0);
    [self.view addSubview:donnBtn];
    
    // Init the picker view.
    pickerView = [[UIPickerView alloc] init];
    pickerView.frame = CGRectMake(0, 35, 300, 160);
    [pickerView setDataSource: self];
    [pickerView setDelegate: self];
    pickerView.showsSelectionIndicator = YES;
    pickerView.backgroundColor = [UIColor whiteColor];
    [self.view addSubview: pickerView];
}


- (IBAction)done:(id)sender{
    
    //[self.delegate picSelectedValue:@"123"];
    [self.delegate picSelectedValue:selectedValue];
}


// Number of components.
-(NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView{
    return 1;
}

// Total rows in our component.
-(NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component{
    return [dataArray count];
}

// Display each row's data.
-(NSString *)pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component{
    return [dataArray objectAtIndex: row];
}

- (UIView *)pickerView:(UIPickerView *)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView *)view {
    
    // view.backgroundColor = [UIColor redColor];
    
    UILabel *pickerLabel = (UILabel *)view;
    if (pickerLabel == nil) {
        CGRect frame;
        if (IS_IPAD) {
            frame = CGRectMake(0.0, 0.0, 300, 30);
        } else {
            frame = CGRectMake(0.0, 0.0, 300, 25);
        }
        pickerLabel = [[UILabel alloc] initWithFrame:frame];
        [pickerLabel setTextAlignment:NSTextAlignmentCenter];
        [pickerLabel setBackgroundColor:[UIColor clearColor]];
        pickerLabel.font = [UIFont boldSystemFontOfSize:16.0];
    }
    //picker view array is the datasource
    [pickerLabel setText:[dataArray objectAtIndex:row]];
    selectedValue = [[dataArray objectAtIndex: 0] copy];
    return pickerLabel;
}

-(CGFloat)pickerView:(UIPickerView *)pickerView rowHeightForComponent:(NSInteger)component{
    
    if (IS_IPAD) {
        return 30;
    } else {
        return 25;
    }
}


// Do something with the selected row.
-(void)pickerView:(UIPickerView *)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component{
    NSLog(@"You selected this: %@", [dataArray objectAtIndex: row]);
    
    selectedValue = [[dataArray objectAtIndex: row] copy];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
