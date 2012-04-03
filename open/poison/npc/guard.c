#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("ڤħ����",({"poison guard", "guard"}));
        set("gender","����");
        set("class","poisoner");
        set("combat_exp",5000);
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",250);
        set("max_force",250);
        set_skill("unarmed",50);
        set_skill("parry",30);
        set_skill("dodge",30);
        set_skill("whip",30);
        set_skill("poison",30);
        set_skill("coldpoison",25);
        set_skill("nine-steps",30);
        map_skill("poison","coldpoison");
        map_skill("dodge","nine-steps");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
}

void init()
{
  object me = this_player();
  int times = me->query_temp("poison_nopass");
  :: init();
  if( times > 2 && !present("card",me) ) {
       remove_call_out("greetings1");
       call_out("greetings1",1,me);
      }
  else if(!present("card",me) && me->query("family/family_name") == "����"){
           remove_call_out("greetings2");
           call_out("greetings2",1,me);
         }
  if(me->query("class") == "poisoner" && !me->query("family/family_name") ){
           remove_call_out("greetings3");
           call_out("greetings3",1,me);
         }
  if(present("card",me)) {
           remove_call_out("greetings4");
           call_out("greetings4",1,me);
         }
}
void greetings1(object me)
{
      message_vision(HIC"ڤ������ŭ�����ɶ�! $N��������ѽ!\n"NOR,me);
      command("say �ҿ����ǻ��������Թ�������!");
      this_object()->kill_ob(me);
}
void greetings2(object me)
{
  int times = me->query_temp("poison_nopass");
      command("say ���ŵĳ�С�ӣ����ﲻ��ӭ�㡣");
      command("say ����! �´α������������������Ҿ������㡣");
      me->set_temp("poison_nopass",3+times);
}
void greetings3(object me)
{
      command("say "+me->name()+"��������ڤ��ħ�̵���?");
      command("smile");
      command("say ��̿���Ҫ��������ͬ���Ŷ!");
}
void greetings4(object me)
{
      command("smile");
      command("say ��ӭ! ��ӭ! ���! ���!");
      me->delete_temp("poison_nopass");
}
