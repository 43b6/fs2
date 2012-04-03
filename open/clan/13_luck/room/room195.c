inherit ROOM;
void create() {
	set( "short", "ҹ�ι�" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount10" : 241,
		"amount3"  : 1,
		"file5"    : "/open/sky/obj5/uiw_jade",
		"amount9"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/dragon-head",
		"amount7"  : 1,
		"file7"    : "/open/sky/obj6/sun_diamond",
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
		"file10"   : "/open/doctor/pill/gnd_pill",
		"amount4"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/sky/obj6/meteor_diamond",
		"file1"    : "/open/sky/obj6/ocean_diamond",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/capital/obj/blade2",
		"file8"    : "/open/gblade/obj/sa-head",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10072 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
������λ�ں���С��������,������ɢ��������Ļ�����쳣ǿ�������,
ǿ��������·��γ�һ�����εķ������,�������������ͽ���,���ܵĶ�
ֲ�����ƺ����Ƿǳ��Ļ�ӭ�����͵ĵ���,ǰ���ĺ�Ӱ����һ����,����Ӱ
�ĺ�����һ��������ۼ�Ľ�����,���Ȼ�뵽ǰ����Ǵ�˵�е�ҹ�ι�,
���ǵ���Ӱ��ؾ���---ҹ�ι�����--��ǧˮ������--�����.


LONG);
	setup();
	replace_program(ROOM);
}
