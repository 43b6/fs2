inherit ROOM;
void create() {
	set( "short", "����ƿ�ӱ��������" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file1"    : "/open/doctor/pill/sky_pill",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file2"    : "/open/ping/obj/poison_pill",
		"file5"    : "/obj/gift/shenliwan",
		"amount2"  : 51,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 11,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10017 );
	set( "exits", ([
		"enter"     : "/open/clan/sky-wu-chi/room/room124",
		"south"     : "/open/clan/sky-wu-chi/room/room137.c",
	]) );
	set( "long", @LONG
����������ƿ�ӱ����ҵ�ͨ��..���㻹û��ȥ���֮ǰ���Ѿ�����
һЩ���Ƕ��õı���,��Ҳ������������������һ����...�㲻�����뵽
Ҫ�����������û�б����ڵĸ��òŹ�..���ǵ�����ʲô����������
���ԷŽ��������������..���ֲ���������..��..��������Ҫһ̽����
�Ż�֪�����浽������Щʲô���ĺñ���

LONG);
	setup();
	replace_program(ROOM);
}
