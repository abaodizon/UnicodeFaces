#import <CepheiPrefs/HBListItemsController.h>
#import <Preferences/PSSpecifier.h>

extern NSString* PSDeletionActionKey;

@interface PSEditableListController : HBListItemsController
-(void)editDoneTapped;
-(void)reload;
-(void)reloadSpecifiers;
@end

@interface UFReorderListController : PSEditableListController {
	NSMutableArray* _unicodeFaces;
	BOOL _isEditingMode;
}
@property (retain, nonatomic) NSMutableArray* unicodeFaces;
@end