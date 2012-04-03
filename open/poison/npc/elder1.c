#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_ask();
void create()
{
        set_name("˵������",({"elder"}));
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
        "���":   (: do_ask :),
        ]));

        setup();
        carry_object(POISON_OBJ"green_whip")->wield();
	carry_object("/obj/poison/five_poison")->add_amount(30);
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
        if(me->query("poison_low"))
                return "�㲻���Ѿ�����ڤ��ħ���ˡ�";
        if(!me->query("class"))
                return "�㻹����ѡ��ְҵ�ɡ�";
        me->set_temp("elder1_temp",1);
        return "���ǲ������������ҽ̵�? ";
}
int do_say(string str)
{
  object me = this_player();
  string myclass=me->query("family/family_name");

  if(me->query_temp("elder1_temp")){
        if(str == "yes" || str == "��")
          {
            me->delete_temp("elder1_temp");
            me->set_temp("poison_pass1",1);
            message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),me);
            command("smile");
        if(myclass == "ڤ��ħ��"){
                command("say ��Ȼ��ֱ�����ڲ���������ʽ���룬����������ҳϡ�");
                command("say �Ҿ�ͬ������ʽ��Ϊ�ҽ�һԱ�������ú�ѧϰ��");
                return 1;
                }
        if(myclass || (me->query("class")!="poisoner")){
                command("say ��Ȼ���Ѽ�����ɣ�Ȼ�����������ɡ�");
                command("say �мǽ�����ί�����ɣ���Ҫ�ŷ���");
                command("say �����ȥ������������ͬ���ˡ�");
                return 1;
                }
            command("say ���㲻������Զ�������ľ����ϣ��Ҿ�ͬ���㡣");
            command("say �����ú�ѧϰ��");
            return 1;
          }
        else
           {
            message_vision(sprintf(HIC"$N˵����"+str+"\n"NOR),me);
            command("say �ߣ���Ȼû�������ͱ�����");
            me->delete_temp("elder1_temp");
            return 1;
           }
        return 0;
}
}
