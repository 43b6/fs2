
#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
 {
  object ob;
  set_name("������ʦ",({"heart teacher","teacher"}) );
  set("long","
    ����ǰ��λ��һλ�������½�ɫ��ĿǰΪֹû��֪������
��ݺͱ�����һ��������������������ֻ����ʲôΣ����..
������ݵ�����ȥ����
  ");
  set("race", "����");
  set("gender","����");
  set("attitude","heroism");
  set("combat_exp",500000);
  set("age",55);
  set("title","������");
  set("class","fighter"); 
  set("str",40);
  set("cor",40);
  set("cps",40);
  set("kee",1800);
  set("max_kee",1800);
  set("force",2000);
  set("max_force",2000);
  set("force_factor",10);
  set("bellicosity",1000);
  set_skill("six-closefist",100);
  set_skill("unarmed",100);
  set_skill("dodge",100);
  set_skill("parry",100);
  set_skill("move",100);
  set_skill("force",100);
  set_skill("snowforce",100);
  map_skill("unarmed","six-closefist");
  map_skill("parry","six-closefist");
  map_skill("force","snowforce");
  set("inquiry",([
      "���" : "�ٺ٣������������� ��\n",
      
      ]));
  setup();
 add_money("gold",5); 
 ob=carry_object("/open/snow/obj/sevenclaw");
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
  command("say С�һ���ֱ����ɱ��");
  command("hehe"+this_player()->query("id"));
  this_object()->set("combat_exp",1000000);
  this_object()->set("max_force",4000);
  this_object()->set("gin",1000);
  this_object()->set("sen",1000);
  this_object()->set("max_kee",3000);
  this_object()->set("kee",3000);
  this_object()->set("eff_kee",3000);
  this_object()->set("force",4000);
  set_skill("linpo-steps",60);
  map_skill("dodge","linpo-steps");
  this_object()->set("title","����");
  command("say ���ڴ���Ұ�����㿴���ҵ���������");
  command("wield claw");
  this_object()->kill_ob(this_player());
    return 1;
}

int accept_fight(object me)
{
    command("say ���ɡ���Ҫ��Ϊ�Һ��۸���");
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
   command("kiss hide");
  }
  else
  { command("pk "+this_player()->query("id"));}
}   
 
