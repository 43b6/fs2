inherit ROOM;
void create() {
	set( "short", "miffy ����" );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "object", ([
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/daemon/class/fighter/ywhand",
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 82,
		"amount2"  : 1000,
		"file2"    : "/open/killer/obj/s_pill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file7"    : "/daemon/class/fighter/armband",
	]) );
	set( "build", 10010 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room213.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room318",
	]) );
	set( "long", @LONG
��������Կ���������������,Ҳ���ǵ���С��..�ܿ�����
�����Ⱳ�������ҵ���,��Ϊ����һ����������Ϳ��Լ�������
�⼸��,��Ϊ��һЩ������ȥѰ��ʧ��Ļ�ƿ,����Կ�������
��һ�������صķ���,��û��̫����ݻ���Ϣ,������ȴ�о�
��һ����Ȼ��ɱ������,������ŵ���С���ɱ��������
���������µĽ��,�������治�������ŵ�С��ĵ���,����Ҳ��
�в���...

LONG);
	setup();
	replace_program(ROOM);
}
