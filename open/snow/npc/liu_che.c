#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
string book();
void create()
{
           set_name("��ȫ��",({"master liu","liu"}));
          set("long","����ѩ������֮�ס���Ӱ��š���ȫ�飬һ˫���ţ��ݺ����֡�\n");
		set("gender","����");
	set("guild_master",1);
	set("class","fighter");
          set("nickname","��Ӱ���");
          set("combat_exp",1000000);
          set("attitude","heroism");
          set("age",47);
          set("title","ѩ���ɵ��Ĵ�������");
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
          set("force",2200);
          set("inquiry",([
                 "��аʯ":   "ʦ������ǰ�����������������˵���ﵱ������Ե�ˡ�",
        "��Ե��":   "��˵��ʮ��ǰ������������ߣ���Ϊ��Ե�ˡ�\n",
      "�ؾ���":  (: book :),
          ]));
            set_skill("literate",40);
          set("max_force",2200);
	set_skill("array",40);
	set_skill("blade",40);
	set_skill("cure",40);
	set_skill("dagger",40);
	set_skill("move",70);
	set_skill("force",120);
	set_skill("magic",20);
	set_skill("dodge",70);
	set_skill("parry",60);
	set_skill("poison",20);
	set_skill("spells",20);
	set_skill("staff",50);
	set_skill("stick",50);
	set_skill("sword",50);
	set_skill("throwing",60);
	set_skill("unarmed",100);
	set_skill("whip",70);
	set("force_factor",10);
           set_skill("parry",60);
          set_skill("snowforce",100);
           map_skill("force","snowforce");
          set_skill("snow-martial",100);
               map_skill("unarmed","snow-martial");
              map_skill("dodge","snow-martial");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
	(: exert_function, "enforceup" :),

	(: perform_action, "unarmed.kee-wind" :)
	}));
	setup();
          create_family("ѩ����",4,"������");
	carry_object(SNOW_OBJ"stone");
}

void init()
{
      add_action("do_say","say");
	add_action("do_join","join");
}
  void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="fighter")
	{
		command("say �㲻�����ߣ��Ҳ������㡣\n");
		return;
	}
      if((int)ob->query("str")<20)
{
          command("say ѩ�Թ��Ҫ��������˲���ѧ���ҿ�����ذ�!\n");
return;
      }
      command("hmm");
          command("recruit "+ob->query("id"));
}
int do_say(string str)
{
     object who;
        who=this_player();
	if(who->query("get_stone")==1)
           return 0;
    if (str=="֣ʿ��")  this_player()->set_temp("say_1",1);
    if (str=="Ī��")    this_player()->set_temp("say_2",1);
    if (str=="���³�")  this_player()->set_temp("say_3",1);
    if(this_player()->query_temp("say_1")==1&&this_player()->query_temp("say_2")==1&&this_player()->query_temp("say_3")==1)
     {
      command("smile");
        command("say ���Ȼ����Ե�ˡ�\n");
      command("drop all");
	this_player()->set("get_stone",1);
      }
    return 0;
}
string book()
{
   object me=this_player();
   if(me->query("allow_study")==1)
          return "��...���Ǹ���˵������\n";
   command("say ���˱��ɲ����صأ������б�����Ҫ���š�");
   if(me->query("family/family_name")!="ѩ����")
              return "�㲻�Ǳ��ɵĵ��ӣ�û�ʸ�����ɵ��顣\n";
   if(me->query("combat_exp")<25000)
         return "�������̶ֳ�Ҫ���ؾ�����飬����ĺܡ�\n";
   me->set("allow_study",1);
   return "�ðɣ���׼����ؾ����ڵ��飬����ѩ����¼����Ӱ�����š��ͺ�Ӱ�з�¼������ֻ׼��һ�������Ҷ�һ�Ρ�\n";
}
int do_join()
{
	if(this_player()->query("class"))
		return notify_fail("���Ѿ��������������ˡ�\n");
	this_player()->set("class","fighter");
	message("system",
	HIC "����Ӣ��.....\n\nһ������"+this_player()->name()+"������ !!!\n" NOR,users());
	return 1;
}
