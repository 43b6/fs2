// bad_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("������ʦ�Ż���",({ "board" }));
	set("location", "/open/badman/room/wizroom");
	set("board_id", "badwiz_b");
	set("long","\t��ɶ?!û�����˴���ǲ���? :b\n");
	setup();
	set("capacity", 50);
}
