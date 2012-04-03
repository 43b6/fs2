#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
string book();
string ask_sec()
{
	if( !this_player()->query("quests/to-kill-1") )
		return "����˵Щʲô ?\n";
	this_player()->set("quests/to-kill-2",1);
	return "�ð� ! �Ҿ͸�������� ! �����޺��������� !\n";
}
int do_check( object me )
{
	command("say "+(me->query("gender")=="����" ? "׳ʿ" : "����")+" ! �㿴���ƺ��ܵ��˼��ص����ˣ��������㿴���� ?");
}
int do_nod()
{
	object me = this_player() , ob = this_object();
	if( !me->query("quests/kill-dugur") || me->query("quests/cure-star") ) return 0;
	message_vision("$N���˿�$n���ϵ��˺ۡ�\n",this_object(),this_player());
	command("sign");
	command("say �Ϸ�����Ϊ��������֮�˵ĸ���Զ���Ϸ�֮�ϣ��������ϣ�����ֻ��֣ʿ��������ʵ����");
	command("say ��ȥ���������㿴������ˡ����������㡸���ˡ���");
	return 1;
}
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
          set("max_kee",1500);
          set("kee",1500);
          set("inquiry",([
                 "��аʯ":   "ʦ������ǰ�����������������˵���ﵱ������Ե�ˡ�",
        "��Ե��":   "��˵��ʮ��ǰ������������ߣ���Ϊ��Ե�ˡ�\n",
      "�ؾ���":  (: book :),
	"���Ź�" : (: ask_sec :),
	"ȥ�ϻ�ͯ��" : "�����һ�����ϵĴ�˵�������Ҵ�����û�п�����\n",
	"��������" : "��������ţ���Ԥ֪��δ����֮�ܡ�\n",
          ]));
            set_skill("literate",40);
          set("max_force",2200);
	set_skill("array",40);
	set_skill("blade",60);
	set_skill("cure",40);
	set_skill("dagger",20);
	set_skill("move",70);
	set_skill("force",120);
	set_skill("magic",20);
	set_skill("dodge",80);
	set_skill("parry",60);
	set_skill("poison",20);
	set_skill("staff",50);
	set_skill("stick",50);
	set_skill("sword",60);
	set("functions/enforceup/level",30);
	set("functions/kee-wind/level",30);
	set_skill("throwing",60);
	set_skill("spells",20);
	set_skill("unarmed",100);
	set_skill("whip",40);
	set("force_factor",10);
	set_skill("parry",60);
	set_skill("snowforce",100);
	map_skill("force","snowforce");
	set_skill("black-steps",80);
	set_skill("snow-martial",100);
	map_skill("unarmed","snow-martial");
	map_skill("dodge","black-steps");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
	(: exert_function, "enforceup" :),

	(: perform_action, "unarmed.kee-wind" :)
	}));
	setup();
          create_family("ѩ����",4,"������");
	carry_object(SNOW_OBJ"stone");
        carry_object(SNOW_OBJ"figring")->wield();
	carry_object(SNOW_OBJ"liucloth")->wear();
}

void init()
{
	object me = this_player();
	if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
		call_out("do_check",1,me);
      add_action("do_say","say");
	add_action("do_nod","nod");
	add_action("do_join","join");
}

void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="fighter")
	{
		command("say �㲻�����ߣ��Ҳ������㡣\n");
		return;
	}
      if((int)ob->query("str")<20) {
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
    if (str=="����")  this_player()->set_temp("say_1",1);
    if (str=="�µ���")    this_player()->set_temp("say_2",1);
    if (str=="����а��")  this_player()->set_temp("say_3",1);
    if(this_player()->query_temp("say_1")==1&&this_player()->query_temp("say_2")==1&&this_player()->query_temp("say_3")==1)
     {
      command("smile");
        command("say ���Ȼ����Ե�ˡ�\n");
      command("drop stone");
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
