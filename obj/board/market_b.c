inherit BULLETIN_BOARD;

void create()
{
        set_name("市集小组专用留言板", ({ "board" }) );
        set("location", "/u/n/nucu/market/markroom");
        set("board_id", "market_b");
        set("long",     "这是一个专供人市集小组言记事的留言板。\n" );
        setup();
        set("capacity", 30);
        replace_program(BULLETIN_BOARD);
}
