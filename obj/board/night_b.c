// board.c
inherit BULLETIN_BOARD;

void create()
{
    set_name("���������", ({ "night board", "board" }) );
    set("location", "/u/n/night/workroom");
    set("board_id", "night_b");
    set("long", "����ڰ�������ƽ��Ϳѻ�õ�,����д���������Ϳ��ĵ��ˡ�\n" );
    setup();
    set("capacity",100);
    set("master",({ "night" }) );
}
