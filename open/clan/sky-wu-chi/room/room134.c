inherit ROOM;
void create() {
	set( "short", "����������" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount10" : 1,
		"amount7"  : 1,
		"file1"    : "/daemon/class/fighter/ywhand",
		"file10"   : "/daemon/class/fighter/armband",
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "light_up", 1 );
	set( "owner", "ywarter" );
	set( "build", 12000 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room136",
	]) );
	set( "long", @LONG
�����ǿ�ƿ�ӵķ���[1;37m��[1;35m����[1;37m��[0m�����ң�����һ�߽�����ʱ��͸���
һ��ֻ������Ů�Ӳ��е���ζ����һ����ζ�����Ǻ��غ��ص�������ζ
����һ����Ȼ�����㣬��Ϊ�����ֽ���Ϊ����������������Ϊ����ʹ��
����ר�ң�����������Ҳ����[1;37m��[1;36m���굶��[1;37m��[0m������һ���Ϲ��������˵�
���ʺ�һ��Ҫ��Ѫ����ѵ�����[1;37m��[1;33m̫�ʵ���[1;34m����[1;37m��[0m����ѵ�һ��Ҫ��
������ʹ�õĵ���Ӧ�֡���Ҳ�ѹ��ˣ���Ϊ��ѵ��������Եģ�ֻ����
�������ˣ����������˾���������

LONG);
	setup();
	replace_program(ROOM);
}
