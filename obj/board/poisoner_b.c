// poisoner_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("ڤ��аʯ",({"stone","board"}));
	set("location","/open/poison/room/room1");
	set("board_id","poisoner_b");
	set("long","����ħ��ͽ���õ�����ʯ��\n");
	setup();
	set("capacity", 30);
}
