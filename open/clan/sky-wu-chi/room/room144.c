inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "palapala" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10720 );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/y-pill",
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/capital/obj/4-3",
		"file2"    : "/open/capital/obj/4-1",
		"amount1"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"amount4"  : 30,
		"file8"    : "/daemon/class/fighter/ywhand",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/armband",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount10" : 1,
		"amount3"  : 49,
	]) );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room151",
		"west"      : "/open/clan/sky-wu-chi/room/room146.c",
	]) );
	set( "long", @LONG
��������Ϊ[1;37m��[1;30m����[0m[1;37m��[0m��������о�����һ�ֲ���������ɱ��������ո�
�ߵ�[1;47m��[1;37m�׻�[1;47m��[0m�����й�֮���޲���������ܵ��˿�������һ����ɱ����Ϣ��
���������ܣ���һƬ�ĺڰ���㿴����������Щʲô��ֻ�Ǹо����кü�
˫���۾��������㿴����Ȼ���㷢���컨��ѹ���������㼯æ������������
���˫��������ôһ�ţ�ʹ����ǧ��׹�Ĺ���Ӳͦ�ţ�û�뵽���Ĵ��ܳ���
���ĸ�����������ֻ�����ֱ��ǽС��𡯡��ա����䡯���񡯣����ó�����
�ǵ�������Ȼ������������Ĵ���Ȼ���¡�

LONG);
	setup();
	replace_program(ROOM);
}
