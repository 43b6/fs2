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

int init(object me,object ob) 
{
me=this_player();
ob=this_object();
if(interactive(me))
	{
	  if(me->query("quest/start_game"))
	  {
	    if(!present("fight_card",me))
	    {
	      tell_room(environment(ob),HIY"ϵͳ��ʾ��"+me->query("name")+"��ʧ��ս��Ƭ��\n"NOR);
	      tell_room(environment(ob),HIY"\nϵͳ�������룬��������Ŀ�ꡮ"HIW+me->query("name")+HIY"����\n\n"NOR);
	      me->start_busy(3);
	      call_out("time01",3,me);
	      return 1;
	    }
	    else
	    {
	      if(me->query("quest/start_game_prize")==1)
	      {
	      tell_room(environment(ob),HIY"ϵͳ��ʾ����ӭ"HIG"��"NOR+me->query("title")+HIG"��"HIY"��"HIW+me->query("name")+HIY"������᳡��\n"NOR);	    
	      return 1;
	      }
	      else
	      {
	      tell_room(environment(ob),HIY"ϵͳ��ʾ����ӭ��ս�ߡ�"HIW+me->query("name")+HIY"������᳡��\n"NOR);	    
	      return 1;
	      }
	    }
	  }
	  else
	  {
	    if(present("fight_card",me))
	    {
	      tell_room(environment(ob),HIY"ϵͳ��ʾ��ϵͳ��ѯ��"HIW+me->query("name")+HIY"�����зǷ���ս��Ƭ��\n"NOR);
	      tell_room(environment(ob),HIY"\nϵͳ�������룬Ԥ������Ŀ�ꡮ"HIW+me->query("name")+HIY"����\n\n"NOR);
      	      me->start_busy(3);
	      call_out("time",3,me);
	      return 1;
	    }
	    else
	    {
	      tell_room(environment(ob),HIY"ϵͳ��ʾ����ӭ���֡�"HIW+me->query("name")+HIY"������᳡��\n"NOR);	    
	      tell_room(environment(ob),HIY"ϵͳ��ʾ�����Ҷ���չ�"+me->query("name")+"��\n"NOR);	    
	      return 1;
	    } 
	   }
	  }
}

int time(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\nϵͳԶ���빥����"HIR"��ī��"HIY"��Ԥ����ɣ�Ŀ�ꡮ"HIW+me->query("name")+HIY"��ȷ�ϡ�\n"NOR);
tell_room(environment(me),"\n\n"HIW+me->query("name")+"�⵽ǿ������ī������\n\n"NOR);
tell_object(me,HIW"ϵͳ��ʾ��������Ǿ��������ܵ������ս��Ƭ����\n"NOR);
me->set("title",HIY"������"NOR);
me->command("recall");
tell_room(environment(ob),HIW"\nϵͳ��ʾ��ϵͳ�����ɡ�\n"NOR);
return 1;
}

int time01(object me,object ob)
{
ob=this_object();
tell_room(environment(me),HIY"\n\nϵͳԶ���봫�͡�"HIR"ת����"HIY"��Ԥ����ɣ�Ŀ�ꡮ"HIW+me->query("name")+HIY"��ȷ�ϡ�\n"NOR);
message_vision(HIW"\n\n$N��һ���ع����䡣\n\n"NOR,me);
new(__DIR__"f_card")->move(me);
tell_room(environment(ob),HIW"\nϵͳ��ʾ����Ƭ������ɡ�\n"NOR);
return 1;
}