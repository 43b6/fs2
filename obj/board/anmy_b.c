// board.c
inherit BULLETIN_BOARD;
 
void create()
{
    set_name("С���ü�����԰�", ({ "board" }) );
    set("location", "/u/a/anmy/workroom");
    set("board_id", "anmy_b");
    set("long", "��,��������������..\n" );
    setup();
    set("capacity", 50);
    set("master",({ "anmy" }) );
}
