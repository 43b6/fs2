inherit ROOM;
void create() {
	set( "short", "��ѩ��˪��С�׷�" );
	set( "object", ([
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
	]) );
	set( "build", 10207 );
	set( "owner", "roboo" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room182",
	]) );
	set( "long", @LONG
�߽����������Կ�����ѩ��˪����æ�Ŵ�ɨ�����ء��Աߵ�����������������Ĺŵ����֣���С�輸�ϻ��ڷ���һ��������õ�廨��������������˶�������������������������ʱ����ע�⵽��������һ�ź�ѩ��˪����Ů���ѵĺ��գ���Ƭ�����������ʮ�ֵ��Ҹ��ء�
LONG);
	setup();
	replace_program(ROOM);
}
