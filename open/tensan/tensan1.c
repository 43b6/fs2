inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", HIW"��ɽ���"NOR);
        set ("long", @LONG
���ɽ����һ·�����������������ƺ��Ѿ���·���ߣ���������
��������������ѡ��������������ʱ���ֵ�����һ��ʯ��д����
ɽ����ĸ����֣������������ɽ������ô���׵�һ���¡�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);
	set("light_up",-1);

        set("exits", ([ /* sizeof() == 4 */
	]));

        setup();
}

void init()
{
	object me = this_player();

	if( me->query_temp("tensan/get_enter") == 1 && present("tensan mark",me))	
	    call_out("msg1",3,me);	   	
}

int msg1(object me)
{	
        tell_object(me,HIY"\n\n\nͻȻ�䣬�����ϵ���ɽͨ�������һ��ҫ�۵Ĺ�â��ֱ����ʯ���ϡ�\n\n"NOR);
	call_out("msg2",3,me);
}

int msg2(object me)
{	
        tell_object(me,HIY"����һ��ʱ��ĵȴ�����ɽ��羹��ʼ���˱仯����ʱ��ҡ�ض�������\n\n"NOR);	
	call_out("msg3",3,me);
}

int msg3(object me)
{	
        tell_object(me,HIW"ԭ��������ʯ���ϵĹ�â˲����ʧ��ת����һȦ�׹���ס���ȫ��\n\n"NOR);
	call_out("msg4",3,me);
}

int msg4(object me)
{	
        tell_object(me,HIY"�����㿴������֮�ʣ����ѱ����͵���ɽ��������һ����\n\n\n\n"NOR);	
	tell_object(users(),HIW"\n\n��ɽ����"HIM"��"HIG"��"HIW"����������䣬"HIY+me->query("name")+HIW"ͨ������ɽ��硣\n\n\n"NOR);
	me->move("/open/trans/room/room4");
}