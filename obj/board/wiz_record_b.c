inherit BULLETIN_BOARD;

void create()
{
	set_name("¼����", ({ "board" }) );
	set("location", "/open/wiz/meeting");
	set("board_id", "wiz_record_b");
	set("long",	"\n");
	setup();
	set("capacity", 100);
	// ��������������Щ�� discard post ��
	set("master", ({"wade", "chan"}) );
}
