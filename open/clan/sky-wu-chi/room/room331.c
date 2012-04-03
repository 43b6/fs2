inherit ROOM;
void create() {
	set( "short", "ս�����¼�" );
	set( "owner", "bbsman" );
	set( "object", ([
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/sunblade",
		"file4"    : "/open/quests/snake/npc/obj/snake_gem",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/doctor/item/human_item",
		"amount4"  : 1,
		"amount8"  : 8,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/capital/obj/blade2",
		"file2"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10083 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room250",
	]) );
	set( "long", @LONG
ǽ���¹��й��������������ڡ������������ʱ��
�������ұߵ�ս��׼��������û�иɾ��ľ��·����Դ���
�����Ĳ���������µ��·���һ�Ե���ؾ��ճ�����ǿ��
�����ǣ��ɴ˿ɼ��������е���������ױ̨�ϵ�CK��ˮ��
���ɱ�͵��ࡡ�
LONG);
	setup();
	replace_program(ROOM);
}
