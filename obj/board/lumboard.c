// board.c
inherit BULLETIN_BOARD;
 
void create()
{
    set_name("��ķ��Ϳѻ���", ({ "board" }) );
    set("location", "/u/l/lum/room2");
    set("board_id", "board");
    set("long", "����������д�������һῴ�!! =^.^=\n" );
    setup();
    set("capacity", 20);
    set("master",({ "lum" }) );
}
