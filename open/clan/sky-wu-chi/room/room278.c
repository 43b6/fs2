inherit ROOM;
void create() {
	set( "short", "����С��" );
	set( "owner", "biwem" );
	set( "object", ([
		"file1"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount7"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file4"    : "/open/gsword/obj/may_ring",
	]) );
	set( "build", 10048 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room352.c",
		"south"     : "/open/clan/sky-wu-chi/room/room354.c",
		"north"     : "/open/clan/sky-wu-chi/room/room353.c",
		"down"      : "/open/clan/sky-wu-chi/room/room175.c",
		"west"      : "/open/clan/sky-wu-chi/room/room355",
	]) );
	set( "long", @LONG
����ר�ŷű�����Сװ��
ȫ���ǻ�����һ�Ũ��������ƷҲ����������С�䱸
������ѥ,ħ����,���˲ݻ�,���ױۻ�,���м�,
����,Ѫ����,��ѩ���,��������........�ȵ�
һЩ�Ų��ϖ����װ��,ż���з�ghost eq �ȵ�
��������ϣ��������һ��save eq @@
�������ڵȺ�����ʿ��ʩ��
LONG);
	setup();
	replace_program(ROOM);
}
