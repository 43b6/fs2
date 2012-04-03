inherit ROOM;
void create() {
	set( "short", "�׺�Ȫ" );
	set( "owner", "shih" );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount3"  : 34,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file8"    : "/obj/gift/hobowdan",
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
	]) );
	set( "build", 11436 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room244",
	]) );
	set( "long", @LONG
�ഫ��ǰ������һ���׺�Ȫ������ˮ��������Ϊ��ɽ֮�
��Ȫˮ����ӿ�����ϣ������ˮ���ɺ������ų��ϴ��һ��������
Ϊ������ϧ������һ����˽������С�٣�������Ȫˮ������������
�ŷ�ˮ֮˵����Ȫ�۶������׺�Ȫ�Ӵ˱�ɺ��ˡ�����ֻʣ��һ��
���š��׺�Ȫ�����ֵ�ʯ����Ϊ���������������ϣ�������ɽ
֮·��

LONG);
	setup();
	replace_program(ROOM);
}
