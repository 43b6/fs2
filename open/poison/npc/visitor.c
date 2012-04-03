#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_quest();

void create()
{
        set_name("�ÿ�",({"visitor"}));
        set("gender","����");
        set("combat_exp",612);
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("inquiry",([
        "��ʯ"   : "�....�����֪�������",
        "����"   : (: about_quest :),
        ]));
  
        setup();
        carry_object("/open/poison/obj/card");
}

void init()
{
  add_action("do_say","say");
}

string about_quest()
{
  object me = this_player();
  if(me->query_temp("moon-stone",1))
        return "�㲻���ʹ�������?";
  me->set_temp("moon-stone",1);
  command("say ����һ�ߡ�");
  command("say ���ǰ����������");
  return "���ܽӳ�������";
}
int do_say(string str)
{
  object me = this_player();
  if(me->query_temp("moon-stone") != 1)
        return 0;
  if(str !="ħ��һ��")
       {
        delete_temp("moon-stone");
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
  command("smile");
  command("say ��һ���ǡ���ʦ���ˡ�");
  command("say ���ȥƽ���Ҵ������ϰɡ�");
}
void greeting2(object me)
{
  command("say ����һ������ġ�");
  command("say �˼Ҳ������ˡ�");
  me->set_temp("moon-stone",1);
}




