//
//  AppDelegate.h
//  SourceTreeTest
//
//  Created by XuYoujin on 2024/4/7.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

