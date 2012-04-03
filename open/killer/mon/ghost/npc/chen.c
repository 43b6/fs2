#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("���ǻ�",({"star chen","star","chen"}) );
   set("long","������ò����, �����൱˹�ĵĸо�, ��ʵ���Ǹ������Ķ�, ���Ĺ��εĶ�����\n");
   set("race", "����");
   set("gender","����");
   set("combat_exp", 800000);
   set("age",60);
   set("title","��ǹ����");
   set("kee",3000);
   set("max_kee",3000);
   set("force",3000);
   set("max_force",3000);
   set("force_factor",12);
   set_skill("shasword",80);
   set_skill("sword",90);
   set_skill("shaforce",75);
   set_skill("force",80);
   set_skill("sha-steps",90);
   set_skill("dodge",90);
   set_skill("parry",90);

   map_skill("dodge","sha-steps");
   map_skill("force","shaforce");
   map_skill("sword","shasword");

   set("chat_chance_combat",50);
   set("chat_msg_combat",({
       (:perform_action,"sha_kee" :),
       (:perform_action,"swordkee" :)
   }));

   setup();
   add_money("gold",5);
   carry_object("/open/gsword/obj/woodsword")->wield();
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

int accept_kill( object me)
{
   int i;
   object guard;

   if( !present("killer", environment(me)) )
   {
      this_object()->command("say ������, ������...�����˾���..........");
      tell_room(environment(me),HIW"\n�ô�ĵ���, ���ڷ���Ŀ���Ҳ�Ҷ�!!\n\n"NOR);
      for(i=0;i<2;i++)
      {
         guard = new("/open/killer/mon/ghost/npc/black5");
         guard->move(environment(me));
         guard->command("follow "+me->query("id"));
         guard->kill_ob(me);
      }
   }
   tell_room(environment(me),"�ڷ��ֵ���, �Ѵ̿���������\n"),
   message_vision(HIB"\n�ڷ�������ɱ��һ�յ����������$N��������\n"NOR,me);
   return 1;
}
void greeting(object me)
{
   command("say ��...��...��Ҫ��ʲô...");
}

void die()
{
   object head, killer;
 
   killer= query_temp("last_damage_from");
   if( killer->query_temp("ghost") == 2)        // ��ֹ fanset ��������
   {
      command("say ��...��...�Ҳ����Ĩ�!!");
      message_vision("˵��֮�����͵�����......\n", killer);
      head=new("/open/killer/mon/ghost/obj/shead.c");
      head->move( environment( killer));
      killer->set_temp("ghost", 3);
   }
   else
   {
      command("say �Ҹ�����Թ�޳�, Ϊ����Ҫ����������...");
      message_vision("˵��֮�����͵�����......\n", killer);
   }
   ::die();
}
