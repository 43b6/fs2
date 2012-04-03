inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "owner", "shih" );
	set( "object", ([
		"amount5"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
	]) );
	set( "build", 10086 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room282",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
���������о���ɽ��ɽ����ʮ�ɣ����оŷ�����������ͼ������
�������ݡ�̫ʷ�����Σ��Զ����飬�²�������֮�ڣ���������֮��
������������������ӽ���š����������ɺţ����ԾŻ�֮Ŀ����
�������зֶ�������ɽ���Ż����������գ��������ϼ����ѩ����
�֣����������£���Ө����ɫ��Ʈ�����˼ҡ�����С��̤��̨��ңָ
��ɽ����������ˮ�ɷ����������ֽ�ͯ�ӱ�������
    ����������̨�壬Ҳ�ǾŻ�ɽ�羰��ѵĵط���һ�������
��Ϫ������У�ˮ���ƹ�����ɽ�Ե���ʯ����ڣ�������ɣ�������
�����ݺ����ɣ����˹��ѵ����ɣ������ʯ���Ѵ��������ɣ�������
�辰��
    ������Ħ�£����顸���˼䡱���֣�����ʵ���ɾ���˼��������
��ԭ�����������У�����ȴ�����ɰ�ʾ������ħ�硱�������ĵ���
��ɣ����ԳƵ������棬ֻ������Χ�������룬�·���������
�����������������ڶ�����ɽ����������Щ���죬ȴ���벻��������
��������֮ǰ�����˹��컹��һ��ѹ�ȵĸо���
LONG);
	setup();
	replace_program(ROOM);
}
