// board.c
inherit BULLETIN_BOARD;

void create()
{
    set_name("������С�ڰ�", ({ "weimin board", "board" }) );
    set("location", "/u/w/weimin/workroom");
    set("board_id", "weimin_b");
    set("long", "����ڰ�������ƽ��Ϳѻ�õ�,����д���������Ϳ��ĵ��ˡ�\n" );
    setup();
    set("capacity",100);
    set("master",({ "weiwei" }) );
}
