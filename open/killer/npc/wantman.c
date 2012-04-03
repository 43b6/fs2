#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_menu();
string do_can();

int accept_object (object me,object ob)
{
  object ob2;

  if (me->query("class") != "killer")
  {
    command ("say �񾭲��������������\n");
    return 0;
  }
  if(ob->query("id") == "maiu-head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/bellstar.c");
     ob2->add_amount(99);
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "snow token") 
  {
     if (me->query_temp("mission2") == 3)
     {
     message_vision(" ����Ц��ʥ������������ϸ�����һ��\n",me);
     command("say ̫���ˣ������������׻���������ڤ֮������ɣ����û��ˣ�ʡ��������������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/can.c");
     ob2->move(me);
     me->set_temp("mission2",4);
     return 1;
     }
  }
  if(ob->query("id") == "nija_head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/s_pill.c");
     ob2->add_amount(4);
     ob2->move(me);
     ob2=new("/obj/money/gold");
     ob2->add_amount(19);
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "sword_head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã�������������ת�������ɣ�\n");
     message_vision("ֻ��������Цʹ�������񹦰���----�������飡��\n",me);
     destruct(ob);
     message_vision("��$N����ð��һ��������������Ц��ת��֮�£����������������\n",me);
     if (me->query("max_atman") < 750)
     {
	     me->add("max_force",-5);
	     me->add("max_atman",5);
	     return 1;
     }
     message_vision("�ǵ������ڽӴ�$N��ͬʱ���ٴλ�Ϊ����\n",me);
     command("say ���������ҵ����������԰���ת�������ˣ�");
     return 1;
  }
  if(ob->query("id") == "killer_wanted") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/s_pill.c");
     ob2->add_amount(99);
     ob2->move(me);
     ob2=new("/obj/money/gold");
     ob2->add_amount(999);
     ob2->move(me);
     ob2=new("/open/killer/obj/bellstar.c");
     ob2->add_amount(999);
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "zhang-head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/k_ring.c");
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "hou_head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/bellstar.c");
     ob2->add_amount(49);
     ob2->move(me);
     ob2=new("/open/killer/memory/static.c");
     ob2->move(me);
     ob2=new("/open/killer/obj/s_pill.c");
     ob2->add_amount(1);
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "fu_head") 
  {
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/hate_knife.c");
     ob2->add_amount(199);
     ob2->move(me);
     ob2=new("/obj/money/gold");
     ob2->add_amount(9);
     ob2->move(me);
     return 1;
  }
  if(ob->query("id") == "yar_head") 
  {
     if (me->query_temp("mission3") != 6)
     {
      command("say ��Ȼ�ҽб��˰����ã��ɶ񣡿��ƣ���\n");
      message_vision(" ����Цһ�ƽ�$N���\n",me);
      me->add("kee",(me->query("kee"))/2);
      me->move("/open/killer/home/ru1.c");
      return 0;
     }
     message_vision(" ����Ц����ͷ����������ϸ�����һ��\n",me);
     command("say ��Ȼ������ٵ���ͷ���ܺã��������\n");
     destruct(ob);
     ob2=new("/open/killer/obj/s_pill.c");
     ob2->add_amount(9);
     ob2->move(me);
     ob2=new("/open/killer/weapon/k_cloth3.c");
     ob2->move(me);
     ob2=new("/open/killer/weapon/k_arm3.c");
     ob2->move(me);
     ob2=new("/open/killer/weapon/k_head3.c");
     ob2->move(me);
     return 1;
  }
  return 0;
}

void create()
{
        set_name("����Ц",({"king-lee","lee"}));
        set("long","��˵������Ϊħ�̵ĳ��ϣ�������ʼ����������\n
                    Ŀǰ�ƺ����𴫴�ɱ��Ŀ���������(menu)\n");
        set("gender","����");
        set("class","poisoner");
        set("nickname", HIG "��ڤ����" NOR);
        set("combat_exp",700000);
        set("attitude","heroism");
        set("age",60);
        set("str", 40);
        set("cor", 34);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set("force",1800);
        set("max_kee",3500);
       set("kee",3500);	
        set("max_force",1800);
        set_skill("move",80);
        set_skill("force",90);
        set_skill("dodge",100);
        set_skill("parry",70);
        set_skill("poison",60);
        set_skill("throwing",80);
        set_skill("rain-throwing",80);
        set_skill("poisonforce",99);
        set("force_factor",10);
        set_skill("coldpoison",80);
        set_skill("nine-steps",100);
        map_skill("throwing","rain-throwing");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        set_skill("ming-snake",60);
        set("inquiry",([
        "menu" : (: do_menu :),
        "����ڤ֮��" : (: do_can :),
        "Ҷ��ɱ"   : "���ǳ������֣�����ȫ�������Ķ���\n",
        ]));
        setup();
        carry_object("/open/killer/obj/lustar")->set_amount(200);
        add_money("gold",10);
}
string do_menu()
{
  object me = this_player();
  object ob;

   if(me->query("class") == "killer")
   {
        tell_object(me,"Ŀǰ�������ֻ࣬�м�������\n");
        tell_object(me,"��ӾͿ�ֽ����д���������������\n");
        if(me->query_temp("menuget") !=1)
        {
           ob=new("/open/killer/obj/killmenu.c");
           me->set_temp("menuget",1);
           ob->move(me);
        }
        return "����ͷ���ң��Ҿ͸�����\n";
   }
   command("waggle "+me->query("id"));
   return "��ɲ���ɱ��Ү������ô��ɱ��\n";
}

string do_can()
{
  object me = this_player();
  object ob;

   if(me->query("class") == "killer")
   {
     if(me->query_temp("mission2") != 2)
     {
       return "������ģ�û��������ѽ����";
     }
     if(me->query_temp("mission2") ==2)
     {
        tell_object(me,"�ɶ�����̫��û����������������\n");
        tell_object(me,"�����ԣ�����õ��׻�֮���������ø�ѩȪʥ���\n");
        me->set_temp("mission2",3);
        return "�Ѷ������ң��Ҿ͸�����ڤ֮��\n";
     }
   }
   command("waggle "+me->query("id"));
   return "ƾʲô����㣿\n";
}
