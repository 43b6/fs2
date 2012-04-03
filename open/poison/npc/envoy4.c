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
	set("long","ħ���ߴ�ʹ֮һ��Э��ִ������ִ�н��е��ӷ���֮�̷���\n");
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
	set("kee",450);
	set("eff_kee",450);
	set("max_kee",450);
        set("force",450);
        set("max_force",450);
        set("inquiry",([
        "Կ��"   : (: about_key :),
        "ʯ��"   : "����ħ���������̹�֮�������ƹ��ط��η�֮Կ���������ǲ���˵�ġ�",
        "������" : "��...��ȥ�������ǳ��ϰɡ�",
        ]));
        set_skill("unarmed",10);
        set_skill("parry",10);
        set_skill("dodge",20);
        set_skill("whip",15);
        set_skill("force",10);
	set_skill("poisonforce",40);
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
  if(me->query_temp("have_get_blue"))
        return "�Ҳ����Ѿ�����һ��Կ���ˡ�";
  me->set_temp("can_get_blue",1);
  command("hehe");
  command("say ��ҪԿ�׿��ԣ��ȸ��ұ��Ա�����˵��");
  return "�б��µĻ���Կ���Ҿ�˫�ַ��ϡ�";
}
int accept_fight(object me)
{
  if(this_object()->is_fighting())
        return notify_fail("��û����������æ��?\n");
  if(me->query_temp("can_get_blue")) {
        me->delete_temp("can_get_blue");
	this_object()->set("fight_turn",10);
        command("grin");
        command("���ɣ�ʹ����Ŀ��ұ������ҿ�����");
        remove_call_out("fighting1");
        call_out("fighting1",1,me);
        return 1;
      }
  return 1;
}
void fighting1(object me)
{
  object ob = this_object();
  int turn = ob->query("fight_turn") -1;
  if(!turn && ob->is_fighting()) {
	ob->remove_all_killer();
	 message_vision("ͻȻʹ�ߵ���$N�Ĺ��������ֻ�Ծ������\n",me);
	remove_call_out("fighting1");
        remove_call_out("won");
        call_out("won",1,me);
        }
  if(ob->is_fighting() && me->is_fighting()) {
          ob->set("fight_turn",turn);
	  set("kee",450);
	  set("eff_kee",450);
	  set("max_kee",450);
          remove_call_out("fighting1");
          call_out("fighting1",1,me);
         }
/*
  else  if(!me->query_temp("have_get_blue"))
          command("say ��! ��! "+me->query("name")+"�������ţ���Ҳ��������Կ�ס�");
*/
}

void won(object me)
{
  object key = new(POISON_OBJ"blue_key");
  me->set_temp("have_get_blue",1);
  key->move(me);
  command("smile");
  command("say ���Ȼ������������Կ���Ҿͽ������ˡ�");
}
