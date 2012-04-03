#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_key();
void create()
{
        set_name("����ʹ",({"envoy"}));
        set("gender","����");
        set("class","poisoner");
	set("combat_exp",10000);
        set("age",26);
	set("long","ħ���ߴ�ʹ֮һ��Э��ִ�����ϴ�������̷�֮�¡�\n");
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",450);
        set("max_force",450);
        set("inquiry",([
        "Կ��"   : (: about_key :),
        "ʯ��"   : "����ħ���������̹�֮�������ƹ�һ���η�֮Կ���������ǲ���˵�ġ�",
        "������" : "��...��ȥ�������ǳ��ϰɡ�",
        ]));
        set_skill("unarmed",10);
        set_skill("parry",10);
        set_skill("dodge",20);
        set_skill("whip",15);
        set_skill("force",10);
        set_skill("poisonforce",15);
        set_skill("poison",16);
	set_skill("coldpoison",40);
        set_skill("nine-steps",30);
        map_skill("dodge","nine-steps");
        map_skill("force","poisonforce");
	map_skill("poison","coldpoison");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object("/obj/poison/faint_poison")->set_amount(20);
}
string about_key()
{
  object me = this_player();
  if(me->query_temp("have_get_red"))
        return "�Ҳ����Ѿ�����һ��Կ���ˡ�";
  if(me->query_temp("poison_help") != 3)
        return "Ŷ! ���������ϲ�û��Կ�ף���ҪԿ����ɶ! ";
  me->set_temp("can_get_red",1);
  command("say �һ������Ǽٴ��������������Ὣ������㡣");
  return "ҪԿ�׿��ԣ��ȸ��ұ�һ���������������ʵ����˵��";
}
int accept_fight(object me)
{
  object key;
  if(me->query_temp("can_get_red")) {
        me->delete_temp("can_get_red");
	me->set_temp("have_get_red",1);
        key = new(POISON_OBJ"red_key");
        key->move(me);
        command("smile");
        command("say ��Ȼ��Ӣ�۳����꣬���������������ѹֽ����������㡣");
	command("say ��! ��! ���Կ���Ҿͽ̸����ˡ�");
	return notify_fail("");
       }
  return 1;
}
