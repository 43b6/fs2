inherit ROOM;
string screen();
#include <ansi.h>
void create()
{
set("short","������������");
set("long",@LONG

���ܶ�����ֹ���Ŀռ䣬�������˾�����Ư������̫��һ�㣬
û����ν���������ң������Ա��ƺ�ҲƯ���������ս����֮
�������ǣ�ÿ������ǰ����һ��өĻ(screen)�����ţ���Ҳ��
���⡣

LONG);
set("item_desc",([
"screen":(:screen:),
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
set("no_die_room",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
setup();
}

string screen()
{
object me=this_player();
tell_object(me,HIW"
�������ϣ�
		ʹ���ߣ�"+me->query("name")+"

		ʹ��ָ�move <number>


     1. ����������     2. LV10�м�վ     3. LV20�м�վ
     4. LV30�м�վ     5. LV40�м�վ     6. LV50����վ
"NOR);
return "\n";
}

void init()
{
add_action("do_move","move");
}

int do_move(string str)
{
object me=this_player();
int i,j;
j=me->query("quest/start_game");
sscanf(str,"%d",i);
switch(i)
{
	case 1: tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"ticket");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		break;
	case 2: if(j>10)
		{tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"up10");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 3: if(j>20)
		{tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"up20-1");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 4: if(j>30)
		{tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"up30-1");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 5: if(j>40)
		{tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"up40-1");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	case 6: if(j>50)
		{tell_room(environment(me),HIW"ϵͳ�����Ϸ��ϣ���ʼ������ս��"HIY+me->query("name")+HIW"��\n"NOR,me);
		me->move(__DIR__"up50-1");
		message_vision(HIW"$N�����ĴӲ�����״�����߳�����\n"NOR,me);
		return 1;}
		else
		{call_out("lowlevel",1,me);
		return 1;}
		break;
	default: tell_object(me,HIW"ϵͳ���޷��жϣ����������롣\n"NOR);
		break;
}
return 1;
}

int lowlevel(object me)
{
tell_object(me,HIR"ϵͳ��������ĵȼ��в�����ͨ���ô���\n"NOR);
return 1;
}