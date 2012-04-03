#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_ask();
string poison_help();
string give_key();
void create()
{
        set_name("ִ������",({"elder"}));
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
        set("int", 50);
        set("force",650);
        set("max_force",650);
        set_skill("dodge",70);
        set_skill("parry",60);
        set_skill("poison",100);
        set_skill("coldpoison",60);
        set_skill("unarmed",40);
        set_skill("whip",60);
        set_skill("ming-snake",40);
        set_skill("nine-steps",30);
        map_skill("whip","ming-snake");
        map_skill("dodge","nine-steps");
        map_skill("poison","coldpoison");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
	(: perform_action,"poison.five" :),
	(: perform_action,"poison.dark" :),
	}));
        set("force_factor",5);
        set("inquiry",([
        "������" : (: poison_help :),
        "���"   : (: do_ask :),
        "ʯ��"   : (: give_key :),
        "�����" : "����ƽʱ�������ڴ���֮�á�\n",
        ]));

        setup();
        carry_object(POISON_OBJ"stonekey");
        carry_object(POISON_OBJ"green_whip")->wield();
        carry_object("/obj/poison/rose_poison")->set_amount(30);
        carry_object("/obj/poison/five_poison")->set_amount(30);
        carry_object("/obj/poison/dark_poison")->set_amount(30);
}
void init()
{
     add_action("do_swear","swear");
}

string poison_help()
{
   object me = this_player();
   if(me->query_temp("poison_help") < 2)
        return "�Ҳ�֪������˵Щʲô?\n" ;
   if(!present("firer",me))
        return "��ֻ����������£����������ϲ��޳���\n";
   message_vision(HIC"$N��ʾ�������ƣ�����ʹ�߼�æ��ӡ�\n",me);
   return "����Ҫ��֮����ؾ���ǰЩ���ӱ���������ʯ��֮�ˡ�\n";
}
string give_key()
{
   object me = this_player();
   object key = new("/open/poison/obj/stonekey");
   if(me->query_temp("poison_help") < 2 && me->query("lotch") !=5)
        return "�Ҳ�֪������˵Щʲô?\n" ;
   if(!present("firer",me))
        return "��ֻ����������£����������ϲ��޳���\n";
   key->move(me);
   command("say ʯ�α����ڴ˵ض��Ϸ���ʯ���ڡ�\n");
  message_vision(HIC"���Ͻ���$Nһ��ʯԿ�ס�\n",me);
   return "����һ��������ʯ�ſ��صĴ�ʯ��\n" ;
}

string do_ask()
{
   object me=this_player();
   if(!me->query_temp("poison_pass1")){
        return "���ȹ����������ϰɡ�\n" ;
       }
   else {
     command("smile");
     command("say ��Ȼ�����Ѿ�ͬ���ˣ���Ҳ��Ϊ���㡣");
     me->set_temp("elder2_temp",1);
     return "����ڴ�����(swear)�ؽ̹�ɡ�\n" ;
    }
}
int do_swear(string str)
{
   object who = this_player();
   if(who->query_temp("elder2_temp")){
         if(str=="�ؽ̹�"){
            who->set_temp("poison_pass2",1);
            message_vision(sprintf(HIC"$N����˵����"+str+"\n"NOR),who);
            command("say �ܺã����г��⣬����ʹ�Ӧ�㡣");
            command("say Ҫ�ú����ؽ̹�Ŷ��");
            command("say �����ȥ�����Ǳ����(join)�ˡ�");
            who->delete_temp("elder2_temp");
            return 1;
           }
         else {
           message_vision(sprintf(HIC"$N����˵����"+str+"\n"NOR),who);
           command("say �㷢����ʲô�ģ�");
           command("say ���ˣ��㻹�ǻ�ȥ�ɡ�");
           who->delete_temp("elder2_temp");
           return 1;
          }
     }
    message_vision(sprintf(HIC"$N����˵����"+str+"\n"),who);
    command("say �㷢ʲô��ѽ������ͬ����");
  return 1;
}

