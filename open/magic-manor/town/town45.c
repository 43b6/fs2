inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "��������");
        set ("long", @LONG
���ԵĹ�ľ�������ƣ���Ҷ����������΢���Ĺ����£�ǰ����
·�������ɿ����壬���͵�Ұ�޽�����Զ�ֺ���������������£���
���������������������ͷ��·Ҳ�ѱ��ڰ���û�ˣ�Ҳ����ֻ����Զ
����ʧ��������֮���ˡ�
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
	object me,ob;
	int os;
	me = this_player();

	if( me->query("quests/can_go_magic-manor") == 1 )
	{
	  if( present("magic sign",me) )
	  {
	  ob = present("magic sign",me);
	  os = ob->query("magic-manor");
	    if( os == 6 )
	    {
	    call_out("msg1",3,me);
	    }
	  }
	}
}

int msg1()
{
	object me;
	me=this_player();
        tell_object(me,HIC"ֻ�������ϵľ���������һ����âָ�򶫷���\n"NOR);
	add_action("do_go","go");
}

int do_go(string str)
{
	object me,obj,ob;
	int os;
	obj = this_object();
	me = this_player();
	ob = present("magic sign",me);
	os = ob->query("magic-manor");

	if(str == "east" )
        if( present("magic sign",me) && os == 6 && me->query("quests/can_go_magic-manor") == 1 )
	{
	tell_room(obj,"��������â����������͸������ֳ��ֳ���һ��·��\n");
	message_vision("$N�ھ�������·�£�����������һ��·��\n",me);
	tell_room(obj,"���Ź�â����ɢȥ����â��ָ��·Ҳ��ʧ���١�\n");
	me->move(__DIR__ "town46");
	return 1;
	}
}
