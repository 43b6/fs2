#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_want();
string do_ask();
void create()
{
  set_name("ɳ��",({ "desert elder","desert","elder"}));
  set("title","����Į��");
  set("gender", "����");
  set("age",65);
  set("attitude", "peaceful");
  set("no_kill",1);
  set("no_fight",1);
  set("long","һ�������ȵ�ɳĮ�ж����������ͷ����������ɨ�ѻ�
������ǰ�Ĵ�ɳ�������ķ�ɫ����ٷֲ�������Ӧ����
����������Į��ס��\n");
  set("chat_chance",6);
  set("chat_msg", ({
  "�����ִ�����ô��ɳ�ӣ����Ǹ��������գ�\n",
  }) );
  set("inquiry",([
  "����" : (: do_ask :),
  ]));

setup();
}

string do_ask()
{
  int me;
  object who;
  who = this_player();
  if (who->query("quests/r_camel",1)) {
  return "[1;37m���л�����ѱ�����գ�[0m\n"; 
  }
  else if (who->query("quests/w_camel",1)) {
  return "[1;33m��Ҫ����Ҫ��want��������[0m\n";
  }
  else if (who->query_temp("marks/f_c",1)) {
  return "[1;33m�Ҳ��Ǹ��㽲������[0m\n";
  }
  else {
  who->set_temp("marks/f_c",1);
  who->set_temp("marks/f_c_ent",1);
  return "[1;33mʲô���գ�������˵��������
�������ݲ���ԭ�ɸ����㣬�����������
���ľ�崲�У���ȥ��ľ���ƿ�����ͷ��
��������������ͷ����������һƥ���ա�
�����տ������ˣ����������¿�ˮ�Ͱ�
�ˣ��������ֽг�ɳ�棬���Ǵ���������
��������������ɶ���ᣬ�ʹ�ɳ���ý���
ż���أ�Ҳ������ɰ����ɰ��һ�࣬�ͳ�
�˵�ǽ����ǽ��ν��ǹ���룬�ܵ������
��������ǲ�������������������пɣ�
����ɫ�쳣������ع���ʮ�ֵ��ҡ���
����Ҳ�Ǹ�Ե�ݣ����ͽ�ȥ���У��ƿ���
�ӣ����˰��������ܷ�ѱ����ƥ���հɣ�[0m\n";
  }
}

void init()
{
        object ob;
        ::init();
        if( interactive(ob = this_player())&& !is_fighting() )
 {
        remove_call_out("greeting");
        call_out("greeting",1 , ob);
 }
}

void greeting(object ob)
{
  if (ob->query("quests/r_camel",1))
  {
   message_vision("[1;37m�������Ǳ��¸߰���[0m\n",ob);
  }
  else if (ob->query("quests/w_camel",1))
  {
   message_vision("[1;33m������Ҫ��want��������[0m\n",ob);
  }
  else if( ob->query("class")==!"bandit" && ob->query_temp("marks/f_camel",1))
  {
   message_vision("[1;35m���������Ȼ�㹻��
����ûɶô���͵ģ����м�ʮ�����ӣ����������°ɣ�[0m\n",ob);
   ob->add_money("gold",25);
   ob->set("quests/r_camel",1);
  }
  else if (ob->query("class")=="bandit" && ob->query_temp("marks/f_camel",1))
  {
   message_vision("[1;33mû�뵽��������ѱ�������գ�
��������Ҳ�Ǹ�Ե�ݣ��������и��������Ľ��飬�����������ɣ�
��������ȡ�����ѹ��൱ʱ�ա������أ�����������Ҫ��ģ���
���书���ã�ѱ�������档��������ȵ���Ե�ݣ�����������
ʶһ���������������أ����������ིһ����want�����Բ����
��������Ϊ�ѵģ��ðգ�[0m\n",ob);
  ob->set("quests/w_camel",1);
  }
  else if (ob->query_temp("marks/k_camel",1))
  {
   message_vision("[1;31m��Ӵ��������Ȼ�Ѡ�ɱ�ˣ�[0m\n",ob);
   message_vision("[1;31m��....���������Ҹ���ô�찡��[0m\n",ob);
   this_object()->kill_ob(ob);
  }
}

void die()
 {
  object killer;
  killer=query_temp("last_damage_from");
  message_vision("[1;35m���������书����������Ȼ��ǿ����������[0m\n",killer);
  killer->delete_temp("marks/k_camel");
  ::die();
 }
