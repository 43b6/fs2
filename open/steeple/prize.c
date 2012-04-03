inherit ROOM;
#include <ansi.h>
string screen();
void create ()
{
set("short", HIW"����֮��--�콱��"NOR);
set("long",@LONG

һ����������������ڴ˴���ת�ţ��������ƹ��š�����֮������
�����ԣ����������(check)��Ƭ���ſ��Զһ���Ʒ��

һ��������Ļ(computer screen)��������ǰ��
LONG);
set("exits", ([
"west" : __DIR__"ticket",
]));
set("no_die_room",1);
set("item_desc",([
"computer screen":(:screen:),
"screen":(:screen:),
"��Ļ":(:screen:),
"������Ļ":(:screen:),
]));
setup();
}

void init()
{
add_action("do_check_card","check");
}

string screen()
{
object me=this_player();
tell_object(me,"
"HIB"========================================================================

	"HIW"ʹ���ߣ�"+me->query("name")+"

	Ŀǰ��ս¥�㣺"+me->query("quest/start_game")+"

	��Ƭ��¼��"+present("fight_card",me)->query("name")+"

"HIG"��"HIR"��������"HIG"��"HIW"��Ʒ�б�

LV 10��       LV 20��       LV 30��       LV 40��       LV 50��

"HIY"�ƽ�һ��      �д�����      �д�����      �д�����      �д�����

"HIW"LV 60��       LV 70��       LV 80��       LV 90��       LV 100��

"HIY"�д�����      �д�����      �д�����      �д�����      "HIG"�ɳ�������һ��
                                                        ��л��ʦ:С��(wataru)������
"HIC"P.S.  LV100�����������趨������ս���³�

"HIY"      ��Ʒ��������
"HIR"(������С����ֻ��Ŀǰ����׶Σ������ܸ�ʲô������������Ҳû����ƱǮ-.-)

                                       ����������Firedancer@F.S.
"HIB"========================================================================
"NOR);
return "\n";
}


int do_check_card(string arg)
{
object me=this_player();
if(!arg)
return 0;
if(arg!="card")
{
tell_object(me,HIW"ϵͳ�����󣬼�����������������֮����\n"NOR);
return 1;
}
	if(!present("fight_card",me))
	{
	tell_object(me,HIW"ϵͳ������ʹ������Я����Ƭ��\n"NOR);
	return 1;
	}
	if(!me->query("quest/start_game"))
	{
	tell_object(me,HIW"ϵͳ������"+present("fight_card",me)->query("name")+"������"+me->query("name")+"�����ϡ�\n"NOR);
	return 1;
	}
	if(!me->query_temp("apply_newdata"))
	{
	tell_object(me,HIW"ϵͳ������"+present("fight_card",me)->query("name")+"���ϲ��޸��£��������롣\n"NOR);
	return 1;
	}
else
{
int i,j;
j=me->query("quest/start_game");
j=j-1;
i=j/10;
	switch(i)
	{
	case 0: tell_object(me,HIW"ϵͳ���˵ȼ��޽�Ʒ���á�\n"NOR);
		me->delete_temp("apply_newdata");
		break;
	case 1: if(me->query("quest/start_game_prize")==1)
		{
		tell_object(me,HIW"ϵͳ��"+new(__DIR__"prize01")->query("name")+"�Ѿ���ȡ���������ظ���ȡ��\n"NOR);
		me->delete_temp("apply_newdata");
		return 1;
		}
		{
		tell_object(me,HIW"ϵͳ��"+present("fight_card",me)->query("name")+"����������ϡ�\n"NOR);
		me->delete_temp("apply_newdata");
		new("obj/money/gold")->move(me);
		message_vision(HIW"ϵͳ����ϲ"+me->query("name")+"���"+new("/obj/money/gold")->query("name")+"��\n"NOR,me);
		me->set("quest/start_game_prize",1);
		return 1;
		}
		break;
	case 2:if(me->query("quest/start_game_prize")==2)
		{
		tell_object(me,HIW"ϵͳ��"+new(__DIR__"prize02")->query("name")+"�Ѿ���ȡ���������ظ���ȡ��\n"NOR);
		me->delete_temp("apply_newdata");
		return 1;
		}
		{
		tell_object(me,HIW"ϵͳ��"+present("fight_card",me)->query("name")+"����������ϡ�\n"NOR);
		me->delete_temp("apply_newdata");
		new(__DIR__"prize02")->move(me);
		message_vision(HIW"ϵͳ����ϲ"+me->query("name")+"���"+new(__DIR__"prize02")->query("name")+"��\n"NOR,me);
		me->set("quest/start_game_prize",2);
		return 1;
		}
		break;
	case 3:if(me->query("quest/start_game_prize")==3)
		{
		tell_object(me,HIW"ϵͳ��"+new(__DIR__"prize03")->query("name")+"�Ѿ���ȡ���������ظ���ȡ��\n"NOR);
		me->delete_temp("apply_newdata");
		return 1;
		}
		{
		tell_object(me,HIW"ϵͳ��"+present("fight_card",me)->query("name")+"����������ϡ�\n"NOR);
		me->delete_temp("apply_newdata");
		new(__DIR__"prize03")->move(me);
		message_vision(HIW"ϵͳ����ϲ"+me->query("name")+"���"+new(__DIR__"prize03")->query("name")+"��\n"NOR,me);
		me->set("quest/start_game_prize",3);
		return 1;
		}
		break;
	case 4:if(me->query("quest/start_game_prize")==4)
		{
		tell_object(me,HIW"ϵͳ��"+new(__DIR__"prize04")->query("name")+"�Ѿ���ȡ���������ظ���ȡ��\n"NOR);
		me->delete_temp("apply_newdata");
		return 1;
		}
		{
		tell_object(me,HIW"ϵͳ��"+present("fight_card",me)->query("name")+"����������ϡ�\n"NOR);
		me->delete_temp("apply_newdata");
		new(__DIR__"prize04")->move(me);
		message_vision(HIW"ϵͳ����ϲ"+me->query("name")+"���"+new(__DIR__"prize04")->query("name")+"��\n"NOR,me);
		me->set("quest/start_game_prize",4);
		return 1;
		}
		break;
	default:tell_object(me,HIW"ϵͳ����ľ�Ƭ�������⣬��Firedancer������ɡ�\n"NOR);
		me->delete_temp("apply_newdata");
		break;
	}
return 1;
}
}