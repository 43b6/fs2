inherit ROOM;
#include <ansi.h>
string stone();

void create ()
{
	set("short",BBLU+YEL"��а��"NOR+RED"-"BLU"="HIY"��"HIG"��"HIC"��"NOR+BLU"="RED"-"NOR);
	set("long",@LONG
һ�����߲�ɫ�����ɵ�һ����״���, ��������ƺ�����һ����
, ��а���պþ�λ����״�ƶ���λ��, ǡ���ֲ��˽���©��, ���
��Լ�ԵĿ����ڽ���������˸��һ�Ż��ɫ�Ľᾧʯ, ��â���ŵ�
�����е�����������, �����ᾧʯ�ڲ��ϵĴ����綴������, �·���
ͨ����һ�������ͨ��...
LONG);
	set("no_transmit",1);
        set("light_up",-1);
	set("item_desc",([
"�ᾧʯ": (: stone :),
]));
	set("exits",([
"east":__DIR__"w09",
]));
	setup();
}

string stone()
{
object me=this_player();
	message_vision(HIY"\n$Nרע��ע���Žᾧʯ��\n\n"NOR,me);
	call_out("check",1,me);
	return "\n";
}

int check()
{
object me;
int kar,i;
	me=this_player();
	kar=(int)me->query("kar");
		message_vision(HIY"\n$N�����˱������˽ᾧʯ�ڡ�\n"NOR,me);
	if(kar < 10)
		kar=10;
	if(random(40) > kar)
	{
		tell_object(me,HIR"\n�ᾧʯ�ڵ�ͨ��ͻȻ�������һζ���!!\n\n"NOR);
		i=random(kar);
		me->move(__DIR__"e"+i);
		tell_room(__DIR__"e"+i,HIM"�ռ�ͻȻ����һ���ѷ죬"+me->query("name")+"���ѷ��е��˳�����\n"NOR);
		message_vision(HIR"\n��������һ����$N�����ڵء�\n"NOR,me);
		me->receive_wood("kee",100);
		COMBAT_D->report_status(me,1);
	}
	else
	{
		tell_object(me,HIW"�ᾧʯ��ͨ��ʮ�ֵ�ƽ�����ʡ�

"HIR"\nֱ��ͻ����һ���ɫ�Ļ�ǽ����о���ʼ����Щ��...\n\n"NOR);
		tell_object(users(),HIY"\n\n
����֮һ��ŭ��

	�����������а��Ļ�ǽ "RED"-"BLU"="HIY"��"HIG"��"HIC"��"NOR+BLU"="RED"-"NOR" 

		"HIY"��Ȼ�� "HIC+me->query("family/family_name")+HIY" �� "HIW+me->query("name")+HIY" �������ˡ�

	��񣬽���ٶ�������һ�ǣ�����������������и���ɣ�
\n\n"NOR);
	me->move(__DIR__"w11");
	}
return 1;
}