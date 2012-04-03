inherit ROOM;
void create() {
	set( "short", "�����鷿" );
	set( "owner", "roboo" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/wind-rain/obj/sun_red_cloth",
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file2"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10011 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room69",
		"north"     : "/open/clan/sky-wu-chi/room/room347",
	]) );
	set( "long", @LONG
    �������ǽ�ϵ�����ϰ������������ĸ�ʽ�鼮��ֻҪ�������� 
�е��κ��鼮������һ����ȱ������֮�⣬һЩ���Ѿ����Ҳ����Ź� 
�鼮Ҳ��������ҵ����������������������ڴˆ��飬����������  
�ܲ�ѧ��ʶ������������һ������һ�����䣬����֮����˴˲�ͬ 
������������רע��������飬�����Ʊ�����һ����Ϊ�� 
LONG);
	setup();
	replace_program(ROOM);
}
