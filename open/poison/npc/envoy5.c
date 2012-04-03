#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_firer();
void create()
{
        set_name("����ʹ",({"envoy"}));
        set("long","ħ���ߴ�ʹ֮һ��ƽʱΪ�������ݽ��
��ʱʹ����ɫ�Ҵң����仹ϵһ��������֪����Ϊ���\n");
        set("gender","����");
        set("class","poisoner");
	set("combat_exp",12000);
        set("age",26);
	set("str", 30);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",450);
        set("max_force",450);
	set_skill("force",40);
	set_skill("poisonforce",30);
	map_skill("force","poisonforce");
        set_skill("dodge",30);
        set_skill("nine-steps",20);
        map_skill("dodge","nine-steps");
	set_skill("unarmed",50);
        set_skill("whip",40);
	set_skill("parry",10);
	set_skill("poison",30);
	set_skill("coldpoison",40);
	map_skill("poison","coldpoison");
        set("inquiry",([
        "�����" : "������ʲô����û�������м�����?",
        "����"   : "����������Ľ���û���͸����й�ѽ��",
        "����"   : (: about_firer :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object(POISON_OBJ"snake_whip")->wield();
        carry_object("/obj/poison/faint_poison")->set_amount(20);
}
void init()
{
  add_action("do_nod","nod");
  add_action("do_say","say");
  add_action("do_shake","shake");
}
string about_firer()
{
  object me = this_player();
  if(me->query_temp("get_firer"))
        return "�㲻���ʹ�������?";
  me->set_temp("get_firer",1);
  command("say ����ƽ��������װ������֮�á�");
  command("say �����������п�Ⱥħ�ᣬҪ�Ҵ���������ħ����");
  return "����Щ����������Ը��Ը�����æ?";
}
int do_nod()
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  me->set_temp("get_firer",2);
  remove_call_out("greeting1");
  call_out("greeting1",1,me);
  return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  me->delete_temp("get_firer");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
int do_say(string str)
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  if(str != "yes" && str != "Ը��")
       {
        delete_temp("get_firer");
        remove_call_out("greeting2");
        call_out("greeting2",1,me);
        return 0;
       }
  me->set_temp("get_firer",2);
  remove_call_out("greeting1");
  call_out("greeting1",1,me);
  return 0;
}
void greeting1(object me)
{
  object ob = new("/open/poison/obj/firer");
  ob->move(me);
  command("smile");
  command("say �����Ƹ��㣬��Ͱ��Ҵ�������������");
}
void greeting2(object me)
{
  command("agree");
  command("say �㲻��æ�����ˣ�������һ�����飬�����ҵ��г̡�");
  command("say ���ǿɶ񣬿��С�");
  kill_ob(me);
}
