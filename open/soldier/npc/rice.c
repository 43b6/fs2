
#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
 {
  object ob;
  set_name("�׳����",({"rice worm","worm"}) );
  set("long","
    ������ǰ��λ�˸���󣬴�..�Ƕ�λ�󣬵�����
����һ��ͷ�Լ���֫���ϵķ��ˣ�����ӵ�еĹ���
���κ��˱Ȳ��ϵġ�
  ");
  set("race", "����");
  set("gender","����");
  set("attitude","heroism");
  set("combat_exp",300000);
  set("age",25);
  set("nickname",HIR"���ʷ�"NOR);
  set("class","soldier"); 
  set("str",40);
  set("cor",30);
  set("cps",30);
  set("kee",700);
  set("max_kee",700);
  set("force",1000);
  set("max_force",1000);
  set("force_factor",2);
  set("bellicosity",300);
  set("inquiry",([
      "��켦��" : "ż���٨�..hmm..��֪�����Ĩ�..������˵..��˯һ�º��ˡ�\n",
      
      ]));
  setup();
 add_money("gold",5); 
 ob=carry_object("/open/soldier/obj/hit");
  ob->wield();

 
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1,ob);   }
}

int accept_kill(object ob)
{
  message_vision( this_object()->name()+"��̫������.....��~\n",ob);
  command("say ��С�ӻ���ֱ����ɱ��");
  command("hehe"+this_player()->query("id"));
  this_object()->set("combat_exp",600000);
  this_object()->set("max_force",2500);
  this_object()->set("gin",1000);
  this_object()->set("sen",1000);
  this_object()->set("max_kee",2500);
  this_object()->set("kee",2500);
  this_object()->set("eff_kee",2500);
  this_object()->set("force",2500);
  set_skill("force",60);
  set_skill("spforce",60);
  set_skill("dodge",50);
  set_skill("move",50);
  set_skill("parry",60);
  set_skill("lance",70);
  set_skill("power-lance",60);
  set_skill("eagle-steps",50);
  map_skill("lance","power-lance");
  map_skill("dodge","eagle-steps");
  map_skill("force","spforce");
  this_object()->set("title","������");
  command("say ���ڴ���Ұ�����㿴���ҵ���������");
  command("wield hit");
  this_object()->kill_ob(this_player());
    return 1;
}

int accept_fight(object me)
{
    command("say ���ɡ���Ҫ��Ϊ�����׳�ͺ��۸���");
    command("pk "+this_player()->query("id"));
    setup();
    return 1;
    
}

void greeting(object ob)
{
  if(this_player()->query("id")=="hide")
  {
   command("say ���������˨ڡ� һ��ȥ�����̰ɣ���");
   command("lick hide");
  }
  else
  { command("pk "+this_player()->query("id"));}
}   
 
