#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_ask();
void create()
{
        set_name("��������",({"elder"}));
        set("title","ڤ��ħ�̳���");
        set("gender","����");
        set("class","poisoner");
        set("combat_exp",73632);
        set("attitude","heroism");
        set("age",60);
        set("str", 40);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 45);
        set("force",650);
        set("max_force",650);
        set_skill("dodge", 70);
        set_skill("parry",60);
        set_skill("coldpoison",60);
        set_skill("poison",100);
        set_skill("unarmed",40);
        set_skill("whip",60);
        set_skill("nine-steps",30);
        set_skill("ming-snake",40);
        map_skill("dodge","nine-steps");
        map_skill("poison","coldpoison");
        map_skill("whip","ming-snake");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
        (: perform_action,"poison.five" :),
        (: perform_action,"poison.dark" :),
        }));
        set("force_factor", 5);
        set("inquiry",([
        "��ʯ":   (: do_ask :),
        ]));

        setup();
        carry_object(POISON_OBJ"green_whip")->wield();
        carry_object("/obj/poison/five_poison")->add_amount(30);
        carry_object("/obj/poison/rose_poison")->set_amount(30);
        carry_object("/obj/poison/faint_poison")->set_amount(30);
        carry_object("/obj/poison/dark_poison")->add_amount(30);
}

void init()
{
        add_action("do_say","say");
}
string do_ask()
{
        object me=this_player();
        command("hmm");
       if(!me->query_temp("moon-stone"))
                return "��������飿";
        me->set_temp("moon-stone",2);
        return "ร�����ɶ��ͷ�� ";
}
int do_say(string str)
{
  object me = this_player();
  string myclass=me->query("family/family_name");

  if(me->query_temp("moon-stone",2)){
        if(str == "��ʦ" )
          {
            me->set_temp("moon-stone",3);
            me->delete_temp("moon-stone",2);
            command("smile");
            command("say �ҵ���þ��ˡ�");
            command("say �콫��ʯ������������");
            new("/open/poison/obj/moon.c")->move(me);
            return 1;
          }
        else
           {
            command("say �ߣ�ԭ���Ǽ�϶�������ɣ�");
            me->delete_temp("mmon-stone");
            kill_ob(me);
           }
        return 0;
   }
}
