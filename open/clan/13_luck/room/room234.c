inherit ROOM;
void create() {
	set( "short", "ά�������" );
	set( "light_up", 1 );
	set( "object", ([
		"amount7"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/obj/ring-2",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/scholar/obj/icefan",
	]) );
	set( "owner", "intelii" );
	set( "build", 10278 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room97.c",
	]) );
	set( "long", @LONG
   �߽��˼�ʯ�ң�����ҫ�۵Ĺ�ã��˸������ԭ���˵ر����ղ���
   ��Ҫ����װ����EQ�ң�ֻ���������ϰ��������ϡ����������
  ���ǽ�������������������ν��ʮ�˰�����������ȫ���ɼ���������
  ʱ�໨���������Ѫ��������װ�����ռ�
LONG);
	setup();
	replace_program(ROOM);
}
