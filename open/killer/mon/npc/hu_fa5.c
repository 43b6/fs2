#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("�ܰ˲�",({"eight uncle","eight","uncle"}) );
   set("long","���˲���һ�����˵�, ���Ҿ�ͨ���֮��, ��һλ�൱���µĵ���\n");
   set("race", "����");
   set("gender","����");
   set("combat_exp", 700000);
   set("age",55);
   set("title","�������鳤");
   set("class","killer");
   set("cor",99);
   set("cps",99);
   set("str",45);
   set("kee",3300);
   set("max_kee",3300);
   set("force",3000);
   set("max_force",3000);
   set("force_factor", 10);
   set("bellicosity",1700);
   set_skill("rain-throwing",100);
   set_skill("throwing",120);
   set_skill("blackforce",85);
   set_skill("force",90);
   set_skill("shade-steps",100);
   set_skill("dodge",100);
   set_skill("parry",90);
   map_skill("dodge","shade-steps");
   map_skill("move", "shade-steps");
   map_skill("force","blackforce");
   map_skill("throwing","rain-throwing");
   set("chat_chance_combat", 20);
   set("chat_msg_combat", ({
           (:perform_action,"throwing.manakee":),
   }));
   setup();
   add_money("gold", 10);
   ob=carry_object("/open/killer/obj/lustar");
   ob->add_amount(500);
   ob->wield();
   carry_object("/open/killer/weapon/k_cloth2.c")->wear();
}

void init()
{
   object me= this_player();
   ::init();
   if( me->query("id") == "ljen")
      call_out("greeting",1,me);
}

int accept_object( object me, object obj)
{
   string obj_name= obj->query("name");

   if( me->query_temp("ghost") != 3)            //��ûɱ�����ǻԵĻ��Ͳ�����
      return 1;

   if( obj_name == "���ǻԵ�ͷ")
   {
      command("say hmm...���Ȼ�ǳ��ǻԵ�ͷ");
      me->set_temp("shead", 1);
   }
   else if( obj_name == "���")
      me->set_temp("incense", 1);
   else if( obj_name == "��ֽ")
      me->set_temp("gpaper", 1);
   else if( me->query_temp("shead") && me->query_temp("incense") && me->query_temp("gpaper"))
   {
      command("say ������������, �Ǿ�����Ϊ��ʼΪ��ӯӯ���ɰ�...");
      message_vision("ֻ���ܰ˲���������������, ȼ�����, ���������д�...\n", me);
      message_vision("�漴���һ��, ֻ������ӯӯ��������Զ������\n", me);
      message_vision(HIB"лл$N�Ĵ�����, СŮ������Ϊ��\n"NOR, me);
      message_vision(HIB"����СŮ������ǰ���õ�һЩ�൱�ر��ҩ��\n"NOR,me);
      message_vision(HIB"Ϊ�˱��ⱻ���˷���, ���Ծͽ���������Ĺ�ľ��\n"NOR, me);
      message_vision(HIB", СŮ�Ӿ�����Щ��ҩ���ɶ���ı������........"NOR, me);
      me->set_temp("ghost", 4);
   }
   else
      command("say ���������ʲô��");
   destruct(obj);
   return 1;
}
int accept_fight(object me)
{
   return 1;
}
int accept_kill( object me)
{
   object guard;

   add("bellicosity",700);
   command("cmd bellup");
   guard=present( "killer 2",environment(me) );
   if( !present( "killer 2",environment(me))||!living(guard))
      return 1;
   else
   {
      tell_room(environment(me),"һ���ϣ������Ҳ�!�������� \n"),
      message_vision(HIB"\n������һ��ɱ�ֿ����鳤���ѣ�������$N��������\n"NOR,me);
      guard->kill_ob(me);
      return 1;
   }
}
void greeting(object ghost)
{
   object me= ghost->query_leader();
   if( me->query_temp("ghost") == 1)  //ֻҪ�ܰѹ�������˶������ 1
   {
      command("say "+(me->query("gender")=="����" ? "׳ʿ" : "����")+"����ӡ�÷���, �ƺ��Ǳ��������ˡ�");
      command("hmm");
      command("say ���Ҽ�����������, ���������������ϵĹ���ʲô��˵��");
      message_vision("ֻ���ܰ˲���������, ȼ�����, ���������д�...\n", me);
      message_vision("����һ����̴���ͷ��ð�����������......\n", me);
      ghost->delete_temp("invis");
      ghost->command("say СŮ����ǰ��һ��ɱ��, ��Ĺ԰���ʱ��ĳ���ɱ���͵Ϯ...");
      ghost->command("say �����Ǹ�������Ķ�����Ȼ.....");
      ghost->command("cry "+ me->getuid());
      ghost->command("say ��"+(me->query("gender")=="����" ? "׳ʿ" : "����")+"��СŮ�ӱ���, ��СŮ����֪, �������ںڷ����ܲ����͡�");
      ghost->command("say ������СŮ�ӱ��ô��, СŮ��Ը��������...��");
      message_vision(HIW"��ӯӯ������Щ��ʱ, �ֻ���һ������ʧ�ˡ�"NOR, me);
      command("say �������˰�, ��ȥ���ǻ��ʶ�������ͷ������, ���Һú�Ϊ������һ��");
      command("say ��������ȥ���ع�����Щ��� ֽǮ�����ڡ�");
      me->set_temp("ghost", 2);
      destruct( ghost);
   }
}
