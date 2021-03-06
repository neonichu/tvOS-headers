//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct HDSQLiteRow {
    struct sqlite3_stmt *_field1;
    int _field2;
    int _field3;
    struct unordered_map<const char *, int, HDSQLiteRow::_Hash, HDSQLiteRow::_Comparison, std::__1::allocator<std::__1::pair<const char *const, int>>> _field4;
};

struct HDSyncAnchorRange {
    long long _field1;
    long long _field2;
};

struct __hash_node<sqlite3_stmt *, void *>;

struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *>;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats>>> {
    struct __tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats>>> {
        struct __tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double>>> {
    struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double>>> {
        struct __tree_node<std::__1::__value_type<long long, double>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct sqlite3_stmt;

struct unique_ptr<std::__1::__hash_node<sqlite3_stmt *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<sqlite3_stmt *, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>*>>> {
        struct __hash_node<sqlite3_stmt *, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<const char *, int, HDSQLiteRow::_Hash, HDSQLiteRow::_Comparison, std::__1::allocator<std::__1::pair<const char *const, int>>> {
    struct __hash_table<std::__1::__hash_value_type<const char *, int>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
    struct __hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
        struct unique_ptr<std::__1::__hash_node<sqlite3_stmt *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> {
                struct __hash_node<sqlite3_stmt *, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<sqlite3_stmt *>> {
            float __first_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    double avg;
    double max;
    double min;
    unsigned long long count;
} CDStruct_23c51cd0;

typedef struct {
    double _field1;
    double _field2;
    long long _field3;
    long long _field4;
    double _field5;
} CDStruct_dd92d3d0;

// Ambiguous groups
typedef struct {
    unsigned int creationDate:1;
} CDStruct_dc48a425;

