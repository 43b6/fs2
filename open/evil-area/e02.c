#include <ansi.h>
inherit ROOM;
string sign();

void create()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
��������ʱ��ͨ����, �Ĵ����Ѿ���ש�߸�������, ���ϲ�����
ɰ��, ����֮��, ��ɳ����, ��һ����ʾ��(sign)...
LONG);
	set("exits",([
"north":__DIR__"e01",
]));
	set("item_desc",([
"sign": (: sign :),
]));
	set("no_transmit",1);
	setup();
}

string sign()
{
	object me=this_player();

	tell_object(me,"\n�߻Ƶ�ľ��д�ţ���·ֻΪ��Ե�߿�...\n");
	call_out("move",1,me);
	return "\n";
}

int move(object me)
{
	me=this_player();
	if(!me->query_temp("evil/d_enter"))
		return notify_fail(" �����Ե��...\n");
	message_vision(YEL"���µĳ���ͻȻ��ʼ�ƶ���

$N���µ�����ʼ���ݣ�$N�����˱�����������...\n\n"NOR,me);
	me->move(__DIR__"e03");
message_vision(HIY"\n��������һ�����졫$N����������\n"NOR,me);
	return 1;
}