inherit ROOM;
void create() {
	set( "short", "����Է�" );
	set( "light_up", 1 );
	set( "object", ([
		"file1"    : "/open/magic-manor/obj/fire-ball",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/magic-manor/obj/wood-ball",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount8"  : 1,
		"amount10" : 1,
		"amount5"  : 1,
		"file3"    : "/open/capital/guard/gring",
		"file10"   : "/open/magic-manor/obj/soil-ball",
		"file4"    : "/open/capital/guard/gring",
		"amount4"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 12000 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room136",
	]) );
	set( "long", @LONG
�����ǿ�ƿ�ӵķ���[1;37m��[1;36m���[1;37m��[0m�����ң�����һ�߽�����ʱ���ŵ���
һ���嵭����������ζ�����������м���һ��ľ��ľ��Բ�����������
һ�ѿ����кó�һ����ʷ�Ĺ��ݣ��㲦��һ�����ң�������һ��וּ���
�������ʱ����������һ�Ѻ��٨ڣ��ڿ�����ǽ�Ϲ���һ��[1;37m��[1;34m���Թ�[1;37m��[0m
��Ҳ�������԰�ķ�������Ĺ��ߡ����䷿����ͷ��һЩ�����ݲݶ���
��������ȫû������һ��������е�������֡���ʱ�������ͷ���ſ�
ƿ�ӵķ��˿���Ҳ������ѡһ�ĺ�Ů�ӡ�

LONG);
	setup();
	replace_program(ROOM);
}
