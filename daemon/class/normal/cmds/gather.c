// gather.c

#include <ansi.h>

inherit SSERVER;
inherit F_GUILDCMDS;

int main(object me)
{
	if(me->query_temp("spe")==1)
		return notify_fail("����������ʹ������������������\n");
       if(!me->query("sec_kee"))
              return notify_fail("�������û���κ�������\n");
	if(me->query("atman")<10)
		return notify_fail("��������������޷�����������\n");
      message_vision(
          HIG + "$N�����������뻤������֮�У�ʹ$N������ǿ��\n" NOR,me);
	me->add("s_kee",me->query("spi")/10);
	me->add("atman",-10);
	if(me->query("s_kee")>me->query("max_s_kee")*2)
	{
//99/5/2����ɱ��ħ��MAX�ĳɳ�����
                if (me->query("sec_kee") == "mkill")
                {//ɱ��ħ���Ե�ʶΪ�������� ��ʶ30*9��270 MAX
	  if ( me->query("max_s_kee") >= (me->query("cor")*9))
	  {
	      tell_object(me,"��ͻȻ�е�ȫ�����飬�ƺ����ڵ������ѵ����ޡ�\n");
                        me->set("s_kee",me->query("max_s_kee"));
                        return 1;
                    }
	  me->add("max_s_kee",1);
                    me->set("s_kee",me->query("max_s_kee"));
                    tell_object(me,HIY "���������ǿ�ˣ�\n" NOR);
	  return 1;
                }
		if(me->query("max_s_kee")>=me->query("spi")*2+me->query("max_atman")/20)
		{
			tell_object(me,"��ͻȻ�е�ȫ�����飬�ƺ����ڵ������ѵ����ޡ�\n");
			me->set("max_s_kee",me->query("spi")*2+me->query("max_atman")/20);
			me->set("s_kee",me->query("max_s_kee"));
			return 1;
		}
		me->add("max_s_kee",1);
		me->set("s_kee",me->query("max_s_kee"));
		tell_object(me,HIY "���������ǿ�ˣ�\n" NOR);
	}
	return 1;
}
int help(object me)
{
  write( @HELP
 
���ָ�����������������ģ�ÿ�����������ʵս���顣
 
HELP);
  return 1;
}
