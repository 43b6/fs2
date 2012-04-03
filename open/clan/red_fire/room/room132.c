inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIC$ƯƯ$HIM$С����$HIG$��$HIR$�뷿$HIY$��$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount4"  : 1,
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10138 );
	set( "owner", "corin" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room76.c",
		"south"     : "/open/clan/red_fire/room/room137.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

��׼��$HIC$��$HIG$��$HIM$��$HIY$��$NOR$���䣬��$HIY$��ױ̨$NOR$��$HIR$Ů��̨$NOR$��$HIC$����$NOR$�н�������ǽ�Ϲ���һ
��$HIM$����$NOR$�Ļ���չ�ֳ����������һ�棬����������ۼ���Ա߷���һ����
���ӣ���һ������$HIY$��װ$NOR$�����пɹ������$HIC$��$HIM$��$NOR$���ɼ�$HIM$����$NOR$���������ĸ�
�ԡ�$HIY$��ױ̨$NOR$�ϰ�����$HIC$��֬$NOR$��$HIY$����$NOR$�Ȼ�ױ��Ʒ��$HIM$����$NOR$ÿ�춼����ƯƯ����
�ĳ��š������$HIM$����$NOR$Ů�췽��Ҳ�Ƕ��Ϲϣ�$HIR$Ů��̨$NOR$��δ��ɵ�����������
����������$HIM$��$HIY$��$HIC$ͼ$NOR$��ֱ�����������档


LONG);
	setup();
	replace_program(ROOM);
}
