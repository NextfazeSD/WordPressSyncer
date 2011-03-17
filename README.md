
WordPressSyncer
=============

WordPressSyncer - syncs WordPress blogs from the server, saving data locally in a core data database.

Synopsis
--------

    WordPressSyncerStore *store = [[WordPressSyncerStore alloc] initWithName:@"Store" delegate:self];
    store.categoryId = @"21";  // optional - restrict to specified category
    store.
    [store fetch];
    
    #pragma mark WordPressSyncerStoreDelegate
    

@optional

    // called whenever some progress has been made.
    - (void)wordPressSyncerStoreProgress:(WordPressSyncerStore *)store;

    // called when all downloads have completed.
    - (void)wordPressSyncerStoreCompleted:(WordPressSyncerStore *)store;

    // called when errors occur. check store.error for the error
    - (void)wordPressSyncerStoreFailed:(WordPressSyncerStore *)store;

posts can be accessed using the following methods of WordPressSyncerStore.

    - (NSArray *)posts;
    - (NSArray *)postsMatching:(NSPredicate *)predicate;

The above methods return arrays of MOWordPressSyncerPost objects.  The dictionary method of MOWordPressSyncerPost can be used to access the 
post contents as an NSDictionary (converted from JSON).

