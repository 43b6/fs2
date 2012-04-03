#include <room.h>
#include <ansi.h>

inherit F_VENDOR;
string recover()
{
  object who;
  string str;
  int rec_time=0;

  who = this_player();

  rec_time=who->query_temp("recove");
  if (who->query_temp("power")==1)
    return "�Ȼظ��������ɣ�" ;
  if (rec_time >10)
    return "��Ǹ������������Ѿ����ʺ��ٻظ���";
  str = "�ظ�һ��һ���ƽ�\n";
  if( !who->can_afford(10000) ) 
  {
    str += "Ǯ���������ǾͶԲ����ˡ�\n";
    return str;
  }
  else 
  {
    who->pay_money(10000);
    message_vision("$N������һ��Ǯ��\n", who);
    message_vision("ֻ����˫���������ƺ���һ�ɽ�ɫ��â�����������\n",who);
    message_vision("��е�������һ����ů�����߱龭��\n",who);
    command("say �붯Ҳ���ԣ�Ҫ��һ��Ż�ظ�����");
    who->set_temp("power",1);
    rec_time=rec_time+1;
    who->set_temp("recove",rec_time);
    call_out("power",4,who);
    return "���������ĸо����";
  }
}

int power (object who)
{
  tell_object(who,"��е�����ӿ��һ�ɳ����������������������ظ���\n");
  who->set_temp("power",0);
  who->receive_heal("kee",250);
  return 1;
}

void create()
{
set_name("����ʦ",({"rester"}) );
set("long","��������ɽ�ɵ����յ��ӣ�������ɽ�ɱ���ʱ��Ҷ�³�·��������һ��\n
            Ϊ�˱��������������������ר����ɱ���ǻظ�����״����\n
            ��ظ��Ļ������������й�(recover)���¡�\n");
set("gender","����");
set("age",47);
set("combat_exp",200000);

set("inquiry",([
    "recover" : (: recover :), 
    ]));
setup();
}

int accept_fight(object me)
{
  return notify_fail("��������Ҷ�³Ƕ������������֣���Ȼ����ս��\n");
}
int accept_killer(object me)
{
  return notify_fail("��������Ҷ�³Ƕ������������֣���Ȼ�뿳�ң�\n");
}
