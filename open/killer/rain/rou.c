#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_trial();

int accept_object (object me,object ob)
{
  object ob2;

  if (me->query_temp("rain_3") != 1)
  {
    command ("say �񾭲��������������\n");
    return 0;
  }
  if(ob->query("id") == "low_letter") 
  {
     message_vision(" ���ٽ��������������Ų𿪣���ϸ�Ķ�\n",me);
     message_vision(" �����ź󣬲��ٽ������뻳��\n",me);
     command("say �ܺã���������ħ����󷨣��Ҿ͸�����ɣ�\n");
     command("say ����̳һ¥������������һ��������һ¥���ܵ�\n");
     command("say ��һ����ͽ�������ħ����󷨾��Ǳ���ȡ��\n");
     destruct(ob);
     me->set_temp("rain_4",1);
     return 1;
  }
  if(ob->query("id") == "evil_god") 
  {
     if (me->query_temp("rain_4") != 1)
     {
       command ("say Ͷ��ȡ�ɣ�������ã����ף�����ҹ�������\n");
       message_vision(" $N������һ�ƴ�ɣ���֪ȥ��\n",me);
       me->move("/open/killer/home/firstrm.c");
       destruct(ob);
       return 0;
     }
     message_vision(" ������ϸ�Ķ�����ħ�����֮�����쳤Х\n",me);
     command("shout ̫���ˣ�����ɱ�ֺ�����ˣ��Ҿʹ������ʽ�ɣ�\n");
     destruct(ob);
     me->set("quest/rain",1);
     me->set_temp("rain_4",0);
     return 1;
  }
  return 0;
}

void create()
{
        set_name("����",({"chil-rou","rou"}));
        set("long","��˵������Ϊħ�̵�һԱ��������ʼ������������������롣\n
                     ����ó�����֮�����ֻ�ɱ���ܼ�--����ʽ\n");
        set("gender","������");
        set("class","poisoner");
        set("nickname", HIR "����ɱ��" NOR);
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",27);
        set("str", 50);
        set("cor", 35);
        set("cps", 18);
        set("per", 30);
        set("int", 20);
        set("force",1000);
        set("max_force",800);
        set_skill("move",90);
        set_skill("force",60);
        set_skill("dodge",80);
        set_skill("parry",80);
        set_skill("poison",80);
        set_skill("whip",40);
        set_skill("throwing",100);
        set_skill("rain-throwing",110);
        set_skill("poisonforce",40);
        set("force_factor",10);
        set_skill("coldpoison",80);
        set_skill("nine-steps",80);
        map_skill("throwing","rain-throwing");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        set_skill("ming-snake",60);
        set("inquiry",([
        "��Ӱذ��" : "Ҷ��ɱ�����������𣿿��ԣ�ͨ��(����)��˵��\n",
        "����" : (: do_trial :),
        "ׯ����"   : "�ҶԲ�������\n",
        ]));
        setup();
        carry_object("/open/killer/obj/lustar")->set_amount(100);
        add_money("gold",20);
}

string do_trial()
{
  object me = this_player();

   if(me->query("quest/rain") == 1)
   {
        command("say ��־������������Ҫ�ܾ�Ŷ������\n");
        // me->move("/open/killer/trail/beginrm.c");
        return"say ���������ջ�û���ã�����ذ�\n";
   }
   command("sm "+me->query("id"));
   return "�ߣ���֪��\n";
}
