// chen_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("������",({"black board","board"}));
	set("location","/open/killer/room/r3");
	set("board_id","killer_b");
	set("long","����һ��ɱ���������µĺ�������\n");
	setup();
	set("capacity", 30);
	// replace_program(BULLETIN_BOARD);
}
