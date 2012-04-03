inherit ROOM;
void create() {
	set( "short", "�����ƻ�" );
	set( "owner", "pigpana" );
	set( "light_up", 1 );
	set( "build", 13208 );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/daemon/class/blademan/obj/six-neck",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/tendo/obj/chaosbelt",
		"file10"   : "/obj/gift/unknowdan",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/daemon/class/blademan/obj/six-neck",
		"amount5"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/obj/gift/bingtang",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room69",
	]) );
	set( "long", @LONG
������̤���������֮ʱ,��Ȼ��[31m��������[0m,˲��һ��[32m����[0m�Ѿ�
����������,�����[36m��������[0mȫ����ɢ,�ڴ�ͬʱ�����������ת��
������,ת�ۼ�,�Ѿ���һ��[33m����[0m,�����ܵ�һ��ʪ,�����㻹�㲻��
��״����ʱ��,ȴ��Ȼ����!һ��[37m���ǻþ�[0m,���������������뿪��
���ֲ�����õĵط�.

LONG);
	setup();
	replace_program(ROOM);
}
