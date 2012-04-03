inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $HIG$ǰͥ$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/capital/room/king/obj/dagger1",
		"amount8"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/capital/guard/gring",
		"file10"   : "/open/ping/obj/cloud_fan",
		"amount1"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/obj/cloud_fan",
		"amount7"  : 1,
		"file2"    : "/open/ping/questsfan/obj/stone",
		"file8"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/ping/obj/cloud_fan",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/ping/obj/cloud_fan",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10029 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room165.c",
		"west"      : "/open/clan/sky-wu-chi/room/room44.c",
		"out"       : "/open/clan/sky-wu-chi/room/room141.c",
		"north"     : "/open/clan/sky-wu-chi/room/room197",
	]) );
	set( "long", @LONG
�߽���Ժǰͥ�������ú�ש�̳ɵı�ֱ�����ǰ�����������ȥ����ǰͥ��
���ƺ���ֳ��Ŀ����򣬲�ƺ����������ķ��ż���ѧ�����������ߵĶ������ڵ�
·���ԣ���һ������ʯͷ���ɵ�С����ÿ������ı������ò���з�ɣ�������
������������ѧ�ʵ����ӡ���������ȥ�����߽���Ժ����ͥ���ϱ�����Ժ���ţ�
�������߸���һ��������ƺ���ѧ������ĵط���
LONG);
	setup();
	replace_program(ROOM);
}
