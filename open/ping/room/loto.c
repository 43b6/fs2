inherit ROOM;
#include <ansi.h>

void create()
{
	set( "short", HIW"��"HIY"������͸��ȯͶעվ"HIW"��"NOR );
	set( "long", @LONG

    ������������ʮ������, ÿ�����ﶼ����ǩע��, ��ר�ĵ�
ѡ���Լ������˺���, ��Ҳ��Щ�����ŵ����Ĵ�����, ��Ҫ�ο�
���˵ĺ���, ���ﱻ����ˮй��ͨ, �㲻�����ȥ������, ���
��һ��һ�����˳������޷�����, �󺰾���!
    �Ա��и�С������(board)��

LONG);
	set("item_desc", ([
		"board" : "
	pick  <����> �����ȯ
	auto         ��ѡ���Ų�ȯ
	list  <����> ��ѯ�������
	claim <����> �ҽ�

	ÿ�����Ͼŵ�׼ʱ����
	ͷ��������֮����ʮ������
",
	]) );
	set( "no_kill", 1 );
	set( "no_fight", 1 );
	set( "objects", ([
		"/u/a/acky/lotto/lotto" : 1,
	]) );
	set( "exits", ([
		"north" : __DIR__"road3",
	]) );
	setup();
}
