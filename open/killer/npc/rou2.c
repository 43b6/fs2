// open/killer/npc/rou2.c	2001/12/11
// ��һ���汾�Ĳ�������Ի�֮��ɱ����������
// ��Ϊ���ٽ��ڻ�֮��ɱ֮���ɱ��ռ�к���Ҫ�Ĳ���
// Ϊ�˽��ͳ�ʽ�ĸ��Ӷȣ�����������һ���汾
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_trial();
string ask_step();

int accept_object (object me,object ob)
{//��ʱ������Ҫ�����й���ë����Ĳ��֣������Ȳ�����
  object ob2;

  if (me->query_temp("firstpart") != 11)
  {
    command ("say �񾭲��������������\n");
    return 0;
  }
  if(ob->query("id") == "green_ring") 
  {
     message_vision(" ���ٽ���������������ϸ�ļ����һ��\n",me);
     message_vision(" ���ͷ˵��û�������ʧ��ʮ����Ľ���\n",me);
     message_vision(" �����Ҵ�����ֹ���Ӱ����....\n",me);
     message_vision(" ˵�����ٿ��ٵĽ�����Ҫ��ָ�����㣬��������\n",me);
     message_vision(" ��Ϊ�����л��ǲ��Ļ��������Ժܿ�ľʹ�������\n",me);
     me->set_skill("dark-steps",50);
     command("say Ϊ��Ҫͨ�������磬�����ʹ����������ȹ�");
     command("say �����ʹ�� perofrm dodge.wind-steps ������");
     command("say ���뵽�ˣ���һ�׶ε������Ѿ����");
     destruct(ob);
     me->set("ninja/firstpart",1);
     me->set("dark-steps/wind-steps",1);
     return 1;
  }
  return 0;
}

void create()
{
        set_name("����",({"chil-rou","rou"}));
        set("long","��˵������Ϊħ�̵�һԱ��������ʼ������������������롣\n
                     ����ó�����֮�����ֻ�ɱ���ܼ�--ħ��ɱ\n");
        set("gender","����");
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
        "����" : (: do_trial :),
        "������" : (: ask_step :),
        ]));
        setup();
        carry_object("/open/killer/obj/lustar")->set_amount(100);
        add_money("gold",20);
}

string do_trial()
{
  object me = this_player();

   if(!me->query("ninja/firstpart"))
   {//��ұ���Ҫ�����һ���ݲſ��Խ������Ĳ���
        command("say ����̫���ˣ������ֹ���Ӱ�����������ûѧ�����������������\n");
        return"say �úõİѸ�ѧ��ѧ����˵��\n";
   }
   else
   {
   	command("sm "+me->query("id"));
   	//�ƶ����������ڵ�����
   	//me->move("/open/killer/ninja/trailbeginrm.c");	
   	return "�ߣ���֪��\n";
   }
}

string ask_step()
{
  object me = this_player();

   if(me->query_temp("firstpart") ==11)
   {//��ұ���Ҫ�����һ���ݲſ��Խ������Ĳ���
        command("say ��Ҫ֪��������ë���������˵\n");
        return"give green_ring to rou\n";
   }
   else
   {
   	command("sm "+me->query("id"));
   	me->set_temp("firstpart",6);
   	command("say �Ҳ�֪���������!\n");
   	me->move("/open/killer/room/pillrm.c");	
   	return "�����֪��!!!!\n";
   }
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
  call_out("greeting",1 , ob);   }
}

void greeting(object ob)
{
   if((ob->query_temp ("firstpart") !=5) && (ob->query_temp ("firstpart") !=11))
   {
    command("sm "+ob->query("id"));  
    command("say ����ô��������ģ�˵��!!"); }
   else 
    command("say ���Ҹ��!!�� \t");
}
