inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("���¿Ƽ�������",({"super science robot","super","robot"}));
set("long","һ���ɴ���������������¿Ƽ���Ʒ�������жϾ�����
��ϵͳ�����Ƿ������ĳ������ԡ�\n");
set("unit","��");
set("no_get",1);
set("no_sac",1);
setup();
}

void init(object me,object ob) 
{
me=this_player();
ob=this_object();
if(interactive(me))
	{
	  if(!me->query("quest/start_game"))
	  {
	  tell_room(environment(ob),HIY"��ѯ�������������֡�Σ�գ�Σ�գ�\n"NOR,me);
	  tell_room(environment(ob),HIY"\nϵͳ�������룬Ԥ������Ŀ�ꡮ"HIW+me->query("name")+HIY"����\n\n"NOR);
	  call_out("time",3,me);
	  }
	  else
	  {
	    if(!present("ikki",environment(ob)))
	    {
	    object mob;
	    mob=new(__DIR__"npc02");
	    mob->move(environment(ob));
	    tell_room(environment(ob),HIW"ϵͳ��ս������ϸ�NPC������ɡ�\n"NOR);
	    }
	    else
	    {
	    tell_room(environment(ob),HIR"ϵͳ��ս������ʧ�ܣ�����NPC��\n"NOR);
	    }
	  } 
	}
}

int time(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\nϵͳԶ���빥����"HIR"��ī��"HIY"��Ԥ����ɣ�Ŀ�ꡮ"HIW+me->query("name")+HIY"��ȷ�ϡ�\n"NOR);
tell_room(environment(me),"\n\n"HIW+me->query("name")+"�⵽ǿ������ī������\n\n"NOR);
tell_object(me,HIW"ϵͳ��ʾ���������ʦfiredancer˵��������ν���ģ��Ա�����BUG����\n"NOR);
me->set("title",HIY"��������"NOR);
me->move(__DIR__"steeple");
tell_room(environment(ob),HIW"\nϵͳ��ʾ���������Ѿ��ܵ��ͷ�����������ء�\n"NOR);
}
