inherit ROOM;
void create() {
	set( "short", "�� �� ٻ �� ��" );
	set( "object", ([
		"file6"    : "/open/prayer/obj/boris-hands",
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/castle/obj/blood-water",
		"amount5"  : 1,
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file3"    : "/open/sky/obj11/red-crystal",
		"file7"    : "/open/prayer/obj/boris-boots",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "owner", "raymond" );
	set( "item_desc", ([
		"test" : @ITEM
���ǲ���
ITEM,
	]) );
	set( "build", 10131 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room98",
		"enter"     : "/open/clan/13_luck/room/room121",
	]) );
	set( "long", @LONG
[0m
[52m������������[0m
[52m��[57m ��  ® [52m��[0m     [33m��[0m [36m��[0m ٻ [52m��[0m [33m��[0m
[52m���������ȩ�[0m   ����ͬ�����ˡ���ٻ��������ʯ֮��
[52m��        ��[0m��������ٻ˫��֮����ʯ֮�����������[52m��[0m [56m˼ �� [0m [52m��[0mħ����ɣ����˱Ƚ����ָ�ǿ��[53m��ħ����[0m��
[52m��        ��[0m׳���������������ɥ����[51m��ħ��[0m(badforce)
[52m������������[0m
[52m��[0m  [33mǰ�� [0m [52m��[0m        [35m��Ԫ��ɱ��[0m
[52m��        ��[0m
[52m�����ȩ�����[0m�Դ˽����˳�[31mа��[0m
    ����
[0m
�����ṹ���������ɴ��Ž����ֱ�Ϊ[33mǰ��[0m��[56m˼��[0m��[57m��®[0m
Ȼ��������а�������޵�[55m�뷿[0m��
LONG);
	setup();
	replace_program(ROOM);
}
