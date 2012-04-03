#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", HIW"����֮��--��Ʊ����"NOR);
set("long", @LONG

һ����װ��������ڴ˴��������ţ���������һЩ��ͷ����ġ��ˡ��ڴ˵�
���������޷����ݡ������ｻ̸�ţ��ڼ���һ�ѳ����ڻ��Ƽ��豸������ǰ
�������ˡ�Һ����ʾ�桢�Զ�ϵͳ....�ȵȣ���ͻȻ������������һ����ͬ
�Ŀռ䣬�ѵ�������������

�ұ���һ������(rule_sign)�����һ�׾�Ƭ����ϵͳ(Electornic chip)��

LONG);
set("item_desc",([
"rule_sign":HIW"
			��������ս����

����һ�����汻NPC�����ˣ������ѣ״̬�ص�recall�ط�������лSWY���Ŀ��ı༭��

��������������Լ�������PK�Ļ�������ˡ�����˲���������Ρ�

����������ս���������ÿһ��ѹ��߲����ټ���ǰ�������Ѿ���������
	֮ǰ���صĻ����Ǿ���ȵ��ٽ�ȥ��

�����ģ����صĽ�Ʒ���뵽�ұߵ��콱����ȡ��

�����壺����ʱ��������¾�Ƭ������Ƭ�ĵ�������ϵͳ���ϡ�

				������	Firedancer@F.S.
"NOR,
"chip":HIW"Ŀǰ������׶Σ�һ�о�Ƭ��ѣ����apply chip����Ǽ���ս��

	���¾�Ƭ��apply newdata��

	�뿴ĳһ���˵�ս���Ļ���������list <IP>��

	Ŀǰ�в���������������

				������  Firedancer@F.S
\n"NOR,
]));
set("exits",([
"out":__DIR__"steeple",
//"east":__DIR__"prize",
"enter":__DIR__"up00",
"north":__DIR__"nick",
]));
set("no_fight",1);
set("no_die_room",1);
set("no_magic",1);
set("no_transmit",1);
set("objects",([
__DIR__"ticket_robot":1,
]));
setup();
}


int valid_leave(object me,string dir)
{
 if(dir=="out"||dir=="east"||dir=="north")
   {
   me->delete_temp("fighting_apply");
   return 1;
   }
 if(dir=="enter")
   {
   me->delete_temp("fighting_apply");
   if(!present("fight_card",me))
     {
     tell_object(me,HIW"ϵͳ�����ɨ�飬�Ҳ�����Ƭ������ʧ�ܡ�\n"NOR);
     return 0;
     }
   if(!me->query("quest/start_game"))
     {
     tell_object(me,HIW"ϵͳ������ɨ�飬�Ҳ�������������ʧ�ܡ�\n"NOR);
     return 0;
     }
   return 1;	
   }
}

void init()
{
	add_action("do_apply","apply");
	add_action("do_list","list");
}

int do_apply(string str)
{
int i=(random(10)+1);
object me=this_player();
if(!str||str != "chip")
{
if(str!="newdata")
return notify_fail(HIW"ϵͳ����ȷ�������Ŀ�ꣿ\n"NOR);
{
if(me->query_temp("change_time"))
return notify_fail(HIW"ϵͳ�����ڸ��µ��������Ժ�\n"NOR);
{
me->set_temp("change_time",1);
call_out("change_card",i,me);
message_vision(HIW"ϵͳ����ʼ�������ϸ��¡�\n"NOR,me);
me->start_busy(i);
message_vision(HIW"���ϴ��仺��ʱ�䣺 "+i+" ��\n"NOR,me);
return notify_fail(HIW"ϵͳ����ʼ����"+me->query("name")+"������\n"NOR);
return 1;
}
}
}
if(me->query_temp("fighting_apply"))
return notify_fail(HIW"ϵͳ��ϵͳ����ȷ���У������ĵȴ���\n"NOR);
if(me->query("quest/start_game"))
return notify_fail(HIW"ϵͳ�����������Ѱ�������������롣\n"NOR);
else
{
message_vision(HIW"ϵͳ�����������������߶���\n"NOR,me);
message_vision(HIW"ϵͳ��Id��"+me->query("id")+"������ȷ���У����Դ�"+i+"�롣\n"NOR,me);
me->set_temp("fighting_apply",1);
call_out("check_time",i,me);
return 1;
}
}

int check_time(object me)
{
if(present("fight_card",me))
{
me->delete_temp("fighting_apply");
tell_object(me,HIW"ϵͳ���������ű��˵ľ�Ƭ���롣\n"NOR);
return 1;
}
if(!me->query_temp("fighting_apply"))
{
tell_object(me,HIW"ϵͳ��Ŀ���ƶ������ϴ�������ʧ�ܡ�\n"NOR);
return 1;
}
else
{
tell_object(users(),

HIY"��ӭ"+me->query("name")+"������ս"HIG"��"HIR"��������"HIG"��"HIY"������
		
		"HIW"ϣ��"+me->query("name")+"�ܲ����������´���һ�ٲ�"HIG"��"HIY"����x"HIG"��"HIW"��
"NOR);
new(__DIR__"f_card")->move(me);
tell_object(me,"��õ���һ����Ƭ��\n");
me->set("quest/start_game",1);
me->delete_temp("fighting_apply");
return 1;
}
}


int change_card(object me)
{
if(!me->query("quest/start_game"))
{
tell_object(me,HIW"ϵͳ��ϵͳ�Ҳ���������ϣ������½������롣\n"NOR);
me->delete_temp("change_time");
return 1;
}
if(!present("fight_card",me))
{
tell_object(me,HIW"ϵͳ����Ǹ����ľ�Ƭ�����ˣ����Ȳ����ɡ�\n"NOR);
me->delete_temp("change_time");
return 1;
}
else
{
destruct(present("fight_card",me));
new(__DIR__"f_card")->move(me);
call_out("send_card",1,me);
return 1;
}
}

int send_card(object me)
{
message_vision(HIY"ϵͳ����ʼ���������"HIW+me->query("name")+"����Ƭ"HIY"����\n"NOR,me);
message_vision(HIY"\n\nϵͳԶ���봫�͡�"HIR"ת����"HIY"��Ԥ����ɣ�Ŀ�ꡮ"HIW+me->query("name")+HIY"��ȷ�ϡ�\n"NOR,me);
message_vision(HIW"\n\n$N��һ���ع����䡣\n\n"NOR,me);
tell_object(me,HIW"���õ���һƬ��"+me->query("name")+"����Ƭ��\n"NOR);
me->delete_temp("change_time");
me->set_temp("apply_newdata",1);
return 1;
}

int do_list(string arg)
{
object me=this_player();
object ob;
ob = LOGIN_D->find_body(arg);
if(!ob)
return notify_fail(HIW"ϵͳ����ѯʧ�ܣ�����Ŀǰ�������ϡ�\n"NOR);
else
{
int i=ob->query("quest/start_game");
int a=i-1;
int j=ob->query("quest/lose_game");
tell_object(me,"
 
"HIW"��������������������������������������������������������������������������������
��������������������������������������������������������������������������������
����                      �����衮����ϵͳ��ѯ�� ��                         ����
�����x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x����
���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x��"NOR"


		   ���֣�"HIW+ob->query("name")+NOR"

		   ���ɣ�"NOR+ob->query("clan/name")+NOR"

		   ʦ����"NOR+ob->query("family/master_name")+NOR"

		   Ŀǰ��ս¥�㣺�� "HIY+i+NOR" ¥

		   Ŀǰ�Ǽ�ʧ�ܴ����� "HIY+j+NOR" ��
	");
return 1;
}
}