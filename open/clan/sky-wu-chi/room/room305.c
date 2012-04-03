inherit ROOM;
void create() {
	set( "short", "Ѫ�۾�" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/doctor/obj/feather",
	]) );
	set( "light_up", 1 );
	set( "build", 10444 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room300.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room301.c",
		"north"     : "/open/clan/sky-wu-chi/room/room298",
	]) );
	set( "owner", "holeman" );
	set( "long", @LONG
ԭ��Ϊ���������ȫ�����۵ķ��ӣ�û�뵽��һ�򿪴���
֮�󣬾�Ȼ��һ�ɾ����ɱ������ֱ����������㲻�ò���
��ʮ�ɵĹ������ֵ�������ȫû�뵽���ɱ��������ǰȴ��
ʧ����Ӱ���٣��������ݵ����˹����Դﵽ���������ľ���
�ˡ������������֮��ȴ���ȵķ�����ԭ������������˼�
����װ��֮�Ⲣû�п����κ��ˣ��������ǲ�Ҫ����������
���Ƚϰ�ȫ�ɡ�
LONG);
	setup();
	replace_program(ROOM);
}
