inherit ROOM;
void create() {
	set( "short", "$HIY$��ƽ����Ժ�� $HIG$��ͥ$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"file3"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/magic-manor/fire/obj/fire-fan",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file7"    : "/open/ping/obj/cloud",
		"amount9"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount10" : 1,
		"amount1"  : 1,
		"file6"    : "/open/ping/questsfan/obj/key",
		"amount7"  : 1,
		"file10"   : "/open/magic-manor/obj/maun-shadow-blade",
		"file1"    : "/open/magic-manor/obj/magic-sign",
		"amount3"  : 1,
	]) );
	set( "build", 10370 );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room199",
		"east"      : "/open/clan/sky-wu-chi/room/room198",
		"south"     : "/open/clan/sky-wu-chi/room/room139.c",
	]) );
	set( "long", @LONG
����һ�����ţ���������ƽ����Ժ����ͥ��������һƬ�����ĵط���������Χ
ǽ������������������������������һ����������Ϊͨ�����ڶ��Ϸ���һ��С
���ӣ�����������һ����ͤ����Ի��������ͤ������һ�����������ӵ��Ƕ����ڶ�
����һƬ�����֣���������������������ޣ����鶼��ʮ����ѱ������һ����«��
���������롣����ͥ��������һƬ��㳡�������������Ļ����������У���
����һ����ɽ�����滹��һ��С�ٲ������Ϸ���һ���ŵĹ������������������и�
ʽ�����ĺ�������һЩ��Ҫ�����
LONG);
	setup();
	replace_program(ROOM);
}
