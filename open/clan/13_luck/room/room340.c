inherit ROOM;
void create() {
	set( "short", "���Ƹ����" );
	set( "object", ([
		"amount1"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"file6"    : "/open/capital/obj/chen_dagger",
		"file1"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount3"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
	]) );
	set( "owner", "smalloo" );
	set( "build", 11214 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room76.c",
		"enter"     : "/open/clan/13_luck/room/room339",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    ӳ������������һ��[0;1;30m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mv[0m����Ȼû�е������������ǣ���
ȴ����[0;1;34m��[1m��[0m��[0;1;36m��[1m��[0m��������������ڶ���[0;1;34m��[1m��[0m��[0;1;36m��[1m��[0m����������д��һ�仰��
       [0;1;5;32m��[1;5m��[1;5m [1;5m [1;5m [1;5m��[1;5m][1;5m [1;5m [1;5m [1;5m��[1;5m��[1;5m [1;5m [1;5m [1;5m��[1;5m��[0m
       [0;1;5;31m��[1;5m��[1;5m [1;5m [1;5m [1;5m��[1;5m][1;5m [1;5m [1;5m [1;5m��[1;5m��[1;5m [1;5m [1;5m [1;5m��[1;5m��[0m
 
������һ��Ƭ��Ұ�ϣ��Եø����������䣬��ʱ΢�����촵����
���ϵ��Ʋ�Ҳ�е��Ʈ���������������[0;1;35m��[1m��[1m��[1m��[1m��[1mq[1m��[1mM[1m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
