inherit ROOM;
void create() {
	set( "short", "��ѩ֮��С��" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "object", ([
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 95,
		"amount7"  : 171,
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount6"  : 38,
		"amount3"  : 16,
		"amount5"  : 15,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file4"    : "/open/fire-hole/obj/b-pill",
		"amount4"  : 200,
		"file3"    : "/open/fire-hole/obj/y-pill",
		"amount9"  : 400,
		"file1"    : "/open/fire-hole/obj/p-pill",
		"file10"   : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 88,
		"amount2"  : 312,
		"file8"    : "/open/fire-hole/obj/r-pill",
		"file5"    : "/open/doctor/pill/human_pill",
		"amount8"  : 380,
		"file9"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 12120 );
	set( "owner", "ywarter" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room117",
		"enter"     : "/open/clan/sky-wu-chi/room/room136.c",
		"out"       : "/open/clan/sky-wu-chi/room/room151.c",
	]) );
	set( "long", @LONG
�߽���[1;37m��[1;34m������[1;37m��[0m����������ͨ����ƿ�����ҵĻ�·С����
�������¿�ʼ�½��������ǿ�ƿ�ӵľ�������ɽ�����ģ�����Ҳ��
�������ߵ�������ɽ��������ȥ������ҲԽ��Խ�ͣ����Ե�������
��մ���˺���ѩ�������ܾ�ɫҲ��ʼ���һƬ��ѩ��ɫ����ʱ��
�����Ṧ�����˿������·�̣����Ǿ��ǻ�û����ƿ�Ӿӵĺ�Ժ��
���п�ʼ��ѩ��ƮƮ���¶�ģ��������

LONG);
	setup();
	replace_program(ROOM);
}
