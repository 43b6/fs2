inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
����վ�����ⷿ�����ߵ�ľ��̤����, ���²�ʱ�Ĵ�������, ��
�����������㡲С�Ľŵ��µ����͹���, �͹���, ��Ư�������ܵĻ�
��, ����һ��С�ĵ���ȥ, ���ܻ�ʬ���޴�, �����㷳������ζɹ�
��ȥ�������ǿ���˸��ҫ�۽��ɫ��̤��ʱ, ��ͻȻ�����������
�Ե�����...

	���Ϸ�����һ�����������ߵĴִ�������
LONG);
	set("no_transmit",1);
	set("item_desc",([
"����":"���ӵ���һ���ƺ������ڽ��ɫ��̤����...\n",
]));
	setup();
}

void init()
{
add_action("do_climb","climb");
}

int do_climb(string arg)
{
object me=this_player();

	if(!arg)
		return 0;
	if(arg!="����")
		return 0;
	if(me->query_temp("evil/f_enter"))
	{
		message_vision(HIR"$N����������ȴ�������ϴ��������ȸ��¸��̵����ַſ�������\n"NOR,me);
		me->receive_damage("kee",100);
		COMBAT_D->report_status(me,1);
		return notify_fail("�����а����ۡ�\n");
	}
	else
	{
		message_vision(HIY"$N������ͻȻ���֡��𡳵�������

$N�г��޿ֵ������������������ţ��·�˿���������������ȸ�����Ӱ��...

$N�����˻ƽ�ɫ��̤�壬�߽����ź�\n"NOR);
		me->move(__DIR__"e05");
		return 1;
	}
}