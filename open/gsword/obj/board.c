// common_b.c

inherit BULLETIN_BOARD;

void create()
{
        set_name("���гǹ���", ({ "board" }));
        set("location","/open/gsword/room/su0");
        set("board_id","suboard");
        set("long","�κζ����гǵĽ����빫��,�������ڴ�����.\n");
	setup();
	set("capacity", 30);
}
