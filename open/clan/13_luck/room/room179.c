inherit ROOM;
void create() {
	set( "short", "ħ��֮·" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount3"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/scholar/letter",
		"amount4"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"amount1"  : 1,
	]) );
	set( "build", 10521 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room241.c",
		"east"      : "/open/clan/13_luck/room/room176.c",
		"south"     : "/open/clan/13_luck/room/room177",
		"out"       : "/open/clan/13_luck/room/room136.c",
		"north"     : "/open/clan/13_luck/room/room178",
	]) );
	set( "long", @LONG

    ������Ǵ�˵�е�$HIB$ħ��֮·$NOR$������$HIY$ʮ������$NOR$��ǰ������Ѫ���ѳ�
��·���������꣬ǰ���ǽ�̤$HIM$������$NOR$��Ѫ��$CYN$ħɭ��$NOR$���Ѿ�ǧ�����
�ŵ��������ħ���Ϊ���ģ��ķ��ֱ��ǣ���$HIG$������$NOR$����$HIC$��а��$NOR$��
��$CYN$ħɭ��$NOR$����$HIR$�ű�$NOR$���˴���ǰ�����µ�ħ���ͼ��ʮ���ĺ����ǣ�Ҫ
����ǰ�˵Ľ̻壬һ��ҪѪ��ħ���ͳ����$HIR$����ħ��$NOR$�����˼�ָ���
������$HIY$ʮ������$NOR$��Զ����������

                  $HIC$��а��$NOR$(north)
                        o
                        o       
   $HIG$������$NOR$(west)---ħ���(old man)---$HIR$�ű�$NOR$(east)
                        o
                        o
                  $CYN$ħɭ��$NOR$(south)

LONG);
	setup();
	replace_program(ROOM);
}
