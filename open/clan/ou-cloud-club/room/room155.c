inherit ROOM;
void create() {
	set( "short", "Ӣ��ʥ��" );
	set( "owner", "dracula" );
	set( "item_desc", ([
		"crystal" : @ITEM
���챦��������, �ܹ�ʮ��, ����Ϊ:

[0;1m��[1m��[1m��[1m��[1m��[1m��[0m
[35mõϼ��[0m
[33m������[0m
[0;1;36m��[1m��[1m��[1m��[1m��[1mB[0m
[0;1;35m��[1m��[1m��[1mP[1m��[1me[0m
������
[0;1;34m��[1mQ[1m��[1m��[1m��[1m��[0m
[0;1;33m��[1m��[1m��[1m��[1m��[1mf[0m
[0;1;31m��[1m��[1m��[1ma[1m��[1m��[0m
[0;1;30m��[1m��[1m��[1mt[1m��[1mz[0m

ITEM,
	]) );
	set( "object", ([
		"file4"    : "/open/capital/guard/gring",
		"file6"    : "/obj/gift/xiandan",
		"amount10" : 1,
		"amount5"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"amount2"  : 262,
		"amount9"  : 1,
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"file7"    : "/obj/gift/unknowdan",
		"amount8"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/dancer/obj/linrboots",
		"file9"    : "/obj/gift/xisuidan",
		"amount3"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10120 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room87",
	]) );
	set( "long", @LONG
������Ʈ��Ũ�ҵ�������Ϣ, �·��̾Ӣ������, ��;���, �˵�ԭ��һλ
����Ӣ�۳���ǰ������֮��, �����Ӣ��Ϊ�˵����������Ȼ̤��ħ��, ����
�ܵ�����Ⱥ��Χ�˶�ʧ��֮��, �����������������ݻ�, ֱ�������, ����˼
�������վ�ս��������ĸ�������ʱ, �ſ�ʼ��������䲻����Ӣ��, ���,
�����ʾ����½�������, ���������������, ����Ϩ�������ʥ��, �Ա�ʾ����
������, ����ͳ��Ⱥ�׵�һ��, ��ʥ������ʢ�����ĵ���ȥ, ��ϡ�ɿ���������
���챦��ʮ�쾧(crystal)����̳

    [0;1;33m��[1m��[1m��[1m��[1m��[1m_[1m��[1m��[1;37m��[1m��[1m��[1m\[1m��[1m��[1m��[1m��[0m(crystal)
LONG);
	setup();
	replace_program(ROOM);
}
