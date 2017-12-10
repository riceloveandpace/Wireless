//
//  SortResultsViewController.m
//  URMA
//
//  Created by qvantel on 11/7/14.
//  Copyright (c) 2014 ThingMagic. All rights reserved.
//

#import "SortResultsViewController.h"

#define SORTBY  @"SORTBY"
#define SORTORDER @"SORTORDER"
#define  SORTBYINDEX @"SORTBYINDEX"

@interface SortResultsViewController ()

@property(nonatomic,strong) NSIndexPath *checkedIndexPathSection0;
@property(nonatomic,strong) NSIndexPath *checkedIndexPathSection1;
@property(nonatomic,strong) NSString *selSortBy;
@property(nonatomic,strong) NSString *selSortOrder;
@property(nonatomic,strong) NSNumber *selSortByIndex;

@end

@implementation SortResultsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.sortInfoTableView.dataSource = self;
    self.sortInfoTableView.delegate = self;
    
    self.sortByArray = @[@"#",@"EPC",@"Time Stamp",@"RSSI",@"Read Count",@"Antenna",@"Frequency",@"Protocol",@"Phase"];
    
    self.sortOrderArray = @[@"Ascending",@"Descending"];
    
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
    NSString *savedSortByString = [standardUserDefaults objectForKey:SORTBY];
    NSString *savedSortOrderString = [standardUserDefaults objectForKey:SORTORDER];
    NSString *savedSortByIndexString = [standardUserDefaults objectForKey:SORTBYINDEX];

    
    if([savedSortByString length] > 0 )
    {
        int indexSortBy = [savedSortByIndexString intValue];
        self.checkedIndexPathSection0 = [NSIndexPath indexPathForRow:indexSortBy inSection:0];
    }
    else
    {
        self.checkedIndexPathSection0 = [NSIndexPath indexPathForRow:0 inSection:0];
    }
    
    if([savedSortOrderString length] > 0)
    {
        int indexSortOrder= [self.sortOrderArray indexOfObject:savedSortOrderString];
        self.checkedIndexPathSection1 = [NSIndexPath indexPathForRow:indexSortOrder inSection:1];
    }
    else
    {
        self.checkedIndexPathSection1 = [NSIndexPath indexPathForRow:0 inSection:1];
    }

}


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;    //count of section
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    
    if(section == 0)
        return [self.sortByArray count];
    else
        return [self.sortOrderArray count];
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
{
    if(section == 0)
        return @"SORT BY";
    else
        return @"SORT ORDER";
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{

    static NSString *MyIdentifier = @"MyIdentifier";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:MyIdentifier];
    
    if (cell == nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                       reuseIdentifier:MyIdentifier];
    }
    

    if(indexPath.section == 0)
    {
        cell.textLabel.text = [self.sortByArray objectAtIndex:indexPath.row];
        
        if([self.checkedIndexPathSection0 isEqual:indexPath])
        {
            cell.accessoryType = UITableViewCellAccessoryCheckmark;
        }
        else
        {
            cell.accessoryType = UITableViewCellAccessoryNone;
        }
    }
    else
    {
         cell.textLabel.text = [self.sortOrderArray objectAtIndex:indexPath.row];
        
        if([self.checkedIndexPathSection1 isEqual:indexPath])
        {
            cell.accessoryType = UITableViewCellAccessoryCheckmark;
        }
        else
        {
            cell.accessoryType = UITableViewCellAccessoryNone;
        }
    }
    
    return cell;
}



 - (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
 {
     
     if(indexPath.section == 0)
     {
 
         if(self.checkedIndexPathSection0)
         {
             UITableViewCell* uncheckCell = [tableView
                                             cellForRowAtIndexPath:self.checkedIndexPathSection0];
             uncheckCell.accessoryType = UITableViewCellAccessoryNone;
         }
         if([self.checkedIndexPathSection0 isEqual:indexPath])
         {
             self.checkedIndexPathSection0 = nil;
         }
         else
         {
             UITableViewCell* cell = [tableView cellForRowAtIndexPath:indexPath];
             cell.accessoryType = UITableViewCellAccessoryCheckmark;
             self.checkedIndexPathSection0 = indexPath;
             self.selSortBy = [self.sortByArray objectAtIndex:indexPath.row];
             self.selSortByIndex = [NSNumber numberWithInteger:indexPath.row];

         }
     }
     else
     {
         if(self.checkedIndexPathSection1)
         {
             UITableViewCell* uncheckCell = [tableView
                                             cellForRowAtIndexPath:self.checkedIndexPathSection1];
             uncheckCell.accessoryType = UITableViewCellAccessoryNone;
         }
         if([self.checkedIndexPathSection1 isEqual:indexPath])
         {
             self.checkedIndexPathSection1 = nil;
         }
         else
         {
             UITableViewCell* cell = [tableView cellForRowAtIndexPath:indexPath];
             cell.accessoryType = UITableViewCellAccessoryCheckmark;
             self.checkedIndexPathSection1 = indexPath;
             self.selSortOrder = [self.sortOrderArray objectAtIndex:indexPath.row];

         }
     }
     
     [tableView deselectRowAtIndexPath:indexPath animated:YES];

}

-(IBAction)applyButton:(UIButton *)sender
{
    NSUserDefaults *standardUserDefaults = [NSUserDefaults standardUserDefaults];
   
    
    if (standardUserDefaults) {
        
        [standardUserDefaults setObject:[self getObjectString:self.selSortBy] forKey:SORTBY]; // TODO
        [standardUserDefaults setObject:self.selSortByIndex forKey:SORTBYINDEX];
        [standardUserDefaults setObject:self.selSortOrder forKey:SORTORDER];

        [standardUserDefaults synchronize];
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"SortTableView"  object:self];
        
    }
}

-(NSString *)getObjectString:(NSString *)selString
{
    
    
    int indexSortOrder= [self.selSortByIndex intValue];
    NSString *reqString;
    
    /*
     NSString *epclblTxt;
     NSInteger epcTagCount;
     NSString *epcServiceName;
     NSInteger antenna;
     NSString *protocol;
     NSString *phase;
     NSString *frequency;
     NSInteger rssi;
     NSString *timestampHigh;
     */
    
    switch (indexSortOrder) {
      
        case 0:
            reqString= @"epclblTxt";
            break;
        case 1:
            reqString= @"epclblTxt";
            break;
        case 2:
            reqString= @"timestampHigh";
            break;
        case 3:
            reqString= @"rssi";
            break;
        case 4:
            reqString= @"epcTagCount";
            break;
        case 5:
            reqString= @"antenna";
            break;
        case 6:
            reqString= @"frequency";
            break;
        case 7:
            reqString= @"protocol";
            break;
        case 8:
            reqString= @"phase";
            break;
            
        default:
            reqString= @"epclblTxt";
            break;
    }
    
    return  reqString;

}

-(IBAction)cancelButton:(UIButton *)sender
{
    [self dismissViewControllerAnimated:NO completion:nil];
}
 

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




@end
