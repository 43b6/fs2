inherit ROOM;
void create() {
	set( "short", "�׻��ÿ�" );
	set( "owner", "compaq" );
	set( "object", ([
		"amount4"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 1,
		"amount3"  : 1,
		"file10"   : "/open/ping/obj/chilin_legging",
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"file9"    : "/open/prayer/obj/boris-boots",
		"file6"    : "/open/mogi/mountain/obj/frog-pill",
	]) );
	set( "build", 10248 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room13.c",
		"enter"     : "/open/clan/13_luck/room/room17",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    �ߵ��˶����������ĵط����������ܼ������ˣ����Ͽ����׻�����
�����֣�������һ����Χ���ˣ�ԭ�����Ƕ��������뵱ʮ������ʿ����
���е���������ϰ����е���Զ��������������ģ�����ÿ���˶�˵��
ʮ������Ĺ�ȥ�����¼����ɼ�ʮ������������Զ���ġ�

LONG);
	setup();
	replace_program(ROOM);
}
