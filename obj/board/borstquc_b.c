// board.c
inherit BULLETIN_BOARD;
 
void create()
{
    set_name("����������԰�", ({ "board" }) );
    set("location", "/u/b/borstquc/workroom");
    set("board_id", "borstquc_b");
    set("long", "������¼����Ĺ��̽���\n" );
    setup();
    set("capacity", 100);
    set("master",({ "borstquc" }) );
}
