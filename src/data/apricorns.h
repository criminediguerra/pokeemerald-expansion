// Apricorn type lookup table, added to allow adding new apricorns without being forced to rearrange the item constants.
const u16 ApricornTypes[APRICORN_COUNT] =
{
    [APRICORN_RED]    = ITEM_RED_APRICORN,
    [APRICORN_BLUE]   = ITEM_BLUE_APRICORN,
    [APRICORN_YELLOW] = ITEM_YELLOW_APRICORN,
    [APRICORN_GREEN]  = ITEM_GREEN_APRICORN,
    [APRICORN_PINK]   = ITEM_PINK_APRICORN,
    [APRICORN_WHITE]  = ITEM_WHITE_APRICORN,
    [APRICORN_BLACK]  = ITEM_BLACK_APRICORN,
};

struct ApricornTree
{
    u8 isSapling:1;
    u8 apricornType:3; // ensure that there's enough bits for APRICORN_COUNT, default 7 is 3 bits
    // u8 padding:4;
};

const struct ApricornTree gApricornTrees[APRICORN_TREE_COUNT] =
{
    [APRICORN_TREE_NONE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_RED,
    },

    [APRICORN_TREE_ROUTE101_RED_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_RED,
    },

    [APRICORN_TREE_ROUTE38_WHITE_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_WHITE,
    },

    [APRICORN_TREE_ROUTE26_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE29_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE30_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE30_PINK_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_PINK,
    },
    [APRICORN_TREE_ROUTE31_BLACK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_VIOLET_BLACK_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_VIOLET_YELLOW_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_YELLOW,
    },
    [APRICORN_TREE_ROUTE33_BLACK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_ROUTE33_PINK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_PINK,
    },
    [APRICORN_TREE_AZALEA_WHITE_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_WHITE,
    },
    [APRICORN_TREE_ROUTE35_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE36_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE37_RED_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_RED,
    },
    [APRICORN_TREE_ROUTE37_BLACK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_ROUTE37_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE39_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE42_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE42_PINK_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_PINK,
    },
    [APRICORN_TREE_ROUTE42_YELLOW_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_YELLOW,
    },
    [APRICORN_TREE_ROUTE43_BLACK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_ROUTE44_RED_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_RED,
    },
    [APRICORN_TREE_ROUTE45_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE45_YELLOW_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_YELLOW,
    },
    [APRICORN_TREE_ROUTE45_RED_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_RED,
    },
    [APRICORN_TREE_ROUTE46_PINK_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_PINK,
    },
    [APRICORN_TREE_ROUTE46_GREEN_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE2_YELLOW_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_YELLOW,
    },
    [APRICORN_TREE_ROUTE2_PINK_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_PINK,
    },
    [APRICORN_TREE_ROUTE2_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE2_WHITE_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_WHITE,
    },
    [APRICORN_TREE_ROUTE2_GREEN_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_GREEN,
    },
    [APRICORN_TREE_ROUTE4_BLACK_TREE] =
    {
        .isSapling = FALSE,
        .apricornType = APRICORN_BLACK,
    },
    [APRICORN_TREE_ROUTE5_RED_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_RED,
    },
    [APRICORN_TREE_ROUTE7_BLUE_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_BLUE,
    },
    [APRICORN_TREE_ROUTE7_YELLOW_SAPLING] =
    {
        .isSapling = TRUE,
        .apricornType = APRICORN_YELLOW,
    },
};
