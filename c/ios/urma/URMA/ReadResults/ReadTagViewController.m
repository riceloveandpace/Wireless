//
//  ReadTagViewController.m
//  URMA
//
//  Created by qvantel on 11/20/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "ReadTagViewController.h"
#import "ReadResultsViewController.h"
#import "ReadDeviceTableViewCell.h"

@interface ReadTagViewController ()
@property(nonatomic,strong) NSMutableArray * tagDataArray;
@property(nonatomic,strong) NSMutableArray * tagDataImageArray;

@end

@implementation ReadTagViewController
@synthesize detailViewController,TableCellIndex;
@synthesize TMR_Reader_data, recEPCString;
@synthesize r,rp;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    _tagDataArray = [NSMutableArray array];
    [_tagDataArray addObject:@"Inspect Tag"];
    [_tagDataArray addObject:@"Lock Tag"];
    [_tagDataArray addObject:@"User Memory"];
    
    _tagDataImageArray = [NSMutableArray array];
    [_tagDataImageArray addObject:@"Inspect_icon"];
    [_tagDataImageArray addObject:@"lock_icon"];
    [_tagDataImageArray addObject:@"memory_icon"];
    
    NSLog(@"Received EPC String at ReadTagView Tag -- %@", recEPCString);
    
     self.inspectTagViewController = (InspectTagViewController *)[self.storyboard instantiateViewControllerWithIdentifier:@"InspectTagViewController"];
    self.inspectTagViewController.recEPCString = recEPCString;
    self.inspectTagViewController.r = r;
    self.inspectTagViewController.rp = rp;
    
    self.lockTagViewController =[self.storyboard instantiateViewControllerWithIdentifier:@"LockTagViewController"];
    self.lockTagViewController.recEPCString = recEPCString;
    self.lockTagViewController.r = r;
    self.lockTagViewController.rp = rp;
    
    self.userMemoryViewController =[self.storyboard instantiateViewControllerWithIdentifier:@"UserMemoryViewController"];
    self.userMemoryViewController.recEPCString = recEPCString;
    self.userMemoryViewController.r = r;
    self.userMemoryViewController.rp = rp;
    
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:TableCellIndex inSection:0];
    [_readTagTableView selectRowAtIndexPath:indexPath animated:NO scrollPosition:UITableViewScrollPositionNone];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;    //count of section
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
     return [_tagDataArray count];
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
//    static NSString *MyIdentifier = @"Cell";
//    UITableViewCell  *cell = nil;//[table_View dequeueReusableCellWithIdentifier:MyIdentifier];
//    
//    if (cell == nil){
//        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
//                                              reuseIdentifier:MyIdentifier];
//    }
    
    
    static NSString *MyIdentifier = @"Cell";
    ReadDeviceTableViewCell *cell;
    cell = [tableView dequeueReusableCellWithIdentifier:MyIdentifier];
    
    if (cell == nil){
        cell = [[ReadDeviceTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                              reuseIdentifier:MyIdentifier];
    }
    
    cell.ttlLbl.text = [_tagDataArray objectAtIndex:indexPath.row];
    cell.ttlLbl.textColor = [UIColor darkGrayColor];
    
    cell.deviceTypeimgView.image = [UIImage imageNamed:[_tagDataImageArray objectAtIndex:indexPath.row]];
    
//    cell.textLabel.text = [_tagDataArray objectAtIndex:indexPath.row];
//    cell.textLabel.textColor = [UIColor darkGrayColor];
    

    
    
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    //Selected cell background color
    ReadDeviceTableViewCell *cell = (ReadDeviceTableViewCell *)[tableView cellForRowAtIndexPath:indexPath];
    //cell.textLabel.textColor = [UIColor darkGrayColor];
     cell.ttlLbl.textColor = [UIColor darkGrayColor];
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    ReadDeviceTableViewCell *cell1 = (ReadDeviceTableViewCell *)[tableView cellForRowAtIndexPath:indexPath];

    UIView *selectionBackground = [[UIView alloc] init];
    selectionBackground.backgroundColor = [UIColor colorWithRed:0.0/255 green:130.0/255.0 blue:255.0/255.0 alpha:1];
    cell1.selectedBackgroundView = selectionBackground;
    cell1.ttlLbl.textColor = [UIColor whiteColor];
    
    UIViewController *selViewController;
    
    switch (indexPath.row) {
        case 0:
        {
            selViewController = (InspectTagViewController * )self.inspectTagViewController;
        }
            break;
        case 1:
        {
            selViewController = (LockTagViewController *)self.lockTagViewController;
        }
            break;
        case 2:
        {
            selViewController = (UserMemoryViewController *)self.userMemoryViewController;
            
        }
            break;
            
        default:
            break;
    }
    
    self.splitViewController.viewControllers = [NSArray arrayWithObjects:[[[self splitViewController] viewControllers] objectAtIndex:0],selViewController, nil];
}


-(IBAction)backButton:(id)sender
{
    NSLog(@"**** Back to Read results view");
    
    TMR_Status  ret;
    
    ret = TMR_RP_init_simple(&rp->readParams.defaultReadPlan, 0, NULL,TMR_TAG_PROTOCOL_GEN2, 1);
    if (TMR_SUCCESS != ret)
    {
        NSLog(@"*** ERROR:BackButton :%s", TMR_strerr(rp, ret));
    }
    
    [[self.splitViewController.view superview] removeFromSuperview];

}

@end
