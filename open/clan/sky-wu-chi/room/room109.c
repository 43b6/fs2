inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��$HIY$������$HIB$IV$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file1"    : "/open/ping/obj/iceger",
		"amount8"  : 1,
		"file3"    : "/daemon/class/fighter/ywboots",
		"amount7"  : 1,
		"file10"   : "/daemon/class/fighter/ywsu",
		"file9"    : "/open/ping/obj/ring-2",
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/ywhelme",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/fighter/ywhand",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/fighter/armband",
		"file5"    : "/daemon/class/fighter/ywleg",
		"amount10" : 1,
		"amount3"  : 1,
		"amount4"  : 1,
	]) );
	set( "build", 10085 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room187.c",
		"west"      : "/open/clan/sky-wu-chi/room/room108",
	]) );
	set( "long", @LONG
���㵽�����ķ���㲻�Ծ��ĸо�����һ�ɵ��������������Ƶ�����Χ;����������ܣ��컨������ӳ����µ���ɫ��â���ȵ�ɢ���ڷ����ÿ������{@��;�����ľ޴�����ʯ�����ڷ�����ı��ߣ�������ϱߣ��㿴��һ����ɫ�����̴ľ��;����������������ڷ���һ���޴�ĹŴ���ƿ����Ķ�����һ��޴������ʯǽ��;�����͸������ʯǽ������������ռ���ȫ�ĳ����������ǰ��

LONG);
	setup();
	replace_program(ROOM);
}
