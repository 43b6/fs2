#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("ׯ����",({"master low","low"}));
	set("long","�����������������ŷ�ɥ����ڤ��ħ�̽�����ׯ���ᡱ������һ����������������Ϊ�˿���ʮ��������\n");
	set("gender","Ů��");
	set("guild_master",1);
	set("class","poisoner");
	set("nickname","��������");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",800);
	set_skill("literate",80);
	set("max_force",800);
	set_skill("move",100);
	set_skill("force",40);
	set_skill("dodge",100);
	set_skill("parry",60);
	set_skill("poison",100);
	set_skill("unarmed",40);
	set_skill("whip",60);
	set_skill("poisonforce",60);
	map_skill("force","poisonforce");
	set("force_factor",10);
	set_skill("coldpoison",100);
	set_skill("nine-steps",100);
	map_skill("dodge","nine-steps");
	set("chat_chance_combat",60);
	set("chat_msg_combat",({
		(: perform_action,"poison.five" :)
	}));
	map_skill("move","nine-steps");
	map_skill("poison","coldpoison");
	setup();
	create_family("ڤ��ħ��",3,"����");
	carry_object(POISON_OBJ"bleed_whip")->wield();
	carry_object("/obj/poison/rose_poison")->set_amount(30);
	carry_object("/obj/poison/five_poison")->set_amount(30);
	carry_object("/obj/poison/dark_poison")->set_amount(30);
}

int accept_object(object me,object ob)
{
  if(ob->query("id")=="moon-stone")
   {
        if(me->query("mark/love"))
      {
       command("say ����лл���ˡ�");
       return 1;
      }
    if(me->query("family/family_name")!="ڤ��ħ��")
    {
      command("thank "+me->query("id"));
      me->set("mark/love",1);
      me->add("combat_exp",2000);
      message_vision("װ���������Ƿ��Ƿ��\n",me);
      command("say ����лл�ㆪ��");
    }
 else {
        command("smile "+me->query("id"));
        if(me->query("gender")=="����")
        me->set("title","ڤ��ħ�̲Ժ�ʹ");
        if(me->query("gender")=="Ů��")
        me->set("title","ڤ��ħ�����ʹ");
        me->set("mark/love",1);
        me->add("combat_exp",2500);
        message_vision("ׯ��������΢Ц�� ^_^��\n",me);
        command("shout �ã�+"me->query("name")+ �ܳɹ�Ѱ����ʯ���������̸���������"��);
        command("say ���������ʸ�ѧϰ���̲�����ѧ�����֮�����ˡ�);
        }
  return 1;
    }
}


void init()
{
        add_action("do_join","join");
	add_action("do_say","swear");
}
int do_join()
{
        object me=this_player();
        if(this_player()->query("class"))
                return notify_fail("���Ѿ��������������ˡ�\n");
	if(!me->query_temp("poison_pass2")){
		command("say �㻹ûͨ�������ʽ�أ�");
		command("say ����ͨ�������ɡ�");
		return 1;
	       }
	else {
		command("smile");
		command("say �ܺã���Ȼ���������λ���ϵ�ͬ�⡣");
		command("say ������ڴ�����(swear)��̡�");
		me->set_temp("master_temp",1);
                say(HIC"��ͯ˵������ʩ�����ġ�����ħ�̡��������ʽ��\n"NOR);
		return 1;
	    }
}
int do_say(string str)
{
	object me = this_player();
	if(me->query_temp("master_temp")){
	   if(str == "����ħ��"){
		me->set("class","poisoner");
            message_vision(sprintf(HIC"$N����˵����"+str+"\n"NOR),me);
		message("system",
HIR "ͻȻ��......����������������.....\n\n�������ֶ�һ��ħ��ͽ"+me->name()+" !!!\n" NOR,users());
		command(":D");
		say(HIC"��Ů˵������ӭ����ħ�̣�����Ҫ��ӽ���Ŷ��\n"NOR);
		me->delete_temp("master_temp");
		return 1;
	      }
	  else {
            message_vision(sprintf(HIC"$N����˵����"+str+"\n"NOR),me);
	    command("say ��˵ʲôѽ��û����͹���ȥ��");
	    me->delete_temp("master_temp");
	    return 1;
	   }
    message_vision(sprintf(HIC"$N����˵����"+str+"\n"),me);
    command("say ����ͬ�����㷢����");
    return 1;
}
}
  void attempt_apprentice(object ob)
{
	if(this_player()->query("class")!="poisoner")
	{
		command("say �㲻������ħ�̵��ˣ����߰� !\n");
		return;
	}
	command("smile");
          command("recruit "+ob->query("id"));
}
